#include <stdio.h>

int main() 
{

	int codigo1, numero1, codigo2, numero2;
	float valor1, valor2, total;

	printf("Digite o seu código da peça 1, o número de peças e o seu valor:\n");
	scanf("%d%d%f", &codigo1,&numero1,&valor1);
	printf("Digite o código da peça 2, o número de peças e o seu valor\n");
	scanf("%d%d%f",&codigo2,&numero2,&valor2);

	total = (numero1*valor1)+(numero2*valor2);

	printf("VALOR A PAGAR: R$ %.2lf\n",total);


	return 0;

}