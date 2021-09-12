#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, escolha, soma, media;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n1);
	printf("Outro n�mero inteiro: ");
	scanf("%d", &n2);
	
	printf("\nObserve as op��es a seguir: ");
	printf("\n\t[1] Soma\n\t[2] M�dia\n\t[3] Menor\n\t[4] Maior");
	printf("\nInforme a opera��o desejada: ");
	scanf("%d", &escolha);
	
	switch (escolha)
	{
		case 1:
			soma = n1 + n2;
			printf("\nA soma dos n�meros %d e %d � igual a %d.", n1, n2, soma);
			break;
		case 2:
			media = (n1 + n2) / 2;
			printf("\nA m�dia dos n�meros %d e %d � igual a %d.", n1, n2, media);
			break;
		case 3:
			if (n1 < n2)
				printf("\nO n�mero %d � menor do que %d.", n1, n2);
			else
				printf("\nO n�mero %d � menor do que %d.", n2, n1);
			break;
		case 4:
			if (n1 > n2)
				printf("\nO n�mero %d � maior do que %d.", n1, n2);
			else
				printf("\nO n�mero %d � maior do que %d.", n2, n1);
			break;
		default:
			printf("\nOp��o inv�lida!");

	return 0;
	}
}
