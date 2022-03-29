#include <stdio.h>
#include <math.h>

float a, b, c, delta, x1, x2;

int main(){
	
	printf("-----------------------------------\n");
	printf("CALCULADORA DE EQUACAO DO 2.o GRAU\n");
	printf("-----------------------------------\n");
	
	//Comandos de entrada
	printf("Digite o valor do coeficiente a: ");
	scanf ("%f", &a);
	printf("\nDigite o valor do coeficiente b: ");
	scanf ("%f", &b);
	printf ("\nDigite o valor do coeficiente c: ");
	scanf ("%f", &c);
	
	//Processamento
	delta = pow(b,2) - 4*a*c;
	
	//Comandos de saída
	if (delta >= 0){
		
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
	
		printf ("\n\nx1 = %.2f", x1);	
		printf ("\nx2 = %.2f", x2);
	}
	else{
		printf ("\n\nA equacao nao possui raizes reais, pois a raiz quadrada de delta é menor que 0.\n\n");
	}
	
	return 0;
}
