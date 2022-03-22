#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n, bas, orta, son, data;
	printf("Please enter the limit of the array\n");
	scanf("%d", &n);
	int dizi[n];
	for(i= 0; i<n; i++){
		dizi[i] = i;
	}
	bas = 0;
	son = n-1;
	orta = (bas + son)/2;
	printf("Please enter the data you wanna search\n");
	scanf("%d", &data);
	
	while(bas<=son){
		if(data<dizi[orta]){
			son = orta;
			orta = (bas + son)/2;
			}
		else if(data==dizi[orta]){
			printf("The data you have searched was found in the %d. index\n", orta);
			break;
		}
		else{
			bas = orta;
			orta = (bas + son)/2;
		}
}
	if(bas>son){
		printf("The data you have searched was not found\n");
	}
	
	return 0;
}
