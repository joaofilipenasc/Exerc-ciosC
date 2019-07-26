#include <stdio.h>

int main() 
{

	float a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
	printf("Digite o valor de A, B e C:\n");
	scanf("%f%f%f",&a,&b,&c);

	triangulo = (a*c)/2;
	circulo = 3.14159*c*c;
	trapezio = ((a+b)*c)/2;
	quadrado = b*b;
	retangulo = a*b;

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangulo,circulo, trapezio,quadrado,retangulo);


	return 0;

}