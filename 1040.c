#include <stdio.h>

int main(){
	float n1, n2, n3, n4, media, exame;

	printf("Digite a nota da primeira unidade:\n");
	scanf("%f", &n1);

	printf("Digite a nota da segunda unidade:\n");
	scanf("%f", &n2);

	printf("Digite a nota da terceira unidade:\n");
	scanf("%f", &n3);

	printf("Digite a nota da quarta unidade:\n");
	scanf("%f", &n4);

	media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

	if (media >= 7){
		printf("Media: %.f\n", media);
		printf("Aluno aprovado\n");
	}

	if (media < 5) {

		printf("Aluno reprovado.\n");
	}

	else if (media <= 5 || media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		printf("Digite a nota do exame:\n", exame);

		if ((exame + media)/2 > 5){
			printf("Aluno aprovado.\n");
		}

		else {
			printf("Aluno reprovado.\n");
		}

		printf("Media Final: %.f\n", (exame + media)/2);
	}

	return 0;
}
