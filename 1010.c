#include <stdio.h>

int main(){

	int codigo1, codigo2, numPecas1, numPecas2;
	float valorPecas1, valorPecas2, total;

	printf("\nDigite o código da primeira peça:");
	scanf("%d",&codigo1);
	printf("\nDigite a quantidade de peças:");
	scanf("%d",&numPecas1);
	printf("\nDigite o valor da peça:");
	scanf("%f",&valorPecas1);

	printf("\nDigite agora o código da segunda peça:");
	scanf("%d",&codigo2);
	printf("\nDigite a quantidade de peças:");
	scanf("%d",&numPecas2);
	printf("\nDigite o valor da peça:");
	scanf("%f",&valorPecas2);

	total = numPecas1*valorPecas1 + numPecas2*valorPecas2;
	
	printf("\nVALOR A PAGAR: R$ %.2f", total);

	return 0;
}
