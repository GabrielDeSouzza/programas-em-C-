/*Ler dois valores (caractere ou numérico) para as variáveis A e B, efetuar a troca dos valores de forma que a
variável A passe a possuir o valor da variável B e vice-versa. Você deverá exibir os dados antes e depois da
troca. Caso tenham sido digitados valores iguais, o programa deve imprimir a mensagem “Voce repetiu o
caractere!”.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b, x;
	printf("digite dois numeros \n");
	scanf("%f %f", &a, &b);
	
	x=a;
	a=b;
	b=x;
	if(a==b)
	printf("voce digitou valares iguais");
	else
	printf("trocamos a ondem dos dois numero %.2f, %.2f", a, b);	
	return 0;
	
}
