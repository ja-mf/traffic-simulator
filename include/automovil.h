#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "cuadra.h"

class Automovil {
	
	public: 
		int id;
		Cuadra * ruta;

		void setID(int ID);
		int getID();		

		Automovil(int, Cuadra *);

};

#endif
