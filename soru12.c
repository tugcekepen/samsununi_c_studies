#include <stdio.h>

void matris_goster(int satir, int sutun){
	int i,j;
	float matris[100][100];

    printf("\n1. matris elemanlarini girin:\n");

    for(i=0; i<satir; ++i)
        for(j=0; j<sutun; ++j)
        {
            printf("Eleman girin matris%d%d: ",i+1,j+1);
            scanf("%f",&matris[i][j]);
        }
    
    
    for (i=0 ; i<satir ; i++){
    	for (j=0 ; j<sutun ; j++){
    		printf("%.1f ", matris[i][j]);
		}
		printf("\n");
	}
    
}
void matris_toplama(int satir,int sutun){
	float matris1[100][100], float matris2[100][100];
	
	printf("2.matris için\n");
	printf("Satir sayisini girin (1 ile 100 arasinda): ");
    scanf("%d", &satir);
    printf("Sutun sayisini girin (1 ile 100 arasinda): ");
    scanf("%d", &sutun);
    
    for (i)
	
}
void matris_cikarma(float matris1[100][100], float matris2[100][100],int satir,int sutun){
	
}
void matris_carpma(float matris1[100][100], float matris2[100][100],int satir,int sutun){
	
}
void matris_bolme(float matris1[100][100], float matris2[100][100],int satir,int sutun){
	
}

int main(){
	
	int satir, sutun;
	
	printf("Satir sayisini girin (1 ile 100 arasinda): ");
    scanf("%d", &satir);
    printf("Sutun sayisini girin (1 ile 100 arasinda): ");
    scanf("%d", &sutun);
    
    matris_goster(satir, sutun);
    
    return 0;
}
