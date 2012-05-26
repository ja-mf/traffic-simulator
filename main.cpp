#include <iostream>
#include <stdlib.h>
#include "include/main.h"

int main(int argc,const char* argv[]){
	//declaracion de variables
	int indice_auto;
	int tiempo_simulacion = atoi(argv[1]);	//tiempo a simular	
	int delta; 				//capturar tiempo, y diferencia	
	int i;
	int control_simulador;
	LlegadaAuto * le1[21];
	CambioSemaforo * le2[16];
	automovil a[100];
	Cuadra * calle[25];
	Semaforo * sem[9];
		
	LlegadaAuto * pico;

	int contador1, contador2;
	int a_actual = 0;

	int * ruta1 = new int[4];
	int * ruta2 = new int[3];

	//inicializacion de variables
	for(i = 0; i < 12; i++)
		calle[i] = new Cuadra(i,1000);
	for(i = 12; i < 24; i++)
		calle[i] = new Cuadra(i,20);
	indice_auto = 0;
	control_simulador = 0;	
	delta = 0;
	contador1 = contador2 = 0;

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
	ruta1[0] = 3;
	ruta1[1] = 12;
	ruta1[2] = 13;
	ruta1[3] = 4;
	ruta2[0] = 1;	
	ruta2[1] = 13;	
	ruta2[2] = 2;

//	cout <<	calle[0]->intentos << endl;

	le1[0] = new LlegadaAuto(1, ruta1, calle);
	le1[1] = new LlegadaAuto(3, ruta1, calle);
	le1[2] = new LlegadaAuto(6, ruta1, calle);
	le1[3] = new LlegadaAuto(14, ruta1, calle);
	le1[4] = new LlegadaAuto(21, ruta1, calle);
	le1[5] = new LlegadaAuto(36, ruta1, calle);
	le1[6] = new LlegadaAuto(46, ruta1, calle);
	le1[7] = new LlegadaAuto(51, ruta1, calle);
	le1[8] = new LlegadaAuto(59, ruta1, calle);
	le1[9] = new LlegadaAuto(60, ruta1, calle);
	le1[10] = new LlegadaAuto(150, ruta2, calle);
	le1[11] = new LlegadaAuto(163, ruta2, calle);
	le1[12] = new LlegadaAuto(171, ruta2, calle);
	le1[13] = new LlegadaAuto(174, ruta2, calle);
	le1[14] = new LlegadaAuto(187, ruta2, calle);
	le1[15] = new LlegadaAuto(213, ruta2, calle);
	le1[16] = new LlegadaAuto(235, ruta2, calle);
	le1[17] = new LlegadaAuto(236, ruta2, calle);
	le1[18] = new LlegadaAuto(245, ruta2, calle);
	le1[19] = new LlegadaAuto(255, ruta2, calle);
	le1[20] = new LlegadaAuto(274, ruta1, calle);
	/*
	le2[0] = new CambioSemaforo(23,0);
	le2[1] = new CambioSemaforo(27,0);
	le2[2] = new CambioSemaforo(77,0);
	le2[3] = new CambioSemaforo(90,0);
	le2[4] = new CambioSemaforo(94,1);
	le2[5] = new CambioSemaforo(119,1);
	le2[6] = new CambioSemaforo(141,1);
	le2[7] = new CambioSemaforo(144,1);
	le2[8] = new CambioSemaforo(199,1);
	le2[9] = new CambioSemaforo(208,1);
	le2[10] = new CambioSemaforo(269,1);
	le2[11] = new CambioSemaforo(270,1);
	le2[12] = new CambioSemaforo(285,0);
	le2[13] = new CambioSemaforo(291,0);
	le2[14] = new CambioSemaforo(295,1);
	le2[15] = new CambioSemaforo(312,1);		

	while(control_simulador < tiempo_simulacion){
		if(le1[contador1]->tiempo < le2[contador2]->tiempo){			
			//llega automovil
			a[a_actual] = new automovil(a_actual,le1[contador1]->a->ruta);
			calle[a[a_actual]->ruta[0]].agregarAuto(a_actual);
			a_actual++;
			delta = le1[contador1]->tiempo - delta;
			control_simulador += delta;	
			delta = le1[contador1]->tiempo;			
			contador1++;		
		}else{
			//cambio de semaforo
			delta = le2[contador2]->tiempo - delta;
			control_simulador += delta;	
			delta = le2[contador2]->tiempo;
			contador2++;
		}
	}//end while
*/

}//end main

