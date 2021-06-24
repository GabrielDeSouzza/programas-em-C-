/* Crie um programa que calcule o determinante de uma matriz 2x2, de números inteiros, informada pelo
usuário.*/

#include <stdio.h>
#include <math.h>



int main(){
	int matriz[2][2], cont, cont2, deter;
	
	for (cont=0; cont<2;cont++){
		for (cont2=0; cont2 <2; cont2++){
			printf("digite %d coluna da matriz na linha %d \n", cont2+1, cont+1);
			scanf("%d", &matriz[cont][cont2]);
		}
	}
deter=(matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]);

printf("a determinante da matriz : %d", deter);

	return 0;
}
