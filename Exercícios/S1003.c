#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int codigo; 
	float salario, aumento, salarioAtual;
	
	printf("Informe o c�digo do funcionario: ");
	scanf("%d", &codigo);
	if (codigo >= 6)
		printf("codigo inv�lido!");
	else
		printf("Sal�rio: R$");
		scanf("%f", &salario);
	
	switch (codigo)	{
		case 1:
			printf("\nCargo: Programador(a)");
			aumento = salario * 15 / 100;
			printf("\nAumento: R$%.2f reais.", aumento);
			salarioAtual = salario + aumento;
			printf("\nSal�rio Atual: R$%.2f", salarioAtual);
			break;
		case 2:
			printf("\nCargo: Analista de Rede");
			aumento = salario * 10 / 100;
			printf("\nAumento: R$%.2f reais.", aumento);
			salarioAtual = salario + aumento;
			printf("\nSal�rio Atual: R$%.2f", salarioAtual);
			break;
		case 3:
			printf("\nCargo: Administrador(a) de Banco de Dados");
			aumento = salario * 7 / 100;
			printf("\nAumento: R$%.2f reais.", aumento);
			salarioAtual = salario + aumento;
			printf("\nSal�rio Atual: R$%.2f", salarioAtual);
			break;
		case 4:
			printf("\nCargo: Gerente");
			aumento = salario * 5 / 100;
			printf("\nAumento: R$%.2f reais.", aumento);
			salarioAtual = salario + aumento;
			printf("\nSal�rio Atual: R$%.2f", salarioAtual);
			break;
		case 5:
			printf("\nCargo: Diretor(a)");
			printf("\nAumento: R$0.00 reais.");
			printf("\nSal�rio: R$%.2f", salario);
			break;
	}	
	return 0;
}
