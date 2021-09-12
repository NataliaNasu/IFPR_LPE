#include <stdio.h>

int main() {
	float salarioBase, salario, gratificacao, imposto;
	
	printf("Informe o salario-base do funcionario: ");
	scanf("%f", &salarioBase);
	
	gratificacao = salarioBase * 5 / 100;
	imposto = salarioBase * 7 / 100;
	
	salario = salarioBase + gratificacao - imposto;
	printf("O salario a receber eh de R$%.2f reais.", salario);
	return 0;
}
