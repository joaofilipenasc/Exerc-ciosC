#include <stdio.h>

int main() {
	
	char nome[15];
	float salarioFixo, vendasTotal, totalFinal;

	printf("\nDigite o seu nome:");
	scanf("%s", nome);

	printf("\nDigite o seu salário fixo:");
	scanf("%f", &salarioFixo);

	printf("\nDigite o total de vendas realizadas por você nesse mês:");
	scanf("%f", &vendasTotal);

	totalFinal = vendasTotal*0.15 + salarioFixo;

	printf("\nTOTAL = R$: %.2f\n", totalFinal);

	return 0;
}
