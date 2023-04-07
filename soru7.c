#include <stdio.h>

int main()
{
	int sayi, us, uslusayi=1;
	int i=1;
	
	printf("Ussunu almak istediginiz sayiyi girin: ");
	scanf("%d", &sayi);
	printf("Sayinin kacinci ussunu almak istiyorsunuz?: ");
	scanf("%d", &us);
	
	if (us==1){
		uslusayi = sayi;
	}
	else if (us!=1){
		for ( i ; i<=us ; i++){
			uslusayi = uslusayi * sayi;
		}
	}
	
	printf("Uslu sayi: %d", uslusayi);
	
	return 0;
}
