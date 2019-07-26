#include <stdio.h>

int main() 
{

	int funcionario;
	float qtd_horas, dinheiro_hora, salario;

	printf("Qual eh o seu número de funcionario:\n");
	scanf("%d",&funcionario);
	printf("Digite a quantidade de horas de trabalho e o valor do salário por hora, respectivamente:\n");
	scanf("%f %f",&qtd_horas,&dinheiro_hora);

	salario = qtd_horas*dinheiro_hora;

	printf("%d\n%.2lf\n",funcionario,salario);

	return 0;
}