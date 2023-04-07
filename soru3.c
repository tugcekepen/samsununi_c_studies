#include <stdio.h>

int main()
{
	double sayi1, sayi2, sayitutucu;
	printf("1. sayiyi giriniz: ");
	scanf("%lf", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%lf", &sayi2);
	
	sayitutucu = sayi2 ;
	sayi2 = sayi1 ;
	sayi1 = sayitutucu ;
	
	printf("\n1.sayi = %.2lf", sayi1);
	printf("\n2.sayi = %.2lf", sayi2);
	
	return 0;
	
}
