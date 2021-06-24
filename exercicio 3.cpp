/* Uma grande companhia de alimentos paga os seus vendedores incluindo uma comissão. Os vendedores
recebem R$ 200 por semana mais 10% sobre a venda que realizou na semana. Por exemplo, um vendedor
que na semana vendeu um total de R$ 5000 de produtos alimentícios recebeu nesta semana R$ 200 mais
10% de R$ 5000, ou total de R$ 700. Escreva um programa em C que irá calcular o salário semanal dos
vendedores da companhia dando como entrada o total de vendas da semana de cada vendedor. A tela de
apresentação deve parecer como a do exemplo abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float ved, sal;
	while ( ved!= 0){
	
	printf ("\n\n\t digite o total de vendas do colaborador (digite 0 para finalizar o programa)\n");
	scanf ("%f", &ved);
	sal = (ved*0.1)+200;
	printf("o salario da semana do colaborador e R$%.2f\n\n", sal);
	}
	printf("\n\n\tobrigado por usar o programa!");
	
	
	
	
	return 0 ;
}
