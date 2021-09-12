#include <stdio.h>

int main() {
	int vetorB[10];
	int i, pos, valorB;
	
	for (i = 0; i < 10; i++) {
		printf("Digite um valor inteiro: ");
		scanf("%d", &vetorB[i]);
	}
	
	printf("\nDigite um valor do vetorB: ");
	scanf("%d", &valorB);
	
	for (i = 0; i < 10; i++) {
		if (valorB == vetorB[i]) {
			pos = i;
			printf("\nO valor digitado aparece na posicao %d", pos);
		} else 
			printf("Não foi encontrado nenhum valor.");
	}
}
