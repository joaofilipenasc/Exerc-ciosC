#include <stdio.h>

int main() {
	int numero;
	float horas, salario, total;

	printf("Digite o seu número de cadastro:\n");
	scanf("%d", &numero);

	printf("Digite o salário fixo por horas trabalhadas:\n");
	scanf("%f", &salario);

	printf("Digite as horas trabalhadas:\n");
	scanf("%f", &horas);

	total = horas * salario;
	
	printf("Número = %d\n", numero);
	printf("TOTAL = R$ %.2f\n", total);

	return 0;
}
