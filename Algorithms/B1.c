#include <stdio.h>
#include <locale.h>

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Número par ou impar  -\n\n");
	
	printf("Qual é o número? ");
	scanf("%d", &n);
	printf("\n");
	printf(n%2==0 ? "O número é par." : "O número é impar.");
	return 0;
}
