#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "cuadra.h"

class Automovil {
	
	public: 
		int id;
		int * ruta;

		void setID(int ID);
		int getID();		

		Automovil(int, int *);

};

#endif
