//4. Elabore um algoritmo que leia uma matriz 3x4 de inteiros, calcule quantos
//elementos da matriz s�o positivos e, em seguida, construa uma segunda
//matriz apenas com os elementos positivos. No lugar dos n�meros negativos
//da segunda matriz coloque o n�mero zero. No final, imprima a quantidade
//de n�meros positivos e a segunda matriz.


#include <stdio.h>


int main() 
{
	int matriz[3][4] = { { 12,10,20,14 }, { 30,-4,10,62 }, {40,-2,20,12} }, matriz2[3][4], positivos = 0, negativos = 0, i, j;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			if (matriz[i][j] < 0) 
			{
				matriz[i][j] = 0;
				negativos++;
			}
			
			if (matriz[i][j] > 0)
			{
				positivos++;
				printf("Matriz com os numeros positivos sao:  %i\n", matriz[i][j]);
			}
		}
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) 
		{
			if (matriz[i][j] >= 0)
			{
				matriz2[i][j] = matriz[i][j];
				printf("Matriz com elementos negativos substituidos por 0:  %i\n", matriz2[i][j]);
			}
		}

	printf("\nA quantidade de numeros positivos e:  %i e negativos %i\n", positivos, negativos);
	
	
}
