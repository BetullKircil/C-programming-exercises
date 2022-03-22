#include <stdio.h>
#include <stdlib.h>
int main(){
	int dizi[100], aranacakBilgi, bulundu = 0, i;
	for(i= 0; i< 100; i++){
		dizi[i] = i*2;
	}
	printf("Please enter the data you will look for in the array\n");
	scanf("%d", &aranacakBilgi);
	for(i= 0; i<100; i++){
		if(aranacakBilgi == dizi[i]){
			bulundu = i;
			printf("The data you have looked for in this array was found in %d. index\n", i);
			break;
		}
	}
	if(bulundu==0){
		printf("The data you have looked for in this array was not found.\n", i);
	}
		return 0;
}
