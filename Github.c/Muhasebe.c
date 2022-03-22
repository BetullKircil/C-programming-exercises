#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	printf("***PAZARLAMA SIRKETIMIZE HOS GELDINIZ***\n");
	int elemanNo, sUrunNo, urunMiktari, satisTutari, elemanBasinaSatisTutari, urun1Fiyati, urun2Fiyati, urun3Fiyati, i,toplamSatisAdedi, toplamSatisTutari;
	urun1Fiyati = 10;
	urun2Fiyati = 20;
	urun3Fiyati = 30;
	i = 1;
	for(i = 1; i <= 3; i++){
	printf("Lutfen eleman numaranizi yaziniz: \n");
	scanf("%d", &elemanNo);
	printf("Sayin %d numarali elemanimiz lutfen satisi yapilan urun numarasini ve satis miktarini giriniz: \n", elemanNo );
	scanf("%d%d", &sUrunNo, &urunMiktari);
	if(sUrunNo == 1){
		satisTutari = urun1Fiyati * urunMiktari;
		printf("%d numarali elemanin yaptigi satis tutari: %d\n", elemanNo, satisTutari);
	}
	else{
		if(sUrunNo == 2){
			satisTutari = urun2Fiyati * urunMiktari;
			printf("%d numarali elemanin yaptigi satis tutari: %d\n", elemanNo, satisTutari);	
		}
		else{
			satisTutari = urun3Fiyati * urunMiktari;
			printf("%d numarali elemanin yaptigi satis tutari: %d\n", elemanNo, satisTutari);
		}
	}
	toplamSatisAdedi += urunMiktari;
	toplamSatisTutari += satisTutari;
	}
	
	printf("Toplam satis adedi: %d\n", toplamSatisAdedi);
	printf("Toplam satis tutari: %d\n", toplamSatisTutari);
	
	return 0;
}
