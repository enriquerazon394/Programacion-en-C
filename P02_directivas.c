#include <stdio.h>
#include<math.h>	//libreria de funciones matematicas
#define pi 3.1415	//Define una macro numerica
#define view(x) printf("%s",x); //Macro local a una funcion
int main(int argc, char *argv[]) {
	float r=0,a=0;
	printf("Ingresa el valor del radio: ");
	scanf("%f",&r);
	a=pi*pow(r,2);
	printf("El area de la circunferencia es :%.3f",a);
	view("\n Ejemplo de una Macro-funcion");
	
	
	
	return 0;
}

