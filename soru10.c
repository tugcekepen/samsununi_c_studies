#include <stdio.h>

int main(){
	float dizi[]={1,2,3,4,5,6,7,8,9};
	float toplam=0, ortalama;
	int i ;
	
	for (i=0 ; i<10 ; i++){
		toplam = toplam + dizi[i];
	}
	ortalama = toplam / 9 ;
	printf("Dizi toplami = %.2f\nDizi ortalamasi = %.2f", toplam, ortalama);
	
	
	return 0;
}
