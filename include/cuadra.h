#ifndef CUADRA_H
#define CUADRA_H

#include "automovil.h"
#include "semaforo.h"

class Cuadra {
	public:
		int id;	
		int * idAutos;
		int capacidad;				//20 para las que se pueden congestionar
							//1000 para las iniciales
		Semaforo * s;
		
		int veces_congestionada;

		void setid(int);
		int getid();
		int getAutos();

		

		void setPROXIMAS(Cuadra *, Cuadra *);

		bool agregarAuto();
		bool sacarAuto();
		
		void congestion();	
}
#endif