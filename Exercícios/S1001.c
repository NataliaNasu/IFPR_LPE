#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf("Digite um número entre 0 - 10: ");
	scanf("%d", &numero);
	
	switch (numero)
	{
		case 0:
			printf("\nZero");
			break;
		case 1:
			printf("\nUm");
			break;
		case 2:
			printf("\nDois");
			break;
		case 3:
			printf("\nTrês");
			break;
		case 4:
			printf("\nQuatro");
			break;
		case 5:
			printf("\nCinco");
			break;
		case 6:
			printf("\nSeis");
			break;
		case 7:
			printf("\nSete");
			break;
		case 8:
			printf("\nOito");
			break;
		case 9:
			printf("\nNove");
			break;
		case 10:
			printf("\nDez");
			break;
		default:
			printf("\nNúmero inválido!");
	
	return 0;
	}
}
