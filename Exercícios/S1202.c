#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int valor, cont = 0, soma = 0;
	float media;
	
	do {
		printf("Informe um valor: ");
		scanf("%d", &valor);
		
		if (valor >= 0) {
			soma += valor;
			cont += 1;
		} else
			printf("Fim do programa!\n");
	} while(valor > 0);
	
	media = (float)soma / cont;
	
	printf("\nA soma dos %d números = %d", cont, soma);
	printf("\nE a média = %.1f", media);
	
}
