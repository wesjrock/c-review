#include <stdlib.h>
#include <stdio.h>

int main(){
	// Switch: executa tudo ate encontrar break

	char est_civil;
	scanf("%c", &est_civil);

	switch(est_civil){
		case 'd' : 
		case 'D' : printf("DIVORCIADO\n"); break;
		case 's' :
		case 'S' : printf("SOLTEIRO\n"); break;
		default  : printf("ESTADO CIVIL INCORRETO\n");
	}

	return 0;
}