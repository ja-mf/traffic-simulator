#include <iostream>
#include <stdlib.h>
#include "include/main.h"
#define length(a) ( sizeof ( a ) / sizeof ( *a ) )

int main(int argc,const char* argv[]){
	//declaracion de variables
	int tiempo_simulacion = atoi(argv[1]);	//tiempo a simular	
	int delta; 				//capturar tiempo, y diferencia	
	int i, j, tope, d;
	int control_simulador;
	LlegadaAuto * le1[21];
	CambioSemaforo * le2[16];
	Automovil * a[100];
	Cuadra * calle[25];
	Semaforo * sem[9];
	int id_sem, id_calle, id_auto;

	int contador1, contador2;
	int a_actual = 0;

	int * ruta1 = new int[4];
	int * ruta2 = new int[3];

	//rendimiento
	int total_intentos = 0;
	int total_congestion = 0;
	float prob_congestion;

	//inicializacion de variables
	for(i = 0; i < 12; i++)
		calle[i] = new Cuadra(i,1000);
	for(i = 12; i < 24; i++)
		calle[i] = new Cuadra(i,20);
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
	ruta1[0] = 3;	ruta1[1] = 12;	ruta1[2] = 13;	ruta1[3] = 4;
	ruta2[0] = 1;	ruta2[1] = 13;	ruta2[2] = 2;

//	cout <<	calle[0]->intentos << endl;

	le1[0] = new LlegadaAuto(1, ruta1);
	le1[1] = new LlegadaAuto(3, ruta1);
	le1[2] = new LlegadaAuto(6, ruta1);
	le1[3] = new LlegadaAuto(14, ruta1);
	le1[4] = new LlegadaAuto(21, ruta1);
	le1[5] = new LlegadaAuto(36, ruta1);
	le1[6] = new LlegadaAuto(46, ruta1);
	le1[7] = new LlegadaAuto(51, ruta1);
	le1[8] = new LlegadaAuto(59, ruta1);
	le1[9] = new LlegadaAuto(60, ruta1);
	le1[10] = new LlegadaAuto(150, ruta2);
	le1[11] = new LlegadaAuto(163, ruta2);
	le1[12] = new LlegadaAuto(171, ruta2);
	le1[13] = new LlegadaAuto(174, ruta2);
	le1[14] = new LlegadaAuto(187, ruta2);
	le1[15] = new LlegadaAuto(213, ruta2);
	le1[16] = new LlegadaAuto(235, ruta2);
	le1[17] = new LlegadaAuto(236, ruta2);
	le1[18] = new LlegadaAuto(245, ruta2);
	le1[19] = new LlegadaAuto(255, ruta2);
	le1[20] = new LlegadaAuto(274, ruta1);
	
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

	cout << "Lista de eventos creada" << endl;

	// inicio de la simulacion
	while(control_simulador < tiempo_simulacion){
		if(le1[contador1]->tiempo < le2[contador2]->tiempo){			
			//llega automovil
			cout << "t: " << control_simulador << " llego un auto" << endl;
			a[a_actual] = new Automovil(a_actual, le1[contador1]->ruta);
			calle[a[a_actual]->ruta[0]]->agregarAuto(a_actual);
			
			a_actual++;

			delta = le1[contador1]->tiempo - delta;
			control_simulador += delta;	
			delta = le1[contador1]->tiempo;			
			contador1++;		
		} else {
			//cambio de semaforo
			cout << "t: " << control_simulador << " cambio el semaforo" << endl;
			id_sem = le2[contador2]->id;
			sem[id_sem]->cambiarEstado();        //true horizontal, false vertical
			if(sem[id_sem]->getEstado()) {
				// horizontal
				for(i = 0; i < 5; i++) {
					id_calle = sem[id_sem]->horizontal->id;
					id_auto = calle[id_calle]->idAutos[0];
					tope = length( a[id_auto]->ruta );
					for(j = 0 ; j < tope ; j++)
						if(id_calle == a[id_auto]->ruta[j]) break;

					d = a[id_auto]->ruta[tope-1];
					if( (a[id_auto]->ruta[j+1] == a[id_auto]->ruta[tope-1]) && (calle[d]->cantidad_autos < 20))
						calle[id_calle]->sacarAuto();
					else if (calle[a[id_auto]->ruta[j+1]]->agregarAuto(id_auto))
						calle[id_calle]->sacarAuto(); 
				}
			} else {
				for(i = 0 ; i < 5 ; i++) {
					id_calle = sem[id_sem]->vertical->id;
					id_auto = calle[id_calle]->idAutos[0];
					tope = length( a[id_auto]->ruta );
					for(j = 0 ; j < tope ; j++)
						if(id_calle == a[id_auto]->ruta[j]) break;
					d = a[id_auto]->ruta[tope-1];
					if ( (a[id_auto]->ruta[j+1] == a[id_auto]->ruta[tope-1]) && (calle[d]->cantidad_autos < 20))
						calle[id_calle]->sacarAuto();
					else if (calle[a[id_auto]->ruta[j+1]]->agregarAuto(id_auto))
						calle[id_calle]->sacarAuto();
				}
				delta = le2[contador2]->tiempo - delta;
				control_simulador += delta;
				delta = le2[contador2]->tiempo;
				contador2++;
			}
		}
		if (contador1 == 20 || contador2 == 15)
			break;
	}//end while


	// rendimiento
	for(i = 0; i < 24; i++) {
		total_intentos += calle[i]->intentos;
		total_congestion += calle[i]->veces_congestionada;
	}
	
	prob_congestion = (float) total_congestion/total_intentos;
	
	cout << "total de intentos = " << total_intentos << endl;
	cout << "total de veces en congestion = " << total_congestion << endl;
	cout << "probabilidad de congestion = " << prob_congestion << endl;
	

}//end main

