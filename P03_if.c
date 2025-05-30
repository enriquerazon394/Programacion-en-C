#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	
	
	
	printf("Programa P03 uso de estructura IF\nIngresa el valor de a y b separado por espacio\n");
	scanf("%d %d",&a,&b);
	printf("La suma de a+b= %d\n",a+b);
	if(a<b)
		printf("La variable a es menor a b\n");
	if(a>b)
		printf("La variable a es mayor a b\n");
	else
		printf("Ambas variables son identicas\n");
	
	scanf("%d",&c);
	
	if(a<b && a<c)
	{
		if(b<c)
			printf("%d %d %d",a,b,c);
		else
			printf("%d %d %d",a,c,b);
	}
	else
	{
		if(b<c)
			if(a<c)
			printf("%d %d %d",b,a,c);
		else
			printf("%d %d %d",b,c,a);
		
	else
	   {
		if(a<b)
			printf("%d %d %d",c,a,b);
		else
			printf("%d %d %d",c,b,a);
	}
	
	}
	return 0;
}

