#include <stdio.h>
#include <locale.h>

int NumLinhas = 5;
int NumColunas = 5;
int ValMin = 0;
int ValMax = 9;

#include "OperacoesBasicas.h"
#include "Matrizes.h"

int main()
{
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-  Matrizes  -\n\n");
	
	printf("Número do Exercicio: ");
	scanf("%d", &n);
	
	printf("\n");
	
	switch(n)
	{
		case 1:
		{
			int L, C;
			float X[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			break;
		}
		case 2:
		{
			int L, C;
			float Soma;
			float X[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			Soma = SomaMatrizReal(X, L, C);
			printf("\n\n");
			printf("Soma = %g", Soma);
			break;
		}
		case 3:
		{
			int L, C;
			float Maior, Menor;
			float X[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			Maior = MaiorMatrizReal(X, L, C);
			Menor = MenorMatrizReal(X, L, C);
			printf("\n\n");
			printf("Maior = %g", Maior);
			printf("\n");
			printf("Menor = %g", Menor);
			break;
		}
		case 4:
		{
			int L, C;
			float X[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			printf("\n\n");
			IndiceMaiorMatrizReal(X, L, C);
			printf("\n\n");
			IndiceMenorMatrizReal(X, L, C);
			break;
		}
		case 5:
		{
			int L, C;
			float X[NumLinhas][NumColunas], Y[NumLinhas][NumColunas], Soma[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			printf("\n\n");
			LerMatrizReal(Y, L, C);
			printf("\n");
			EscreverMatrizReal(Y, L, C);
			printf("\n\n");
			printf("Soma:");
			printf("\n");
			SomaMatrizesReais(X, Y, Soma, L, C);
			EscreverMatrizReal(Soma, L, C);
			break;
		}
		case 6:
		{
			int L, C;
			float X[NumLinhas][NumColunas], Y[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n\n");
			if(L != C)
			{
				printf("Impossivel transpor matriz.");
				return 0;
			}
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			printf("\n\n");
			printf("Transposta:");
			printf("\n");
			CopiaMatrizReal(X, Y, L, C);
			TransporMatrizReal(X, Y, L, C);
			EscreverMatrizReal(Y, L, C);
			break;
		}
		case 7:
		{
			int L, C, nulos;
			int X[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			LerMatrizInteira(X, L, C);
			printf("\n");
			EscreverMatrizInteira(X, L, C);
			nulos = NulosDiagonalMatrizInteira(X, L, C);
			printf("\n\n");
			printf("Quantidade de elementos nulos existentes na sua diagonal principal: %d", nulos);
			break;
		}
		case 8:
		{
			int LX, CX, LY, CY;
			float X[NumLinhas][NumColunas], Y[NumLinhas][NumColunas], Produto[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz 1]");
			printf("\n");
			LX = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz 1]");
			printf("\n");
			CX = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			printf("[Linhas da Matriz 2]");
			printf("\n");
			LY = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz 2]");
			printf("\n");
			CY = LerNumeroInteiroValido(2, NumColunas);
			printf("\n\n");
			if(CX != LY)
			{
				printf("Impossivel multiplicar as matrizes.");
				return 0;
			}
			printf("[Matriz 1]");
			printf("\n\n");
			LerMatrizReal(X, LX, CX);
			printf("\n");
			EscreverMatrizReal(X, LX, CX);
			printf("\n\n");
			printf("[Matriz 2]");
			printf("\n\n");
			LerMatrizReal(Y, LY, CY);
			printf("\n");
			EscreverMatrizReal(Y, LY, CY);
			printf("\n\n");
			printf("Produto:");
			printf("\n");
			ProdutoMatrizesReais(X, Y, Produto, LX, CY, CX);
			EscreverMatrizReal(Produto, LX, CY);
			break;
		}
		case 9:
		{
			int L, C, linha;
			float X[NumLinhas][NumColunas];
			
			printf("[Linhas da Matriz]");
			printf("\n");
			L = LerNumeroInteiroValido(2, NumLinhas);
			printf("[Colunas da Matriz]");
			printf("\n");
			C = LerNumeroInteiroValido(2, NumColunas);
			printf("\n");
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			linha = LinhaSomaMaximaMatrizReal(X, L, C);
			printf("\n\n");
			printf("Linha cuja soma dos seus elementos é máxima: %d", linha);
			break;
		}
		case 10:
		{
			NumLinhas = 5;
			NumColunas = 12;
			int L = 5, C = 12;
			float X[NumLinhas][NumColunas];
			
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			printf("\n\n");
			MediaSessaoMatrizReal(X, L, C);
			printf("\n\n");
			MelhorTempoMatrizReal(X, L, C);
			break;
		}
		case 11:
		{
			NumLinhas = 35;
			NumColunas = 12;
			int L = 35, C = 12, AlunosAprovados, MelhorTurma;
			float X[NumLinhas][NumColunas];
			
			ValMin = 0;
			ValMax = 20;
			LerMatrizReal(X, L, C);
			printf("\n");
			EscreverMatrizReal(X, L, C);
			AlunosAprovados = NumeroAlunosAprovadosMatrizReal(X, L, C);
			printf("\n\n");
			printf("Quantidade de alunos aprovados: %d", AlunosAprovados);
			printf("\n\n");
			MelhorNotaTurmaMatrizReal(X, L, C);
			MelhorTurma = TurmaMaisAlunosAprovadosMatrizReal(X, L, C);
			printf("\n\n");
			printf("Turma com mais alunos aprovados: Turma %d", MelhorTurma);
			break;
		}
		default:
		{
			printf("Exercicio não existe.");
			break;
		}
	}
	
	return 0;
}
