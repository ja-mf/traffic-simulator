#ifndef EVENTO_H
#define EVENTO_H

#include "cuadra.h"

// clase padre
class Evento {
	public:
		Evento();
		~Evento();
};


class LlegadaAuto: public Evento {
	public:
		LlegadaAuto(Cuadra *);
		Automovil * a;
};

class CambioSemaforo: public Evento {
	public:
		CambioSemaforo(int);
};

#endif
