#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota[10], media, soma;
	int i, cont = 0;
	
	for (i = 0; i < 10; i++) {
		printf("Digite a nota do %do aluno[a]: ", i+1);
		scanf("%f", &nota[i]);
		soma += nota[i];
	}
	
	media = soma / 10;
	printf("\nMedia = %.1f", media);
	
	for (i = 0; i < 10; i++) {
		if (nota[i] > media) {
			cont += 1;
		}
	}
	
	printf("\nE, %d alunos obtiveram nota superior à média.", cont);
}
