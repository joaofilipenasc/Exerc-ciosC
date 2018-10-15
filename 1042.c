#include <stdio.h>

int main(){

	int a, b, c;

	printf("Digite o primeiro número:\n");
	scanf("%d",&a);
	printf("Digite o segundo número:\n");
	scanf("%d",&b);
	printf("Digite o terceiro número:\n");
	scanf("%d",&c);

	if(a>b && a>c && b>c){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c, b, a, a, b, c);
	}

	if(a>c && a>b && c>b){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b, c, a, a, b, c);
	}

	if(b>a && b>c && a>c){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c, a, b, a, b, c);
	}

	if(b>c && b>a && c>a){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a, c, b, a, b, c);
	}

	if(c>a && c>b && a>b){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b, a, c, a, b, c);
	}

	if(c>b && c>a && b>a){
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a, b, c, a, b, c);
	}

	return 0;
	
}