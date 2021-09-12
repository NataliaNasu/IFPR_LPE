#include <stdio.h>
#include <locale.h>

int main(void) {
	int mes, dias = 31;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Para saber a quantidade de dias, informe o mês: ");
	scanf("%d", &mes);
	
	if (mes == 2) {
		dias = dias - 3;
		printf("\nO %do mês tem %d dias", mes, dias);
	} else if (mes == 4 || (mes == 6 || ( mes == 9 || mes == 11))) {
		dias = dias - 1;
		printf("\nO %do mês tem %d dias", mes, dias);
	} else {
		printf("\nO %do mês tem %d dias", mes, dias);
	}
	return 0;
}
