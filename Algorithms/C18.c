#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n, x, y = 1, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Convers�o bin�rio-d�cimal  -\n\n");
	
	do
	{
		printf("Qual � o n�mero em bin�rio? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: N�o pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	while(n!=0)
	{
		x = 1;
		for(i=1 ; i<y ; i++)
		{
			x *= 2;
		}
		resultado += (n%10)*x;
		n /= 10;
		y++;
	}
	printf("N�mero em d�cimal = %d", resultado);
	return 0;
}
