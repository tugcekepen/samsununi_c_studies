#include <stdio.h>
//SORU1
int main()
{
	char karakter;
	printf("Bir karakter giriniz: ");
	karakter=getchar();
	
	if (karakter>='A' && karakter<='Z')
	{
		printf("Karakter buyuk harftir.\nASCII degeri = %d", karakter);
	}
	else if (karakter>='a' && karakter<='z')
	{
		printf("Karakter kucuk harftir.\nASCII degeri = %d", karakter);
	}
	else
	{
		printf("Karakter harf degildir.");
	}
	
}
