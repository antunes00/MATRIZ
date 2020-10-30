/*6. Ler 2 matrizes A e B de 5 linhas e 3 colunas, construir uma matriz C, onde
cada elemento de C seja a soma dos elementos correspondente em A com B.*/

#include<stdio.h>
#include<stdlib.h>

int matriz [5][3],matrizB[5][3] ,matrizC[5][3], i,j;

int main(){
	
	for(i=0;i<5;i++)
		for(j=0;j<3;j++){
			printf("digite a matriz A [%i][%i]:",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	
	for(i=0;i<5;i++)
		for(j=0;j<3;j++){
			printf("digite a matriz B [%i][%i]:",i+1,j+1);
			scanf("%i",&matrizB[i][j]);
		}
	
	for(i=0;i<5;i++)
		for(j=0;j<3;j++){
			matrizC[i][j]= matriz[i][j]+matrizB[i][j];
			printf("matriz c e [%i][%i] %i",i+1,j+1,matrizC[i][j]);
		}
	system("pause");
}
