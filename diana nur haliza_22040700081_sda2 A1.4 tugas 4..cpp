#include <stdio.h>
#define MAX_SIZE 3


typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *stack) {
    stack->top = -1;
}

int isStackEmpty(Stack *stack) {
    return stack->top == -1;
}

int isStackFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (isStackFull(stack)) {
        printf("Stack overflow\n");
        return;
    }
    stack->data[++stack->top] = value;
}

int pop(Stack *stack) {
    if (isStackEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->data[stack->top--];
}

// Implementasi Queue
typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isQueueEmpty(Queue *queue) {
    return queue->front == -1 && queue->rear == -1;
}

int isQueueFull(Queue *queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(Queue *queue, int value) {
    if (isQueueFull(queue)) {
        printf("Queue overflow\n");
        return;
    }
    if (isQueueEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->data[queue->rear] = value;
}

int dequeue(Queue *queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }
    int value = queue->data[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return value;
}

int main() {
    // Mendapatkan 2 angka terakhir dari NIM
    int nim = 2019470040;
    int digit2 = (nim % 100) / 10;
    int digit1 = nim % 10;

    // Array awal [4,x,x]
    int array[3] = {4, digit2, digit1};

    // Inisialisasi Stack dan Queue
    Stack stack;
    initStack(&stack);
    Queue queue;
    initQueue(&queue);

    // Input 3 nilai
    for (int i = 0; i < 3; i++) {
        int value;
        printf("Masukkan nilai ke-%d: ", i+1);
        scanf("%d", &value);
        enqueue(&queue, value);
        push(&stack, value);
    }

    // Hapus 1 nilai
    int deletedValue = dequeue(&queue);
    printf("Nilai yang dihapus dari queue: %d\n", deletedValue);
    deletedValue = pop(&stack);
    printf("Nilai yang dihapus dari stack: %d\n", deletedValue);

    // Membaca queue
    printf("Isi queue: ");
    while (!isQueueEmpty(&queue)) {
        int value = dequeue(&queue);
        printf("%d ", value);
    }
    printf("\n");

    // Membaca stack
    printf("Isi stack: ");
    while (!isStackEmpty(&stack)) {
        int value = pop(&stack);
        printf("%d ", value);
    }
    printf("\n");

    return 0;
}

