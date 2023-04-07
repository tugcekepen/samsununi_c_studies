#include <stdio.h>

void daire_alan(float r){
	const float pi = 3;
	float alan = pi * r * r;
	printf("Alan = %.2f", alan);
}
void daire_cevre(float r){
	const float pi = 3;
	float cevre = 2 * pi * r;
	printf("Cevre = %.2f", cevre);
}

int main()
{
	float r;
	printf("Yaricap?: ");
	scanf("%f", &r);
	
	daire_alan(r);
	printf("\n");
	daire_cevre(r);
	
	return 0;
}


