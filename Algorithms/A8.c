#include <stdio.h>
#include <locale.h>

int main()
{
	float celsius, fahreneit;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Conversão celsius-fahreneit  -\n\n");
	
	printf("Qual é o valor em graus celsius? ");
	scanf("%f", &celsius);
	fahreneit = 1.8*celsius+32;
	printf("\n");
	printf("Fahreneit = %g", fahreneit);
	return 0;
}
