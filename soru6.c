#include <stdio.h>

int faktoriyel(int sayi);

int main()
{
	int sayi;
	printf("Faktoriyel icin sayi girin: ");
	scanf("%d", &sayi);
	
	printf("\nFaktoriyel: %d", faktoriyel(sayi));
	
	return 0;
}

int faktoriyel(int sayi){
	int carpim = 1;
	int i;
	for (i=1 ; i<=sayi ; i++){
		carpim = carpim * i ;
	}
	return carpim;
}
