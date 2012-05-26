#ifndef EVENTO_H
#define EVENTO_H

#include "cuadra.h"


/*class Evento {
	public:
		int tiempo;
		int tipo;
		Evento();
		~Evento();
		int get_tiempo();
		int get_tipo();			//0 = automovil
						//1 = semaforo
};*/


class LlegadaAuto:{
	public:
		int tiempo;
		int tipo;
		LlegadaAuto(int, int *);
		Automovil * a;
};

class CambioSemaforo:{
	public:
		int tiempo;
		int tipo;
		int id;
		CambioSemaforo(int, int);
		int getID();
};

#endif
