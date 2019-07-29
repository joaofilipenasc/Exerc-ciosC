#include <stdio.h>

int main () 

{

	int thor, starlord, spider;
	printf("Entrem com suas apostas:\n");
	scanf("%d %d %d", &thor, &starlord, &spider);

	//Empate
	if (thor == starlord && thor == spider)  
	{
		printf("Empate!!!\n");
	}else if (thor != starlord && thor != spider)
	{
		printf("Thor ganhou\n");
	}else if (starlord == !thor && starlord == !spider)
	{
		printf("Starlord ganhou\n");
	}else
	{
		printf("Homem Aranha ganhou\n");
	}
	
	return 0;
}