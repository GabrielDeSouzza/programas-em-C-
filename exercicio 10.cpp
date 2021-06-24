/* Crie um programa que:
i. Solicite ao usuário que informe os valores de uma matriz 2x2 (de números reais, com resolução de
décimos).
ii. Os valores de uma segunda matriz devem ser gerados aleatoriamente entre 0,0 e 1,0.
iii. Calcule o produto da primeira matriz pela segunda e o apresente na tela*/
#include <stdio.h>

int main(){
	int  linha, coluna;
	float matriz[2][2],matriz_neg[2][2], matriz_resu[2][2];
	
	for(linha=0;linha< 2; linha++){
		for(coluna=0; coluna <2; coluna++){
			printf("digite o valor (%d,%d) da matriz \n", linha+1, coluna+1);
			scanf("%f", &matriz[linha][coluna]);
			matriz_neg[linha][coluna]=0.2*linha+0.2;
			
		}
	}
	for(linha=0;linha< 2; linha++){
		for(coluna=0; coluna <2; coluna++){
			matriz_resu[linha][coluna]=matriz[linha][coluna]*matriz_neg[linha][coluna];
			printf("matriz resultado (%d,%d) %.2f\n",linha+1,coluna+1, matriz_resu[linha][coluna]);
		}
	}
	
	return 0;
}
