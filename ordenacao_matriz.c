#include <stdio.h>
#include <stdlib.h>

char chrCartas[9];

void ImprimeMatriz(void)
{
	int intContador;
	
	for (intContador = 0; intContador < 9; intContador++)
		printf("%c", chrCartas[intContador]);
	
	printf("\n");
	printf("\n");
}

void OrdenaMatriz(void)
{
	int intEsquerda, intDireita;
	char chrCartaTemp;
	
	for(intEsquerda = 0; intEsquerda < 8; intEsquerda++)
	{
		for(intDireita = intEsquerda + 1; intDireita < 9; intDireita++)
		{
			if (chrCartas[intEsquerda] > chrCartas[intDireita])
			{
				chrCartaTemp = chrCartas[intEsquerda];
				chrCartas[intEsquerda] = chrCartas[intDireita];
				chrCartas[intDireita] = chrCartaTemp;
			}
		}
		
		printf("Passagem no. %d\n", intEsquerda + 1);
		ImprimeMatriz();
	}
}

int main(void)
{
	chrCartas[0] = '4';
	chrCartas[1] = '1';
	chrCartas[2] = '5';
	chrCartas[3] = '7';
	chrCartas[4] = '3';
	chrCartas[5] = '2';
	chrCartas[6] = '6';
	chrCartas[7] = '9';
	chrCartas[8] = '8';
	
	system("cls");
	
	OrdenaMatriz();
	
	return 0;
}
