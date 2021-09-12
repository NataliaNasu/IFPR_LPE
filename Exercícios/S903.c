#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int idade1, idade2, idade3;
	char nome1[30], nome2[30], nome3[30];
	
	printf("Informe o nome da 1a pessoa: ");
	fflush(stdin);
	gets(nome1);
	printf("Digite sua idade: ");
	scanf("%d", &idade1);
	
	printf("\nNome da 2a pessoa: ");
	fflush(stdin);
	gets(nome2);
	printf("Digite sua idade: ");
	scanf("%d", &idade2);
	
	printf("\nNome da 3a pessoa: ");
	fflush(stdin);
	gets(nome3);
	printf("Digite sua idade: ");
	scanf("%d", &idade3);
	
	if ((idade1 > idade2) && (idade1 > idade3)) {
		printf("\n%s tem %d anos e é a pessoa mais velha.", nome1, idade1);
		if (idade2 > idade3)
			printf("\n%s tem %d anos e é a mais nova.", nome3, idade3);
		else
			printf("\n%s tem %d anos e é a mais nova.", nome2, idade2);
	} else if ((idade2 > idade1) && (idade2 > idade3)) {
		printf("\n%s tem %d anos e é a pessoa mais velha.", nome2, idade2);
		if (idade1 > idade3)
			printf("\n%s tem %d anos e é a mais nova.", nome3, idade3);
		else
			printf("\n%s tem %d anos e é a mais nova.", nome1, idade1);
	} else if ((idade3 > idade1) && (idade3 > idade2)) {
		printf("\n%s tem %d anos e é a pessoa mais velha.", nome3, idade3);
		if (idade1 > idade2)
			printf("\n%s tem %d anos e é a mais nova.", nome2, idade2);
		else
			printf("\n%s tem %d anos e é a mais nova.", nome1, idade1);
	}
	
	return 0;
}
