#include <stdio.h>

int main(){
	int inicio,final, duracao;

	scanf("%d",&inicio);
	scanf("%d",&final);


	if (inicio > final) {

		duracao = (24 + final) - inicio;

		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	
	else if (inicio < final) {

			duracao = final - inicio;

			printf("O JOGO DUROU %d HORA(S)\n", duracao);		
	}	
	
	else {

		printf("O JOGO DUROU 24 HORA(S)\n");

	}

	return 0;
}