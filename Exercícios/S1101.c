#include <stdio.h>

int main() {
	int x, idade, maioridade = 0;
	
	x = 1;
	for (x = 1; x <= 10; x++) {
		printf("Informe a idade da %do pessoa: ", x);
		scanf("%d", &idade);
		if (idade >= 18)
			maioridade += 1;
	}
	
	printf("\nExistem %d pessoas com idade maior ou igual a 18 anos.", maioridade);
	
	return 0;
}
