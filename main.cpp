#include <iostream>
#include <stdlib.h>
#include "include/automovil.h"
#include "include/cuadra.h"
#include "include/semaforo.h"
#include "include/main.h"
#include "include/evento.h"

int main(int argc,const char* argv[]){
	//declaracion de variables
	int indice_auto;
	int tiempo_simulacion = atoi(argv[1]);	//tiempo a simular	
	int delta; 				//capturar tiempo, y diferencia	
	int i;
	int control_simulador;
	Cuadra * calle[25];					
	Semaforo * sem[9];
	Evento listaEventos[37];

	int * ruta = new int[4];

	//inicializacion de variables
	for(i = 0; i < 12; i++)
		calle[i] = new Cuadra(i,1000);
	for(i = 12; i < 24; i++)
		calle[i] = new Cuadra(i,20);
	indice_auto = 0;
	control_simulador = 0;	
	delta = 0;

	//constructor id , estado, horizontal, vertical
	//del 1 ,3,6,7,9,11 llega el trafico
	sem[0] = new Semaforo(0, false, calle[12],  calle[0]);
	sem[1] = new Semaforo(1, false, calle[13],  calle[15]);
	sem[2] = new Semaforo(2, false, calle[4],   calle[2]);
	sem[3] = new Semaforo(3, true, calle[5],  calle[14]);
	sem[4] = new Semaforo(4, true, calle[17], calle[20]);
	sem[5] = new Semaforo(5, true, calle[18], calle[16]);
	sem[6] = new Semaforo(6, false, calle[22],  calle[19]);
	sem[7] = new Semaforo(7, false, calle[23],  calle[10]);
	sem[8] = new Semaforo(8, false, calle[8],   calle[21]);


	// inicializar la lista de eventos de forma estatica
	ruta[0] = 3;
	ruta[1] = 12;
	ruta[2] = 13;
	ruta[3] = 4;
	listaEventos[0] = new LlegadaAuto(1, ruta);

	while(control_simulador < tiempo_simulacion){
		switch(siguiente_evento()){
			case 0 :{
				break;			
			}//end case0		
			default:{
							
			}//end default
		}		
		//delta = evento_actual - delta;	//cuanto tiempo transcurrio entre eventos
		//control_simulador += delta;		//sumar ese tiempo
		//delta = evento_actual;		//obtener el tiempo de este evento
	}//end while


}//end main


int siguiente_evento(){


}
