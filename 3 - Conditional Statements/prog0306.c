#include <stdlib.h>
#include <stdio.h>

int main(){
	float sal;

	scanf("%f", &sal);


	if(sal <= 0)
		printf("INVALIDO\n");
	// So entra no segundo if se o primeiro for Falso
	else if(sal >= 1000)
		printf("Imposto = %.2f\n", sal * 0.10);
	else
		printf("Imposto = %.2f\n", sal * 0.05);

	return 0;
}