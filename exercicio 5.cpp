/* Faça um programa que some todos os múltiplos dos números 2 e os múltiplos de 3 de 0 a 100 e imprima o
valor da soma. Os múltiplos em comum de 2 e 3 devem ser somados apenas 1 vez. Ex. o número 12 é
múltiplo de 2 e de 3 deverá ser somado no valor total apenas uma vez. (Soma = 2 + 3+ 4+ 6 + 8 + 9...+ 96 +
98 + 99 + 100).*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int mult, resu2, resu3, x,  cont, y;
	mult=1;
while ( mult > 0 && mult<=100){
	
	 resu2=2*mult;
	resu3=3*mult;
	x= resu3%mult;
	if( x ==0){
		resu3=0;
	}
	cont= resu2+resu3;
	mult=mult+1;
	y=y+cont;
	}
	

	printf("%d", y);

	return 0;
}
