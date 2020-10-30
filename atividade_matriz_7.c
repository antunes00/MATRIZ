/*7. Faça um algoritmo que lê 2 matrizes A e B de 2 linhas e 4 colunas. Em
seguida, construa uma matriz C onde cada elemento de C é o maior valor
entre os elementos correspondentes em A e B.*/

#include<stdio.h>
#include<stdlib.h>

int matrizA[2][4], matrizB [2][4] ,matrizC[2][4], i ,j;

int main(){
	
	for(i=0;i<2;i++)
		for(j=0;j<4;j++){
			printf("digite a matriz A[%i][%i]",i+1,j+1);
			scanf("%i",&matrizA[i][j]);
	}
	
	for(i=0;i<2;i++)
		for(j=0;j<4;j++){
			printf("digite a matriz B[%i][%i]",i+1,j+1);
			scanf("%i",&matrizB[i][j]);
			
		}
		
	for(i=0;i<2;i++)
		for(j=0;j<4;j++){
		if (matrizA[i][j] > matrizB[i][j])
			matrizC[i][j]=matrizA[i][j];
		else
			matrizC[i][j]=matrizB[i][j];
			printf(" a matriz c e[%i][%i]  %i\n",i+1,j+1,matrizC[i][j]);
		}
		
		system("pause");
}
