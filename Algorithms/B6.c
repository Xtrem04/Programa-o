#include <stdio.h>
#include <locale.h>

int main()
{
	int i;
	float a, b, c;
	float produtos[5][3] = { {0.1 , 0.5 , 0.6} , {0.1 , 0.3 , 0.7} , {0.2 , 0.5 , 0.7} , {0.2 , 0.3 , 0.1} , {0.2 , 0.5 , 0.6} };
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Classificador de produtos  -\n\n");
	
	printf("Qual é a concentração do elemento A? ");
	scanf("%f", &a);
	printf("Qual é a concentração do elemento B? ");
	scanf("%f", &b);
	printf("Qual é a concentração do elemento C? ");
	scanf("%f", &c);
	printf("\n");
	for(i=0 ; i<5 ; i++)
	{
		if(a==produtos[i][0] && b==produtos[i][1] && c==produtos[i][2])
		{
			printf("Produto %d identificado.", i+1);
			return 0;
		}
	}
	printf("Produto desconhecido.");
	return 0;
}
