#include <stdio.h>

int main(){
	int  cont, cont2;
	 float resu_dete, matriz[3][3], dete_princ[2], dete_secun[2], x;
	
	for (cont=0; cont<3;cont++){
		for (cont2=0; cont2 <3; cont2++){
			printf("digite %d coluna da matriz na linha %d \n", cont2+1, cont+1);
			scanf("%f", &matriz[cont][cont2]);
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
	
	printf("determinante e: %.2f \n", resu_dete);
	
	return 0;
}
