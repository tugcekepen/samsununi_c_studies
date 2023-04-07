#include <stdio.h>

int main()
{
	/*
	char karakter;
	printf("Karakter giriniz: ");
	karakter = getchar(); //getchar() kullanıyosan scanf'le değişkeni tutmana gerek yok
	
	if (karakter>='a' && karakter<='z') //bu karşılaştırma için tek tırnak kullanman lazım
	{
		printf("%c", putchar(karakter));
	}
	else if (karakter>='A' && karakter<='Z')
	{
		printf("%c", putchar(karakter));
	}
	*/
	
	char karakter;
	printf("Karakter: ");
	scanf("%c", &karakter);
	
	if (islower(karakter)) // islower(), isupper() vs bunlarda değişkeni parantez içine yazacaksın.!!
	{
		karakter=toupper();
	}
	else if (isupper(karakter))
	{
		karakter=tolower();
	}
	
	printf("Karakter %c", karakter);
	
	return 0;
}
