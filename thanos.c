#include <stdio.h>

int main () 

{

	int petalas;
	printf("Digite o número de petalas:\n");
	scanf("%d",&petalas);

	petalas%2 == 0 ? printf("Mal me quer...\n") : printf("Bem me quer!\n");

	// if(petalas%2 == 0)
	// {
	// 	printf("Mal me quer...\n");
	// }else 
	// {
	// 	printf("Bem me quer!\n");
	// }
	return 0;
}