#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int diaSemana;
	
	printf("Informe um n�mero: [1-7] ");
	scanf("%d", &diaSemana);
	
	if (diaSemana == 1)
		printf("\nDia da Semana: Domingo");
	if (diaSemana == 2)
		printf("\nDia da Semana: Segunda");
	if (diaSemana == 3)
		printf("\nDia da Semana: Ter�a");
  	if (diaSemana == 4)
    	printf("\nDia da Semana: Quarta");
  	if (diaSemana == 5)
    	printf("\nDia da Semana: Quinta");
  	if (diaSemana == 6)
		printf("\nDia da Semana: Sexta");
  	if (diaSemana == 7)
		printf("\nDia da Semana: S�bado");
  	if (diaSemana > 7 || diaSemana < 1)
    	printf("\nDia da semana inv�lida!");
	
	return 0;
}
