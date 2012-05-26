#ifndef EVENTO_H
#define EVENTO_H

#include "cuadra.h"

// clase padre
class Evento {
	public:
		int tiempo;
		Evento();
		~Evento();
		int get_tiempo();
};


class LlegadaAuto: public Evento {
	public:
		LlegadaAuto(int, Cuadra *);
		Automovil * a;
};

class CambioSemaforo: public Evento {
	public:
		int id;
		CambioSemaforo(int, int);
		int getID();
};

#endif
