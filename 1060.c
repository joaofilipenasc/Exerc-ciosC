#include <stdio.h>

int main(){
	float a, b, c, d, e, f;
	int cont=0;
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);

	if (a>0) {
		cont = cont+1;
	}

	if (b>0) {
		cont = cont+1;
	}

	if (c>0) {
		cont = cont+1;
	}

	if (d>0) {
		cont = cont+1;
	}

	if (e>0) {
		cont = cont+1;
	}

	if (f>0) {
		cont = cont+1;
	}

	printf("%d valores positivos\n", cont);

	return 0;
}