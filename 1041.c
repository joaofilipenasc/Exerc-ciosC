#include <stdio.h>

int main(){
	float x,y;

	printf("Digite a coordenada x:\n");
	scanf("%f", &x);
	printf("Digite a coordenada y:\n");
	scanf("%f", &y);

	if (x==0 && y==0){
		printf("Origem\n");
	}	

	if (x>0 && y>0){
		printf("Q1\n");
	}

	if (x>0 && y<0){
		printf("Q4\n");
	}

	if (x<0 && y>0){
		printf("Q2\n");
	}

	if (x<0 && y<0){
		printf("Q3\n");
	}

	return 0;
}