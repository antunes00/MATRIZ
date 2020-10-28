//2. Elaborar um algoritmo que permita ao usuário preencher uma matriz 3x3
//de números inteiros e calcule a soma dos elementos da matriz.

#include <stdio.h>

int matriz [3][3];
int i,j, soma =0;

int main (){
		for (i=0; i<3; i++)
		 	for(j=0; j<3;j++){	
				printf (" informe os numeros %i %i: ",i,j);
				scanf("%i", &matriz[i][j]);	
				
				soma += m[i][j];	
		}
	printf("\na soma dos numeros sao:  %i\n",soma);
	
}
	


	
		
	





