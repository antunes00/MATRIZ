//3. Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
//média dos valores de cada linha da matriz.

#include <stdio.h>

float num[3][3], soma=0.0 , media;

int i , j;

int main(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("informe um valor para L%i C%i", i, j);
			scanf("%f", &num[i][j]);
		}
	}
	    
		for(i=0;i<3;i++){
		  
		  soma = 0.0;
		  
		  for(j=0;j<3;j++){
			soma += num[i][j];
		}
		
		media = soma/j;
		printf("\nA media da linha %i = %.2f", i, media);
	}
}
