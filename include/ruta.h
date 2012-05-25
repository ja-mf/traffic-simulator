#ifndef RUTA_H
#define RUTA_H

#include "cuadra.h"

class ruta{
	
	public: 
		int id;
		int tamano;
		cuadra lista[];

		void setID(int ID);
		int getID();
		void setTAMANO(int TAM);
		int getTAMANO();
		void creacion(segmento lista[]);
		cuadra siguiente_seg(cuadra actual);
		int siguiente_segID(int actual);			
}

#endif
