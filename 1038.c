#include <stdio.h>

int main(){
	float code, qtd, total;

	printf("Digite o código do lanche:");
	scanf("%f", &code);

	printf("Digite a quantidade:");
	scanf("%f", &qtd);

	if (code == 1){

		total = qtd * 4;
		printf("Total: R$ %.2f\n", total);

	}

	if (code == 2){

		total = qtd * 4.5;
		printf("Total: R$ %.2f\n", total);

	}

	if (code == 3){

		total = qtd * 5;
		printf("Total: R$ %.2f\n", total);

	}

	if (code == 4){

		total = qtd * 2;
		printf("Total: R$ %.2f\n", total);

	}

	if (code == 5){

		total = qtd * 1.5;
		printf("Total: R$ %.2f\n", total);

	}
}