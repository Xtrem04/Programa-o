#include <stdio.h>
#include <locale.h>

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Número divisível por 3  -\n\n");
	
	printf("Qual é o número? ");
	scanf("%d", &n);
	printf("\n");
	printf(n%3==0 ? "O número é divisível por 3." : "O número não é divisível por 3.");
	return 0;
}

