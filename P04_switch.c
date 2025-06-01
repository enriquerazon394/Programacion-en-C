#include <stdio.h>

int main(int argc, char *argv[]) {
	int selector,a=0,b=0,c=0;
	printf("Calculadora usando switch case\n");
	printf("Introduce el valor de las variables [a,b]\n");
	scanf("%d,%d",&a,&b);
	again:
	printf("Ingresa la opcion a realizar:\n1_Suma\n2_Resta\n3_Multiplicacion\n");
	scanf("%d",&selector);

	switch(selector)
	{
	case 1: c=a+b; break;
	case 2: c=a-b; break;
	case 3: c=a*b; break;
	default: printf("OPCION INVALIDA\n\a"); goto again;
	}

	printf("El resultado es %d",c);
	
	return 0;
}

