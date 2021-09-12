#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, escolha, soma, media;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	printf("Outro número inteiro: ");
	scanf("%d", &n2);
	
	printf("\nObserve as opções a seguir: ");
	printf("\n\t[1] Soma\n\t[2] Média\n\t[3] Menor\n\t[4] Maior");
	printf("\nInforme a operação desejada: ");
	scanf("%d", &escolha);
	
	switch (escolha)
	{
		case 1:
			soma = n1 + n2;
			printf("\nA soma dos números %d e %d é igual a %d.", n1, n2, soma);
			break;
		case 2:
			media = (n1 + n2) / 2;
			printf("\nA média dos números %d e %d é igual a %d.", n1, n2, media);
			break;
		case 3:
			if (n1 < n2)
				printf("\nO número %d é menor do que %d.", n1, n2);
			else
				printf("\nO número %d é menor do que %d.", n2, n1);
			break;
		case 4:
			if (n1 > n2)
				printf("\nO número %d é maior do que %d.", n1, n2);
			else
				printf("\nO número %d é maior do que %d.", n2, n1);
			break;
		default:
			printf("\nOpção inválida!");

	return 0;
	}
}
