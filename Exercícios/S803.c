#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int inteiro;
	double numero, fracao;
	
	printf("Digite um valor: ");
	scanf("%f", &numero);
	
	inteiro = (int)numero;
	fracao = numero - inteiro;
	
	if (fracao >= 0,5) {
		numero = inteiro + 1;
		printf("\nO valor arredondado é: %.1f\n", numero);
	} else
		printf("\nO valor arredondado é: %\n", inteiro);

	return 0;
}
