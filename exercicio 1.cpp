/* 1) Faça um programa que leia, do teclado, três valores inteiros e distintos,
e os imprima em ordem crescente na tela.*/ 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int a,b,c;
	incio:
	printf ("\n\tDigite 3 numeros diferentes um do outro\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b == b==c || c==a) {
	   printf("voce digitou digitou numeros iguais sendo assim tente novamente");
	   goto incio;
	}
 	else if (a>b && b>c && a>c)
		printf("a ordem crescente e: %d %d %d  ", c, b, a);
	else if ( a>b && a>c && b<c)
		printf("a ordem crescente e: %d %d %d  ", b, c, a);
	else if (b>a && b>c && a>c)
		printf("a ordem crescente e: %d %d %d  ", c, a, b);
	else if (c>a && c>b && a>b)
		printf("a ordem crescente e: %d %d %d  ", b, a, c);
	else if (b>a && b>c && c>a)
		printf("a ordem crescente e: %d %d %d  ", a, c, b);
	else 
		printf("a ordem crescente e: %d %d %d  ", a, b, c);
	
	
	
		
	
return 0;
}
	
