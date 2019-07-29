#include <stdio.h>

int main () 

{
	
	int petalas, vitima;
	printf("Digite o número de petalas e depois o número da vítima:\n");
	scanf("%d %d",&petalas, &vitima);

	if(petalas%2 == 0)
	{
		printf("Mal me quer...\n");

		switch(vitima)
		{
			case 0:printf("Iron Man\n");break;
			case 1:printf("Capitão América\n");break;
			case 2:printf("Spider Man\n");break;
			case 3:printf("Viúva Negra\n");break;
			case 4:printf("Thor\n");break;
			case 5:printf("Hulk\n");break;
			case 6:printf("Dr. Estranho\n");break;
			case 7:printf("Pantera Negra\n");break;
			case 8:printf("Hawkeye\n");break;
			case 9:printf("Groot\n");break;
			default: printf("Todo mundo morre.\n");
		}
	}else 
	{
		printf("Bem me quer!\n");
	}
	
	return 0;
}