#include <stdio.h>
#include <locale.h>

int main()
{
	int n, x, y, z = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Verifica se número é capicua  -\n\n");
	
	printf("Qual é o número? ");
	scanf("%d", &n);
	x = n;
	while(x!=0)
	{
		y = x%10;
		z = z*10+y;
		x /= 10;
	}
	printf("\n");
	printf(n==z ? "O número é capicua." : "O número não é capicua.");
	return 0;
}
