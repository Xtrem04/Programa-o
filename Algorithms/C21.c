#include <stdio.h>
#include <locale.h>

int main()
{
	int n, x, y, z = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Verifica se n�mero � capicua  -\n\n");
	
	printf("Qual � o n�mero? ");
	scanf("%d", &n);
	x = n;
	while(x!=0)
	{
		y = x%10;
		z = z*10+y;
		x /= 10;
	}
	printf("\n");
	printf(n==z ? "O n�mero � capicua." : "O n�mero n�o � capicua.");
	return 0;
}
