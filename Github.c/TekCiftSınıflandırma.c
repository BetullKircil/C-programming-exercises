#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
	int sayi, i;
	printf("Lutfen bir sayi giriniz: \n");
	scanf("%d", &sayi);
	int dizi[i];
	for(i = 0; i< sayi; i++){
		printf("Lutfen dizinin %d. elemanini giriniz: \n", i+1);
		scanf("%d", &dizi[i]);
	}	
	for(i = 0; i< sayi; i++){
		printf("Dizinin %d. elemani: %d\n", i+1, dizi[i]);
	}
	int sayacCift= 0, sayacTek = 0;
	int tek[sayi], cift[sayi];
	for(i = 0; i< sayi; i++){
		if(dizi[i]%2== 0){
			dizi[i] = cift[sayacCift];
			sayacCift++;
		}
		else{
			tek[sayacTek] = dizi[i];
			sayacTek++;
		}
	}
	printf("%d tane eleman cifttir.\n", sayacCift);
	for(i=0;i<sayacCift; i++){
		printf("Cift elemanlar: %d\n", cift[i]);
	}
	printf("%d tane eleman tektir.\n", sayacTek);
	for(i=0;i<sayacTek; i++){
		printf("Tek elemanlar: %d\n", tek[i]);
	}
	return 0;
}

