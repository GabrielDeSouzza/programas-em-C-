/*12) Crie uma fun��o que calcule o delta de uma equa��o de 2� grau. Use-a em um programa para calcular as
ra�zes da equa��o, ap�s o usu�rio informar os valores dos coeficientes a, b e c.*/
#include <stdio.h>
#include <math.h>
float equa(float a,float b,float c){
	float resp,raiz_posi,raiz_neg;
	resp=pow(b,2)-4*a*c;
	if(resp>=0){
	printf("o delta vale: %.2f \n", resp);
	raiz_posi=(-b+sqrt(resp))/(2*a);
	raiz_neg=(-b-sqrt(resp))/(2*a);
	printf("a raiz positiva e: %f\n",raiz_posi);
	printf("a raiz negativa e: %f",raiz_neg);
}
	else
	printf("o delta deu negativo");
	
	
}
int main(){
	float a,b,c;

	printf("digite o valor de a(x^2) \n");
	scanf("%f", &a);
	printf("digite o valor de b(x) \n");
	scanf("%f", &b);
	printf("digite o valor de c(numero real) \n");
	scanf("%f", &c);
	
	equa(a,b,c);
	return 0;
}
