#include <stdio.h>

int main()
{
	double sayi1, sayi2, sayi3, enbuyuk, enkucuk;
	
	printf("1. sayiyi giriniz: ");
	scanf("%lf", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%lf", &sayi2);
	printf("3. sayiyi giriniz: ");
	scanf("%lf", &sayi3);
	
	if (sayi1>sayi2 && sayi1>sayi3) {enbuyuk=sayi1;}
	else if (sayi2>sayi1 && sayi2>sayi3) {enbuyuk=sayi2;}
	else if (sayi3>sayi1 && sayi3>sayi2) {enbuyuk=sayi3;}
	else {printf("Sayilar icerisinde en az iki sayi birbirine esit.Tarama yapilamaz.\n"); enbuyuk=0; enkucuk=0;}
	
	if (enbuyuk==sayi1 && sayi2<sayi3) {enkucuk=sayi2;}
	else if (enbuyuk==sayi1 && sayi3<sayi2) {enkucuk=sayi3;}
	else if (enbuyuk==sayi2 && sayi1<sayi3) {enkucuk=sayi1;}
	else if (enbuyuk==sayi2 && sayi3<sayi1) {enkucuk=sayi3;}
	else if (enbuyuk==sayi3 && sayi1<sayi2) {enkucuk=sayi1;}
	else if (enbuyuk==sayi3 && sayi2<sayi1) {enkucuk=sayi2;}
	
	printf("En buyuk sayi = %.2lf \nEn kucuk sayi = %.2lf", enbuyuk, enkucuk);
	
	return 0;
}
