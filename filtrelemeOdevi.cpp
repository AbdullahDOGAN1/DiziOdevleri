#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int i,j,row,column,v[3][3],f[row][column],g[row-2][column-2];
	buraya :
	printf("Filtreleme Programina Hosgeldiniz \n");
	printf("Lutfen satir ve sutun sayilarini 3 den buyuk olucak sekide giriniz ...\n");
	scanf("%d%d",&row,&column);
	if(row<3 || column<3){
		printf("Tekrar deneyiniz!!!\n");
		goto buraya;
	}
	else{
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				f[i][j]=rand() % 255;
				printf("%d\t",f[i][j]);
			}
			printf("\n\n");
		}
	}
	printf("Filtrenin Degerlerini Verelim..\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("v[%d][%d]= ",i,j);
			scanf("%d ",&v[i][j]);
		}
	}
	printf("sonuc matrisi :\n");
	for(i=0;i<row-2;i++){
		for(j=0;j<column-2;j++){
			g[i][j]=v[0][0]*f[i][j] + v[0][1]*f[i][j+1] + v[0][2]*f[i][j+2] + v[1][0]*f[i+1][j] + v[1][1]*f[i+1][j+1] + v[1][2]*f[i+1][j+2] + v[2][0]*f[i+2][j] + 
			v[2][1]*f[i+2][j+1] + v[2][2]*f[i+2][j+2] ;
			printf("%d\t",g[i][j]);	
		}
		printf("\n\n");
	}
	return 0;
}
