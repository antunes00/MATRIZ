/*5. Elabore um algoritmo que leia uma matriz 4x4 de inteiros e conte quantos
números pares existem na terceira coluna da matriz.*/

#include<stdio.h>
#include<stdlib.h>

int matriz[4][4],i,j,numPar=0;

int main(){
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++){
			printf("informe os numeros [%i][%i]",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	
	for(i=0;i<4;i++)
	   	if (matriz[i][2]%2==0)
		   	numPar++;
		   		   
	printf("quantidade de pares e %i ", numPar);
	
	system("pause");
	
}
