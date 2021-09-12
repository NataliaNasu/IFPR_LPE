#include <stdio.h>

int main() {
	int idade;
	
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);
	
	if (idade >= 5 && idade <= 7)
		printf("\nCategoria: INFATIL A");
	else if (idade >= 8 && idade <= 10)
		printf("\nCategoria: INFATIL B");
	else if (idade >= 11 && idade <= 13)
		printf("\nCategoria: JUVENIL A");
	else if (idade >= 14 && idade <= 17)
		printf("\nCategoria: JUVENIL B");
	else if (idade >= 18)
		printf("\nCategoria: SENIOR");
	else
		printf("\nIdade abaixo do esperado!");
	
	return 0;
}
