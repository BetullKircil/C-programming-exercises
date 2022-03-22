#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, dizi[10], enBuyuk= 0;
	for(i= 0; i<10; i++){
		printf("%d. elemanini giriniz: \n", i+1);
		scanf("%d", &dizi[i]);
	}
	for(i= 0; i<10; i++){
		if(dizi[i]> enBuyuk){
			enBuyuk = dizi[i];
		}
	}
	printf("Dizinin en buyuk elemani: %d", enBuyuk);
	return 0;
}
