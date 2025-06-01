#include <stdio.h>

int main(int argc, char *argv[]) {
	int a=0,i=0;
	printf("Programa que solicita 5 numeros impares\n");
	printf("Introduce el valor de la variable\n");
	
	while(i<=4)
	{
		scanf("%d",&a);printf("   %d\n",i);
		if(a%2==1)
			i++;
		else
			i=i;
	}
	
	
	return 0;
}

