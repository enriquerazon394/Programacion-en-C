//Programa de for multicondicionado
#include <stdio.h>

int main(int argc, char *argv[]) {
	int par, impar;
	
	for(impar=1,par=2;impar<49||par<50;impar+=2,par+=2)
	{
		printf("%d %d\n",impar, par);
	}
	return 0;
}

