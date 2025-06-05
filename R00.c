#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]) {
	//declaracion de vaariables locales
	int numero=0, contador=0, opcion=0, eleccion=0,marcador=0,r=0,m=0,c=0;
	srand(time(NULL));
	
	printf("Programa que simula Piedra-Papel-Tijera\n");
	ciclo:
	printf("Selecciona una opcion\n");
	printf("1-Jugar\n");
	printf("2-Ver Marcador\n");
	printf("3-Salir y Reset\n");
	elec:
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1:
		contador++;
		printf("Selecciona tu movimiento:\n1-Piedra\n2-Papel\n3-Tijera\n");
		scanf("%d",&eleccion);
		numero=(int)(1+rand()%3);
		if(eleccion==numero){
			printf("Empate\n");
		}
		if(eleccion==1&&numero==2||eleccion==2&&numero==3||eleccion==3&&numero==1)
		{
			printf("Perdiste\n");
		}
		if(eleccion==1&&numero==3||eleccion==2&&numero==1||eleccion==3&&numero==2)
		{
			printf("Ganaste\n");
			marcador++;
		}
		

		if(eleccion<=0||eleccion>=4)
		{
			printf("PIERDES POR MENSO\n");
			
		}
		system("pause");
		system("cls");
		
		goto ciclo;
		break;
	case 2:
		marcador+=m;
		contador+=c;
		printf("La puntuacion es %d/%d\n",marcador,contador);
		system("pause");
		system("cls");
		goto ciclo;
		break;
	case 3:
		printf("La puntuacion final fue %d/%d\n",marcador,contador);
		printf("Saliendo del juego\nDeseas reiniciar el marcador\n");
		printf("1-Si\n2-No\n");
		scanf("%d",&r);
		if(r==1){
			marcador=0;
			contador=0;}
		if(r==2){
			m=marcador;
			c=contador;}
		break;
	default: printf("Opcion Invalida\n Elige de nuevo\n"); goto elec;
	}
	
	
	
	
	return 0;
}

