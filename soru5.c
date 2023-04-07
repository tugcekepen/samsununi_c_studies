#include <stdio.h>

int main()
{
	int sayi;
	printf("Basamak sayisini ogrenmek istediginiz sayiyi girin: ");
	scanf("%d", &sayi);
	
	int sayac = 0;
	
	while (sayi>=1)
	{
		sayac += 1;
		sayi = sayi / 10;
	}
	
	printf("\nBasamak sayisi: %d", sayac);
	
	
	return 0;
}
