#include <stdio.h>

int main() //eksik
{
	int satirsayisi, i, j,sayac, k=0;
	
	printf("Satir sayisi: ");
	scanf("%d", &satirsayisi);
	sayac = satirsayisi;
	
	for (i=1 ; i<=satirsayisi ; i++){
		for (j=1 ; j<=i ; ++j) {
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i=1 ; i<=satirsayisi ; i++){
		for (j=1 ; j<=sayac ; ++j) {
			printf("* ");
		}
		printf("\n");
		sayac -= 1;
	}
	
	printf("\n");
	
	
	return 0;
}
