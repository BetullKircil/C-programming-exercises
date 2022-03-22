#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n, temp;
	printf("Please enter the limit of the array: \n");
	scanf("%d", &n);
	int A[n];
	for(i= 0; i< n; i++){
		printf("A'nin %d. elemanini giriniz: \n", i+1);
		scanf("%d", &A[i]);
	}
	for(i=0; i<n/2; i++){
		//A[i] = A[n-i-1];
		temp = A[i];
		A[i] = A[n-i-1];
		A[n-i-1] = temp;
	}
	printf("\n");
	for(i= 0; i<n; i++){
		printf("%d\n", A[i]);
	}
	
	return 0;
}
