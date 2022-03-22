#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
	int sayi,i,j, temp;
	printf("Lutfen dizideki eleman sayisini giriniz: \n");
	scanf("%d",&sayi);
	int dizi[sayi];
	for(i = 0;i < sayi;i++){
		printf("Dizinin %d. elemanini giriniz: \n", i+1);
		scanf("%d", &dizi[i]);
	}
	for(i = 0; i< sayi -1; i++){
		for(j = 0; j < sayi -i-1; j++){
			if(dizi[j]< dizi[j+1]){
				temp = dizi[j];
				dizi[j] = dizi[j +1];
				dizi[j+1] = temp;
			}
		}
	}
	for(i = 0; i<sayi; i++){
		printf("Dizinin %d. elemani: %d\n", i+1, dizi[i]);
	}
	return 0;
}
