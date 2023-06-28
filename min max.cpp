#include <stdio.h>

int main()
{
    int arr[100];
    int i, max, min, number;
	
    printf("\nTemukan Nilai Maximum dan Minimum dalam Array :\n");
    printf("--------------------------------------------------\n");	

    printf("Masukkan jumlah Elemen yang akan disimpan dalam array: ");
    scanf("%d", &number);
   
    printf("Masukkan %d Bilangan dalam array:\n", number);
    for(i = 0; i < number; i++)
    {
        printf("Bilangan ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    // Menghitung nilai maksimum dan minimum dalam array
    for(i = 1; i < number; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\n--------------------------------------------------\n");
    printf("Maximum Bilangan adalah: %d\n", max);
    printf("Minimum Bilangan adalah: %d\n", min);

    return 0;
}

