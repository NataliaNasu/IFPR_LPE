#include <stdio.h>

int main() {
	float altura, peso_ideal;
	char nome[30], genero;
	
	printf("Digite o seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("Sua altura: ");
	scanf("%f", &altura);
	printf("Qual o seu genero? [M - F] ");
	fflush(stdin);
	genero = getchar();
	
	if (genero == "M" || "m")
		peso_ideal = 72.7 * altura -58;
	else
		peso_ideal = 61.1 * altura - 44;
	printf("\nO peso ideal de %s eh igual a %.1fkg.", nome, peso_ideal);
	
	return 0;
}
