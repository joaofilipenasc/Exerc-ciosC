#include <stdio.h>

int main(){
	float a, b, c, perimetro, area;

	printf("Digite a primeira medida:\n");
	scanf("%f", &a);
	printf("Digite a segunda medida:\n");
	scanf("%f", &b);
	printf("Digite a terceira medida:\n");
	scanf("%f", &c);

	if (a < b+c && b < a+c && c < a+b) {
		perimetro = a+b+c;

		printf("Perimetro = %.1f\n", perimetro);
	} else {
		area = (a+b)*c/2;

		printf("Area = %.1f\n", area);
	}

	return 0;
}