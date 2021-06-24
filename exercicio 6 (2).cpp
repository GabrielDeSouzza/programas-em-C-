//Crie um programa que calcule a matriz inversa de uma matriz 3x3 informada pelo usuário.


#include <stdlib.h>
#include <stdio.h>



int main(){
	int matriz[3][3], cont, cont2, dete_princ[2], dete_secun[2], x;
	int cofator[8], matriz_cof[3][3]; 
	double matriz_inver[3][3], resu_dete;
	
	for (cont=0; cont<3;cont++){
		for (cont2=0; cont2 <3; cont2++){
			printf("digite %d coluna da matriz na linha %d \n", cont2+1, cont+1);
			scanf("%d", &matriz[cont][cont2]);
		}
	}
	
	//calculanndo determinante principal
	x=dete_princ[0]=matriz[0][0]*matriz[1][1]*matriz[2][2];
	dete_princ[1]=matriz[0][1]*matriz[1][2]*matriz[2][0];
	dete_princ[2]=matriz[0][2]*matriz[1][0]*matriz[2][1];
	//calculando determinante segundaria
	dete_secun[0]=matriz[2][0]*matriz[1][1]*matriz[0][2];
	dete_secun[1]=matriz[2][1]*matriz[1][2]*matriz[0][0];
	dete_secun[2]=matriz[2][2]*matriz[1][0]*matriz[0][1];
	//calculo final das determinantes	
	resu_dete=(x+dete_princ[1]+dete_princ[2])-(dete_secun[0]+dete_secun[1]+dete_secun[2]);
	
	printf("determinante e: %.2f \n",resu_dete);
	if(resu_dete==0){
	printf("o determinante da matriz e zero sendo assim nao e possivel calcular a matriz inversa");
}
else{

	//calculando o cofator 
	
cofator[0]=matriz[1][1]*matriz[2][2]-matriz[1][2]*matriz[2][1];
cofator[1]=-(matriz[1][0]*matriz[2][2]-matriz[1][2]*matriz[2][0]);
cofator[2]=matriz[1][0]*matriz[2][1]-matriz[1][1]*matriz[2][0];
cofator[3]=-(matriz[0][1]*matriz[2][2]-matriz[0][2]*matriz[2][1]);
cofator[4]=matriz[0][0]*matriz[2][2]-matriz[0][2]*matriz[2][0];
cofator[5]=-(matriz[0][0]*matriz[2][1]-matriz[0][1]*matriz[2][0]);
cofator[6]=matriz[0][1]*matriz[1][2]-matriz[0][2]*matriz[1][1];
cofator[7]=-(matriz[0][0]*matriz[1][2]-matriz[0][2]*matriz[1][0]);
cofator[8]=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0];

// transformando os cofatores em matrizes

matriz_cof[0][0]=cofator[0];
matriz_cof[0][1]=cofator[3];
matriz_cof[0][2]=cofator[6];
matriz_cof[1][0]=cofator[1];
matriz_cof[1][1]=cofator[4];
matriz_cof[1][2]=cofator[7];
matriz_cof[2][0]=cofator[2];
matriz_cof[2][1]=cofator[5];
matriz_cof[2][2]=cofator[8];

// transformando a matriz cofatora em matriz inversa



printf("matriz inversa: \n");
	
	for (cont=0; cont<3;cont++){
		for (cont2=0; cont2 <3; cont2++){
	        matriz_inver[cont][cont2]=(matriz_cof[cont][cont2])/resu_dete;
			printf("elemento [%d][%d]= %.3f  \n",cont+1, cont2+1, matriz_inver[cont][cont2]);
		}
		
	}
}
	return 0;
}
