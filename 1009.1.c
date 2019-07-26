#include <stdio.h>

int main() 
{

	char funcionario[20];
	float salario, vendas, total;

	printf("Digite o seu nome:\n");
	scanf("%s",&nome);
	printf("Digite o seu salário padrão:\n");
	scanf("%f",&salario);
	printf("Digite o valor em reais das vendas:\n");
	scanf("%f",&vendas);

	total = salario + 0.15*vendas;

	printf("TOTAL = R$ %.2lf\n",total);

	return 0;
}