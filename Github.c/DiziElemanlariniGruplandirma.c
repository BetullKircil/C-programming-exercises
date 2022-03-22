#include <stdio.h>
#include <stdlib.h>
int main(){
		int i, n, sayacTek = 0, sayacCift = 0;
	printf("PLease enter the limit of the array \n");
	scanf("%d", &n);
	int array[n], tek[n], cift[n];
	for(i= 0; i<n; i++){
		array[i] = i+1;
		printf("%d. element of the array: %d\n", i+1, array[i]);
	}
	for(i= 0; i<n; i++){
		if(array[i]%2==0){
			cift[sayacCift] = array[i];
			sayacCift++;
		}
		else{
			tek[sayacTek] = array[i];
			sayacTek++;
		}
	}
	printf("%d tane cift sayi vardir\n", sayacCift);
	printf("%d tane tek sayi vardir\n", sayacTek);
	for(i=0; i<sayacCift; i++){
		printf("%d sayisi cifttir.\n", cift[i]);
	}
	printf("\n\n");
	for(i= 0; i<sayacTek; i++){
		printf("%d sayisi tektir.\n", tek[i]);
	}
	n
	return 0;
}
