/*Elabore um programa que:
� pergunte ao usu�rio quantos n�meros ele deseja ordenar.
� Em seguida, o programa deve solicitar que o usu�rio digite todos os n�meros.
� Finalmente, o programa deve imprimir na tela todos os n�meros em ordem crescente*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main(){ 
 	int quant_vet, guard, x, cont, *pont;
 	printf("digite a quantidade de elementos que vai ser ordenado\n");
 	scanf("%d", &quant_vet);
 	// criando vetor de tamanho indefinido
 	// malloc = reserva memoria
 	// sizeof(tipo_dado)= calcula a quantidade de bytes que um tipo de dado usa
 	pont=(int *)(malloc(quant_vet * sizeof(int)));
 	
 	if( pont==NULL ){
 		printf("memoria insuficiente");
 		system("pause");
 		exit(1);
	 }
	 else
	 	printf("digite os termos para ser ordenados \n");
	 	for (cont=0; cont < quant_vet; cont++){
	 		scanf("%d", &pont[cont]);
	 	}
	 	for (cont =0; cont <quant_vet; cont ++){
			guard=pont[cont];
			x=cont-1;
			while (x>=0 && pont[x]>=guard){
				pont[x+1]=pont[x];
				x=x-1;
				
			}
		pont[x+1]=guard;
	}
	printf("essa e a ordem crescente\n");
	for (cont =0; cont <quant_vet; cont ++){
		printf("%d ", pont[cont]);
	}
	
	 free(pont);
	 return 0;
}
