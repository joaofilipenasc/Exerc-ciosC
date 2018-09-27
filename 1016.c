#include <stdio.h>

int main(){
	
	int distancia, resultado;

	printf("\nDigite a distância, em Km, entre os carros:");
	scanf("%d", &distancia);

	resultado = (distancia*60)/30;

	printf("O intervalo de tempo é de: %d minutos \n", resultado);

	return 0;

}
