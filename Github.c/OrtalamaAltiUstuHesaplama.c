#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(void){
	int toplam, ortalama, i, sayi, ortalamaAlti = 0, ortalamaUstu = 0;
	printf("Lutfen sayi adedini giriniz: \n");
	scanf("%d", &sayi);
	int dizi[sayi];
	for(i = 0; i <sayi; i++){
		printf("Lutfen dizinin %d. elemanini giriniz: \n", i+1);
		scanf("%d", &dizi[i]);
		toplam+= dizi[i];
		ortalama = toplam/ sayi;
	}
	printf("Toplam: %d\n", toplam);
	printf("Ortalama: %d\n", ortalama);
	
		for(i = 0;i < sayi; i++){
			if(dizi[i]< ortalama){
				printf("%d, ortalamadan dusuktur.\n", dizi[i]);
				ortalamaAlti++;
			}
			else if(dizi[i] > ortalama){
				printf("%d, ortalamadan buyuktur.\n", dizi[i]);
				ortalamaUstu++;
			}
			else
				printf("%d, ortalamaya esittir\n", dizi[i]);
			
			
		}
	printf("Ortalamanin ustunde %d tane sayi vardir\n", ortalamaUstu);
	printf("Ortalamanin altinda %d tane sayi vardir\n", ortalamaAlti);
	return 0;
}
