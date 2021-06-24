/*Crie um programa que solicita ao usuário que insira as 3 dimensões de um paralelepípedo em cm. Em
seguida, crie as seguintes funções (valores devem ser exibidos com apenas 2 dígitos decimais):
• VOLUME (calcula o volume do papalelepípedo em mL)
• DiagonalFaceMenor (calcula o comprimento da menor diagonal de face – menor face – do sólido)
• DiagonalFaceMaior (calcula o comprimento da maior diagonal de face – maior face – do sólido)
• DiagonalInterna (calcula o comprimento da diagonal interna do paralelepípedo)
• AreaDeSuperficie (calcula a área da superfície do papalelepípedo)
A função principal deve conter apenas um vetor real com 3 unidades de alocação para os valores dos
comprimentos de arestas, informados pelo usuário. A função principal deve ainda invocar as funções
dentro do comando de impressão na tela, de modo a obter:
____________________________________________________________
Digite o comprimento da primeira aresta do paralelepipedo:
Digite o comprimento da segunda aresta do paralelepípedo:
Digite o comprimento da terceira aresta do paralelepípedo:
O paralelepípedo de dimensões informadas possui:
- VOLUME: V mL.
- Comprimento da menor diagonal lateral: MaxDL cm.
- Comprimento da maior diagonal lateral: MinDL cm.
- Comprimento da diagonal interna: DI cm.
- Area Superficial AS centímetros quadrados.
Deseja informar dimensões de outro paralelepípedo? (1 – Sim 2 – Nao)*/


#include <stdio.h>
#include <math.h>

float volume(float arest,float arest2,float arest3){
	float  volu;
	volu= arest*arest2*arest3;
	return volu;
	
}
float diag_menor_lat(float arest,float arest2,float arest3){
	float diag_menor;
	if(arest>arest2 || arest>arest3){
	
	float diag_menor;
	diag_menor=sqrt(pow(arest2,2)+pow(arest3,2));
	return diag_menor;
}
 	else if(arest2>arest || arest>arest3){
 	diag_menor=sqrt(pow(arest,2)+pow(arest3,2));	
 	return diag_menor;	
	 }
	 
	else if(arest3>arest || arest3>arest2){
 	diag_menor=sqrt(pow(arest,2)+pow(arest2,2));
 	return diag_menor;
	}
	else {
		diag_menor=sqrt(pow(arest,2)+pow(arest2,2));
 	return diag_menor;
		
	}
}
float diag_maior_lat(float arest,float arest2,float arest3){
	float diag_maior;
	if(arest3<arest2 || arest3<arest){
	diag_maior= sqrt(pow(arest,2)+pow(arest2,2));
	return diag_maior;
}
    else if(arest<arest2 || arest<arest3){
	diag_maior= sqrt(pow(arest2,2)+pow(arest3,2));
	return diag_maior;
}
    else if(arest2<arest3 || arest3<arest){
	diag_maior= sqrt(pow(arest,2)+pow(arest3,2));
	return diag_maior;
}
	else {
		diag_maior= sqrt(pow(arest,2)+pow(arest3,2));
		return diag_maior;
	}
}

float diag_intr(float arest,float arest2,float arest3){
	float diag_intn;
	diag_intn = sqrt(pow(arest,2)+pow(arest2,2)+pow(arest3,2));
	return diag_intn;
}
float area_bs(float arest,float arest2,float arest3){
	float area;
	area = arest*arest2;
	return area;
}

int main(){
	float arest, arest2, arest3;
	int op;
	inicio:
	printf("Digite o comprimento da primeira aresta do paralelepipedo:\n");
	scanf("%f", &arest);
	printf("Digite o comprimento da segunda aresta do paralelepípedo:o \n");
	scanf("%f", &arest2);
	printf("Digite o comprimento da terceira aresta do paralelepípedo: \n");
	scanf("%f", &arest3);
	printf("O paralelepipedo de dimensões informadas possui:");
	printf("VOLUME: V mL: %.2f \n", volume(arest, arest2, arest3));
	printf("Comprimento da menor diagonal lateral: MinDL cm: %.2f \n",diag_menor_lat(arest, arest2, arest3));
	printf("Comprimento da maior diagonal lateral: MaxDL cm: %.2f \n", diag_maior_lat(arest, arest2, arest3));
	printf("Comprimento da diagonal interna: DI cm : %.2f \n", diag_intr(arest, arest2, arest3));
	printf("Area Superficial em  centímetros quadrados: %.2f \n", area_bs(arest, arest2, arest3));
	tente:
	printf("Deseja calcular novamente?(1-sim  2-nao) \n");
	
	scanf("%d", &op);
	if(op==1)
	goto inicio;
	else if(op==2)
	printf("\t \t \tObrigado por usar este programa");
	else
	goto tente;
	

	
	
	
	return 0;
}
