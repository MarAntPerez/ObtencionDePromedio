#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int MINIMO_APROBADO = 6;
	const int NUMERO_MAXIMO_CALIFICACIONES = 15;
	const int INICIALIZA_CALIFICACION_VACIA = 0;
	const int ASCII_ENIE = 164;
	const int ASCII_APERTURA_INTERROGACION = 168;
	const int ASCII_U_ACENTO = 163;
	
	int calificaciones[NUMERO_MAXIMO_CALIFICACIONES];
	
	int materiasCursadas;
	int contador;
	float promedio;
	int contadorMaterias = 0;
	float sumaCalificaciones;
	
	for(contador=0; contador<NUMERO_MAXIMO_CALIFICACIONES; contador++){
		calificaciones[contador] = INICIALIZA_CALIFICACION_VACIA;
	}
	
	printf("%cCuantas materias cursaste este a%co?, (Maximo puedes ingresar %i materias).", ASCII_APERTURA_INTERROGACION, ASCII_ENIE, NUMERO_MAXIMO_CALIFICACIONES);
	scanf("%i", &materiasCursadas);
	
	if(materiasCursadas<=NUMERO_MAXIMO_CALIFICACIONES){
		
		for(contador=0; contador<materiasCursadas; contador++){
			contadorMaterias++;
			printf("Ingresa la calificacion de la materia n%cmero %i: ", ASCII_U_ACENTO, contadorMaterias);
			scanf("\n%i", &calificaciones[contador]);
		}
	
		for(contador=0; contador<NUMERO_MAXIMO_CALIFICACIONES; contador++){
			sumaCalificaciones += calificaciones[contador];
		}
	
		promedio = sumaCalificaciones/materiasCursadas;
	
		if(promedio>=MINIMO_APROBADO){
			printf("Tu promedio es %f, felicidades aprobaste.", promedio);
		}else{
			printf("Tu promedio es %f, lo sentimos no aprobaste.", promedio);
		}
	
	}else{
		printf("Solo puedes ingresar %i materias e intentaste ingresar %i", NUMERO_MAXIMO_CALIFICACIONES, materiasCursadas);
	}
	
	return 0;
}
