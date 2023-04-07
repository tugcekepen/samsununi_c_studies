#include <stdio.h>

int main(){
	float dizi[]={15,1,12,2,10};
	float enkucuk, enbuyuk;
	int i;
	
	enkucuk= dizi[i];
	enbuyuk= dizi[i];
	
	for (i=0 ; i<5; i++){
		if (enbuyuk<dizi[i]){
			enbuyuk=dizi[i];
		}
		if (enkucuk>dizi[i]){
			enkucuk=dizi[i];
		}
	}
	printf("En kucuk = %.2f\n", enkucuk);
	printf("En buyuk = %.2f", enbuyuk);
	
	
	
	return 0;
}
