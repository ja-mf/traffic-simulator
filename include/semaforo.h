#ifndef SEMAFORO_H
#define SEMAFORO_H

#include "cuadra.h"

class Semaforo {
	public:	
		int id;
		bool estado;
		Cuadra * horizontal;
		Cuadra * vertical;
	
		void setID(int);
		int getID();
		void setEstado(bool);
		void cambiarEstado();
		bool getEstado();

		Semaforo(int, bool, Cuadra *, Cuadra *);
};

#endif
