/* O grupo de professores de educação física do colégio, desejando preparar a escola para a próxima edição
dos jogos estudantis, resolveu fazer uma pesquisa entre os alunos para identificar algumas de suas
características. Os professores gostariam de saber:
• quantas meninas e quantos meninos participaram dessa consulta.
• qual a maior altura entre os meninos e quantos possuem essa altura.
• qual a maior altura entre as meninas e quantas possuem essa altura.
• qual a média de altura dos meninos que participaram dessa consulta.
• qual a média de altura das meninas que participaram dessa consulta.
• quantos meninos e quantas meninas pretendem participar dos jogos.
• qual a maior altura dentre os meninos e dentre as meninas que pretendem participar dos jogos.
Para realizarem a sua tarefa, os professores iriam de sala em sala, perguntar o número do aluno, sexo,
altura, e finalmente, se pretende (ou não) participar dos jogos estudantis. Posteriormente fariam os
cálculos.
Você, sabendo da dificuldade de seus professores em realizar manualmente essa tarefa, se propõe a ajudálos. Faça um programa que realize os objetivos desses professores de educação física. Cada aluno acessará
o programa feito por você, em um único computador que será disponibilizado pela escola para essa
finalidade. Ao final, um professor deverá digitar “0” (zero) em número do aluno para que o programa exiba
o relatório que os professores precisam, antes de ser finalizado*/
#include <stdio.h>
#include <stdlib.h>


int main(){
	int num_meninas=0,num_meninos=0,x,y;
	float altura_meninos,altura_meninas;
	float maior_alt_menino=0,maior_alt_menina=0, alt_ant=0,alt_ant_menino=0;
	int genero, participar=0;
	float media_menina=0,media_menino=0;
	int  *vet_menina, *vet_menino, cont, part_menina,part_menino,part_quant_menina=0,part_quant_menino=0;
	
	printf("Digite 1 para mascufino e 2 para feminino\n");
	scanf("%d",&genero);
	vet_menino=(int*)(malloc(sizeof(int)*num_meninos));
	while(genero==2 ||  genero==1  ){
		if (genero==2 ){
			num_meninas++;
			printf("digite sua altura (nao precisa colocar casa decimal)\n");
			scanf("%f", &altura_meninas);
			alt_ant=altura_meninas;
			media_menina=media_menina+altura_meninas;
			printf("digite 1 se deseja participar dos jogos estudantis ou 2 se não deseja: \n");
			scanf("%d",&part_menina);
			if(part_menina==1)
			part_quant_menina++;
			printf("\n\n\t\t Obrigado por responder o questionario \n\t\t proxima aluno\n\n");
			
			printf("Digite 1 para mascufino e 2 para feminino\n");
			scanf("%d",&genero);
		}
		else if (genero==1 ){
			num_meninos++;
			printf("digite sua altura (nao precisa colocar casa decimal)\n");
			alt_ant_menino=altura_meninos;
			scanf("%f", &altura_meninos);
			
			vet_menino[num_meninos-1]=altura_meninos;
			
			media_menino=media_menino+altura_meninos;
			printf("digite 1 se deseja participar dos jogos estudantis ou 2 se não deseja: \n");
			scanf("%d",&part_menino);
			if(part_menino==1)
			part_quant_menino++;
			printf("\n\n\t\t Obrigado por responder o questionario \n\t\t proxima aluno\n\n");
			
			printf("Digite 1 para mascufino e 2 para feminino\n");
			scanf("%d",&genero);
		}
		
		
	}
		
		if(genero==000){
			printf("participaram dessa consulta o total de %d meninos e  %d de meninas\n",num_meninos,num_meninas);
			x=media_menino/num_meninos;
			printf("a media de altura dos meninos e %d \n",x);
			y=media_menina/num_meninas;
			printf("a media de altura dos meninas e %d \n",y);
			printf("pretende participar do evento %d meninos e %d meninas",part_quant_menino,part_quant_menina);
  			
}
	free (vet_menino);
	return 0;
}
