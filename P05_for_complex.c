/*P04_ciclo for
*/
#include <stdio.h>
#include<math.h>
#define pi 3.1415
int main(int argc, char *argv[]) {
	int n,i;
	float x;
	
	printf("Introduce tu numero: ");
	scanf("%f",&x);
	printf("Introduce el radical: ");
	scanf("%d",&n);
	float r[n],m[n];
	for(i=0;i<n;i++)
	{
		r[i]=cos((2*i*pi)/n);
		m[i]=sin((2*i*pi)/n);
		printf("La raiz [%d] es %.3f +%.3fi\n",i,r[i],m[i]);
	}
	return 0;
}

