#include <stdio.h>

int main(int argc, char *argv[]) {
	int x=0,y=0,z=0;
	float m=0,f=0;
	z+=x;
	z*=y;
	z+=1;//z=z+1 z++ ++z
	z%=6;
	z-=10;
	z--;
	
	/*
	printf("Ingresa el valor de la variable flotante m \n");
	scanf("%f",&m);//%m apunta a la direccion de memoria de la variable m
	printf("%f\n%c\a",m,70);
	*/
	printf("Ingresa el numero complejo de la forma [a,bi] :");
	scanf("%d,%d",&x,&y);
	printf("El numero rectangular es:[%d,%di]",x,y);
	
	
	return 0;
}

