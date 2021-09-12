#include <stdio.h>
#include <locale.h>

int main() {
	int mes, dias;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Para saber a quantidade de dias, informe o mês: ");
	scanf("%d", &mes);
	
	if (mes == 2) {
		dias = 28;
		printf("\nO %do mês tem %d dias", mes, dias);
	} else if (mes == 4, mes == 6, mes == 9, mes == 11) {
		dias = 30;
		printf("\nO %do mês tem %d dias", mes, dias);
	} else {
		dias = 31
		printf("\nO %do mês tem %d dias", mes, dias);
		}
	return 0;
}
