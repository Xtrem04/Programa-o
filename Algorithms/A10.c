#include <stdio.h>
#include <locale.h>

int main()
{
	int n, x, y, z;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Digitos de um n�mero com 3 algarismos  -\n\n");
	
	do
	{
		printf("Qual � o n�mero de 3 algarismos? ");
		scanf("%d", &n);
		printf(n<100 || n>1000 ? "ERRO: N�o pode ser menor que 100 nem maior que 1000!\n" : "\n");
	}
	while(n<100 || n>1000);
	x = n/100;
	y = (n/10)%10;
	z = n%10;
	printf("%d %d %d", x, y, z);
	return 0;
}
