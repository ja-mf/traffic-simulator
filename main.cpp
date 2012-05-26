#include <iostream>
#include "include/automovil.h"
#include "include/cuadra.h"
#include "include/semaforo.h"

using namespace std;

int main(int argc,const char* argv[]){
	//declaracion de variables
	
	int tiempo_simulacion = argv[1];	//tiempo a simular	
	int delta; 				//capturar tiempo, y diferencia	
	int i;
	int control_simulador = 0;
	Cuadra * calle[25];					
	Semaforo * sem[9];

	//inicializacion de variables
	for(i = 0; i < 12; i++)
		calle[i] = new Cuadra(i,1000);
	for(i = 12; i < 24; i++)
		calle[i] = new Cuadra(i,20);
	
	//constructor id , estado, horizontal, vertical
	//del 1 ,3,6,7,9,11 llega el trafico
	sem[0] = new Semaforo(0, true, calle[12],  calle[0]);
	sem[1] = new Semaforo(1, true, calle[13],  calle[15]);
	sem[2] = new Semaforo(2, true, calle[4],   calle[2]);
	sem[3] = new Semaforo(3, false, calle[5],  calle[14]);
	sem[4] = new Semaforo(4, false, calle[17], calle[20]);
	sem[5] = new Semaforo(5, false, calle[18], calle[16]);
	sem[6] = new Semaforo(6, true, calle[22],  calle[19]);
	sem[7] = new Semaforo(7, true, calle[23],  calle[10]);
	sem[8] = new Semaforo(8, true, calle[8],   calle[21]);

	while(control_simulador < tiempo simulacion){
		switch(siguiente_evento()){
			case 0 :{
			break;			
			}//end case0		
			default:{
			}//end default
		}		


	}//end while


}//end main


int siguiente_evento(){


}
