#include <stdio.h>
#include <locale.h>

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  N�mero divis�vel por 3  -\n\n");
	
	printf("Qual � o n�mero? ");
	scanf("%d", &n);
	printf("\n");
	printf(n%3==0 ? "O n�mero � divis�vel por 3." : "O n�mero n�o � divis�vel por 3.");
	return 0;
}

