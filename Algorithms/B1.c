#include <stdio.h>
#include <locale.h>

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  N�mero par ou impar  -\n\n");
	
	printf("Qual � o n�mero? ");
	scanf("%d", &n);
	printf("\n");
	printf(n%2==0 ? "O n�mero � par." : "O n�mero � impar.");
	return 0;
}
