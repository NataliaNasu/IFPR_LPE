#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota;
		
	do {
		printf("Informe a nota: ");
		scanf("%f", &nota);
		
		if (nota < 0 || nota > 10)
			printf("Nota inválida. Digite outra vez!\n");
		else 
			printf("\nNota: %.1f", nota);
	
	} while (nota < 0 || nota > 10);
	
	return 0;
}
