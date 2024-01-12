#include <stdio.h>
#include <locale.h>

int main()
{
	int i, n, x, y = 0, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Convers�o d�cimal-bin�rio  -\n\n");
	
	do
	{
		printf("Qual � o n�mero em d�cimal? ");
		scanf("%d", &n);
		printf(n<0 ? "ERRO: N�o pode ser menor que 0!\n" : "\n");
	}
	while(n<0);
	while(n!=0)
	{
		x = 1;
		for(i=0 ; i<y ; i++)
		{
			x *= 10;
		}
		resultado += (n%2)*x;
		n /= 2;
		y++;
	}
	printf("N�mero em bin�rio = %d", resultado);
	return 0;
}
