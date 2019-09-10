#include<stdio.h>
#include<ctype.h>

int main() 
{
	char Tabuleiro[8][8];
	char Jogador1[20], Jogador2[20];
	int Turno=0, LC=0, LinhaColunaOrigem[2], LinhaColunaDestino[2];
	char Ganhador = 'X';

	for (int i=1; i<=2; i++)
	{
		printf("Insira o nome do Jogador %d: ", i);
		if (i == 1) gets(Jogador1);
		else gets(Jogador2);
	}
	system("cls");
	FormularTabuleiro(Tabuleiro);
	do 
	{
		PrintarTabuleiro(Tabuleiro);
		printf("\n Digite a linha e coluna (Tudo junto), respectivamente, da peça a ser movimentada: ");

		printf("Linha %d: ", LinhaColunaOrigem[0]);
		printf("Coluna %d: ", LinhaColunaOrigem[1]);


	} while (Ganhador == 'X');
	getchar();
	return 0;
}

int FormularTabuleiro(char Tabuleiro[8][8])
{
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
		{
			if (row == 0 || row % 2 == 0)
			{
				if (column % 2 == 1)
				{
					Tabuleiro[row][column] = 178;
				}
				else
				{
					if (row < 3) Tabuleiro[row][column] = 'A';
					else if (row > 4) Tabuleiro[row][column] = 'B';
					else Tabuleiro[row][column] = ' ';
				}
			}
			else if (row % 2 == 1)
			{
				if (column % 2 == 1)
				{
					if(row < 3) Tabuleiro[row][column] = 'A';
					else if(row > 4) Tabuleiro[row][column] = 'B';
					else Tabuleiro[row][column] = ' ';
				}
				else
				{
					Tabuleiro[row][column] = 178;
				}
			}		
		}
	}
	return 0;
}

int PrintarTabuleiro(char Tabuleiro[8][8]) 
{
	printf("    0  1  2  3  4  5  6  7 ");
	for (int row = 0; row < 8; row++)
	{
		printf("\n %d ", row);
		for (int column = 0; column < 8; column++)
		{
			if (Tabuleiro[row][column] == 'A')
				printf(" %c ", Tabuleiro[row][column]);
			else if (Tabuleiro[row][column] == 'B')
				printf(" %c ", Tabuleiro[row][column]);
			else
				printf("%c%c%c", Tabuleiro[row][column], Tabuleiro[row][column], Tabuleiro[row][column]);
		}
	}
}