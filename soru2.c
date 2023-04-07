#include <stdio.h>

int main()
{
    int sayi1, sayi2;
	float bolum, kalan;
	printf("Ilk sayiyi giriniz(Bolunecek sayi): ");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi giriniz(Bolen sayi): ");
	scanf("%d", &sayi2);
	
	bolum = sayi1/sayi2;
	kalan = sayi1%sayi2;
	
	printf("Bolum = %.2lf\n", bolum);
	printf("Kalan = %.2lf", kalan);
	
	return 0;
}
