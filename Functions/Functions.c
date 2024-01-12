#include <stdio.h>
#include <locale.h>

void ParOuImpar(int n)
{
	if(n % 2 == 0)
	{
		printf("O n�mero � par.");
	}
	else
	{
		printf("O n�mero � impar.");
	}
}

int Par(int n)
{
	int resultado;
	
	resultado = (n % 2 + 1) % 2;
	
	return resultado;
}

int Impar(int n)
{
	int resultado;
	
	resultado = n % 2;
	
	return resultado;
}

int Maior(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	return b;
}

int MaiorDeTres(int a, int b, int c)
{
	int maior = a;
	
	if(b > maior)
	{
		maior = b;
	}
	if(c > maior)
	{
		maior = c;
	}
	
	return maior;
}

float Media(int a, int b)
{
	float media;
	
	media = (a + b);
	media /= 2;
	
	return media;
}

float MaiorN(int n)
{
	int i;
	float x, maior;
	
	printf("Qual � o 1� n�mero? ");
	scanf("%f", &maior);
	for(i = 2; i <= n; i++)
	{
		printf("Qual � o %d� n�mero? ", i);
		scanf("%f", &x);
		if(x > maior)
		{
			maior = x;
		}
	}
	
	return maior;
}

int SomaDigitos(int n)
{
	int soma = 0;
	
	while(n > 0)
	{
		soma += n % 10;
		n /= 10;
	}
	
	return soma;
}

float Maximo(float a, float b)
{
	if(a > b)
	{
		return a;
	}
	return b;
}

float Minimo(float a, float b)
{
	if(a < b)
	{
		return a;
	}
	return b;
}

float Soma(int n)
{
	int i;
	float x, soma = 0;
	
	for(i = 1; i <= n; i++)
	{
		printf("Qual � o %d� n�mero? ", i);
		scanf("%f", &x);
		soma += x;
	}
	
	return soma;
}

void EscreveCaracter(char k, int n)
{
	int i;
	
	for(i = 1; i <= n; i++)
	{
		printf("%c", k);
	}
}

void MostraNumerosAsc(int a, int b)
{
	int i, aux;
	
	if(a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	
	printf("(");
	for(i = a; i < b; i++)
	{
		printf("%d - ", i);
	}
	printf("%d)", b);
}

void MostraNumerosDesc(int a, int b)
{
	int i, aux;
	
	if(a < b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	
	printf("(");
	for(i = a; i > b; i--)
	{
		printf("%d - ", i);
	}
	printf("%d)", b);
}

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Subprogramas  -\n\n");
	
	printf("N�mero do Exercicio: ");
	scanf("%d", &n);
	
	printf("\n");
	
	switch(n)
	{
		case 1:
		{
			int x;
			
			printf("Qual � o n�mero? ");
			scanf("%d", &x);
			printf("\n\n");
			ParOuImpar(x);
			break;
		}
		case 2:
		{
			int x, resultado;
			
			printf("Qual � o n�mero? ");
			scanf("%d", &x);
			resultado = Par(x);
			printf("\n\n");
			printf("%d", resultado);
			break;
		}
		case 3:
		{
			int x, resultado;
			
			printf("Qual � o n�mero? ");
			scanf("%d", &x);
			resultado = Impar(x);
			printf("\n\n");
			printf("%d", resultado);
			break;
		}
		case 4:
		{
			int x, y, resultado;
			
			printf("Qual � o 1� n�mero? ");
			scanf("%d", &x);
			printf("Qual � o 2� n�mero? ");
			scanf("%d", &y);
			resultado = Maior(x, y);
			printf("\n\n");
			printf("Maior = %d", resultado);
			break;
		}
		case 5:
		{
			int x, y, z, resultado;
			
			printf("Qual � o 1� n�mero? ");
			scanf("%d", &x);
			printf("Qual � o 2� n�mero? ");
			scanf("%d", &y);
			printf("Qual � o 3� n�mero? ");
			scanf("%d", &z);
			resultado = MaiorDeTres(x, y, z);
			printf("\n\n");
			printf("Maior = %d", resultado);
			break;
		}
		case 6:
		{
			int x, y;
			float resultado;
			
			printf("Qual � o 1� n�mero? ");
			scanf("%d", &x);
			printf("Qual � o 2� n�mero? ");
			scanf("%d", &y);
			resultado = Media(x, y);
			printf("\n\n");
			printf("M�dia = %g", resultado);
			break;
		}
		case 7:
		{
			int n;
			float resultado;
			
			do
			{
				printf("Quantos n�meros tem a sequ�ncia? ");
				scanf("%d", &n);
				if(n < 2)
				{
					printf("ERRO: N�o pode ser menor que 2!");
				}
				printf("\n");
			} while(n < 2);
			resultado = MaiorN(n);
			printf("\n\n");
			printf("Maior = %g", resultado);
			break;
		}
		case 8:
		{
			int x, resultado;
			
			printf("Qual � o n�mero? ");
			scanf("%d", &x);
			resultado = SomaDigitos(x);
			printf("\n\n");
			printf("Soma = %d", resultado);
			break;
		}
		case 9:
		{
			int i, n;
			float x, maior, menor;
			
			do
			{
				printf("Quantos n�meros tem a sequ�ncia? ");
				scanf("%d", &n);
				if(n < 2)
				{
					printf("ERRO: N�o pode ser menor que 2!");
				}
				printf("\n");
			} while(n < 2);
			printf("\n");
			printf("Qual � o 1� n�mero? ");
			scanf("%f", &x);
			maior = menor = x;
			for(i = 2; i <= n; i++)
			{
				printf("Qual � o %d� n�mero? ", i);
				scanf("%f", &x);
				maior = Maximo(x, maior);
				menor = Minimo(x, menor);
			}
			printf("\n\n");
			printf("Maior = %g", maior);
			printf("\n");
			printf("Menor = %g", menor);
			break;
		}
		case 10:
		{
			int n;
			float resultado;
			
			do
			{
				printf("Quantos n�meros tem a sequ�ncia? ");
				scanf("%d", &n);
				if(n < 2)
				{
					printf("ERRO: N�o pode ser menor que 2!");
				}
				printf("\n");
			} while(n < 2);
			printf("\n");
			resultado = Soma(n) / n;
			printf("\n\n");
			printf("M�dia = %g", resultado);
			break;
		}
		case 11:
		{
			int i, j, k, n, x, y;
			char o;
			
			do
			{
				printf("Quantas linhas tem a pir�mide? ");
				scanf("%d", &n);
				if(n < 2)
				{
					printf("ERRO: N�o pode ser menor que 2!");
				}
				printf("\n");
			} while(n < 2);
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n * 2 - 1; j++)
				{
					if (j != n - i + 1)
					{
						printf(" ");
					}
					else
					{
						for (k = 1; k < i; k++)
						{
							printf("%d", k);
						}
						printf("%d", i);
						for (k = i - 1; k > 0; k--)
						{
							printf("%d", k);
						}
					}
				}
				printf("\n");
			}
			printf("\n");
			printf("Qual � o caracter? ");
			scanf(" %c", &o);
			printf("Quantas repeti��es? ");
			scanf("%d", &n);
			printf("\n\n");
			EscreveCaracter(o, n);
			printf("\n\n");
			printf("Qual � o 1� n�mero? ");
			scanf("%d", &x);
			printf("Qual � o 2� n�mero? ");
			scanf("%d", &y);
			printf("\n\n");
			MostraNumerosAsc(x, y);
			printf("\n\n");
			printf("Qual � o 1� n�mero? ");
			scanf("%d", &x);
			printf("Qual � o 2� n�mero? ");
			scanf("%d", &y);
			printf("\n\n");
			MostraNumerosDesc(x, y);
			break;
		}
		default:
		{
			printf("Exercicio n�o existe.");
			break;
		}
	}
	
	return 0;
}

