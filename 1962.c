#include <stdio.h>

int main () {

	int teste;
	scanf("%d",&teste);

	while(teste--)
	{
		int ano, diferenca;
		scanf("%d",&diferenca);

		if(diferenca<2015)
		{
			ano = 2015 - diferenca;
			printf("%d D.C.\n",ano);
		}else
		{
			ano = diferenca - 2014;
			printf("%d A.C.\n",ano);
		}
	}	
	return 0;
}