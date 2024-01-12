#include <stdio.h>
#include <locale.h>

int main()
{
	float kilos, gramas;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Conversão kilogramas-gramas  -\n\n");
	
	do
	{
		printf("Qual é o valor em kilogramas? ");
		scanf("%f", &kilos);
		printf(kilos<0 ? "ERRO: Não pode ser menor que 0!\n" : "\n");
	}
	while(kilos<0);
	gramas = kilos*1000;
	printf("Gramas = %g", gramas);
	return 0;
}
