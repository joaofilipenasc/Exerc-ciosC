#include <stdio.h>

int main() {
	
	float num1, num2, num3, areaTriangulo, areaCirc, areaTrap, areaQuadrado, areaRetan;

	printf("\nDigite o primeiro valor:");
	scanf("%f",&num1);
	printf("\nDigite o segundo valor:");
	scanf("%f",&num2);
	printf("\nAgora digite o terceiro e último valor:");
	scanf("%f",&num3);

	areaTriangulo = (num1*num3)/2;
       	areaCirc = num3*num3*3.14159;
	areaTrap = (num1+num2)*num3/2;
	areaQuadrado = num2*num2;
	areaRetan = num1*num2;

	printf("TRIÂNGULO:%.3f\n", areaTriangulo);
	printf("CIRCULO:%.3f\n", areaCirc);
	printf("TRAPEZIO:%.3f\n", areaTrap);
	printf("QUADRADO:%.3f\n", areaQuadrado);
	printf("RETANGULO:%.3f\n", areaRetan);

	return 0;	
}
