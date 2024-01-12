#include <stdio.h>
#include <locale.h>

int main()
{
	int n, segundos, minutos, horas;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Convers�o de tempo em segundos  -\n\n");
	
	do
	{
		printf("Qual � a quantidade de segundos? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: N�o pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	horas = n/3600;
	minutos = (n/60)%60;
	segundos = n%60;
	printf("%02d:%02d:%02d", horas, minutos, segundos);
	return 0;
}
