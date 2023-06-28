#include <stdio.h>
main () {
	int A[3][3], jml = 0,i,j, jml1 ;
	puts("input matrik A");
	for (i=0; i<=3; i++) {
		for (j=0; j<3; j++) {
			printf("A[%d][%d]= ",i+1,j); scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<3; i++) { printf("|");
		for (j=0; j<3; j++) {

			if (i==0) 
			jml+=A[i][j];
			if(i==j)
			jml1+=A[i][j];
				printf("%d",A[i][j]);
		}printf("|\n");
	}
	
	printf("hasil penjumlahan diagonal = %d\n", jml1);
	
}
