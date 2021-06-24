/* Faça um programa que verifica se um número inteiro lido do teclado é primo. Imprima dizendo se o número
é primo ou não. Caso não seja um número primo, o programa deve informar
isso ao usuário. Se o usuário digitar um número não inteiro, ele deve ser advertido disso e o programa deve
solicitar que ele digite outro número*/


#include <stdio.h>
#include <stdlib.h>

int main () {
	float aux;
	int usu, x, y, t, r;
	inicio:
	printf("digite um numero para vermos se o memso o um numero primo\n");
	scanf("%f", &aux);
	
	usu=aux;
	if(aux==usu){
	
	x = usu%2;
	y =usu%5;
	t= usu%3;
	r = usu%7;
	
	
	
	if(usu< 2){
	
	printf("numeros invlidos");
	}	
	else if (x==0 && usu>2){
		printf("nao e primo\n\n");
		goto inicio;
	}
	else if (usu>5 && y==0){
		printf("nao e primo\n\n");
		goto inicio;
	}
	else if (usu>3 && t==0){
		printf("nao e primo\n\n");
		goto inicio;
	}
	else if (usu>7 && r==0){
		printf("nao e primo\n\n");
		goto inicio;
	}
	else 
		printf("o numero %d e primo", usu);
}
	else{
	
	 printf("voce digitou um numero decimal \n\n");
	 goto inicio;
}
	return 0;

		
}
