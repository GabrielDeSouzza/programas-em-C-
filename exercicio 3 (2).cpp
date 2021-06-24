/*Crie um programa que calcule a média e informe os valores de mediana e moda das idades dos alunos de
uma sala de aula. O programa deve, inicialmente, perguntas ao usuário a quantidade de alunos, e depois
permitir que esse usuário informe as idades dos estudantes.*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main(){
	int quant_alu, *ida, cont, guard, x,  aux, resu, resu2, soma, moda, cont2;
	float aux2, media;
	printf("digite a quantidade de alunos da sala: ");
	scanf("%d", &quant_alu);
	ida=(int*)(malloc(quant_alu*sizeof(int)));
	
	for (cont=0; cont < quant_alu; cont++){
	printf ("digite a idade do %d aluno: ", cont+1);
	scanf("%d", &ida[cont]);
	soma=soma+ida[cont];
}
    for (cont=0; cont < quant_alu; cont++){
	
    guard=ida[cont];
	x=cont-1;
	 	while (x>=0 && ida[x]>=guard){
			ida[x+1]=ida[x];
			x=x-1;
				
			}
		ida[x+1]=guard;
		}
		moda=ida[0];
	printf("essa é a ordem crescente da idade dos alunos: \n");
		for (cont=0; cont < quant_alu; cont++){
			printf("aluno %d = %d \n",cont+1, ida[cont]);			
}
	
	resu= ida[quant_alu/2];
	aux2= quant_alu%2;
	if(aux2==0){
    resu2=ida[(quant_alu/2)-1];
	printf(" a mediana  e %d e  %d \n", resu, resu2 );
}
	else
	printf("a mediana e %d \n", resu);
	
	media=soma/quant_alu;
	printf("essa e a media das idades dos alunos: %f \n",media);
	
	//calculo da moda
	
	for(cont=0;cont<quant_alu;cont++){
		for(cont2=0;cont2<quant_alu;cont2++){
			if(ida[cont]==ida[cont2-1]){
				moda=ida[cont];
			}
			cont=cont+1;
		}
	}
	
	printf("essa e a moda: %d", moda);
	

	
	
	free(ida);
	return 0;
}
