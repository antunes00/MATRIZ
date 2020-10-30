/*8. Faça um algoritmo que leia uma matriz 2x5 e contar quantos valores da
matriz estão entre 10 e 20.*/

int matriz [2][5], i , j ;

int main(){
	for (i=0;i<2;i++)
		for(j=0;j<5;j++){
		printf("digite os valores da matriz[%i][%i] ",i+1,j+1);
		scanf("%i",&matriz[i][j]);
	}

	printf("\n");

	for (i=0;i<2;i++)
		for(j=0;j<5;j++){
			if(matriz[i][j]>10&&matriz[i][j]<20)
				printf("os valores que estao entre 10 e 20 sao %i\n",matriz[i][j]);
		}
		
		
 	system("pause");
	
}
