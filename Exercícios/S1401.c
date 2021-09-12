#include <stdio.h>

int main() {
	int vetorS[15];
	int i;
	
	for (i = 0; i < 15; i++) {
		printf("Digite um valor inteiro: ");
		scanf("%d", &vetorS[i]);
	}
	
	for (i = 14; i >= 0; i--) {
		printf("\n%d", vetorS[i]);
	}
}
