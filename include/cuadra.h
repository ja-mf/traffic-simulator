#ifndef CUADRA_H
#define CUADRA_H

#include "automovil.h"

class cuadra{
	public:
		int id;	
		int capacidad;
		int ocupado;
		cuadra cua_proxima_horizontal;
		cuadra cua_proxima_vertical;
		automovil fila[20];
		semaforo sem_horizontal;
		semaforo sem_vertical;
		int veces_congestionada;

		void setID(int ID);
		int getID();
		int getCAPACIDAD();
		int getOCUPADO();
		void setPROXIMAS(cuadra horizontal,cuadra vertical);
		bool agregarAUTO(automovil AUTO);
		automovil sacarAUTO();
		void congestion();	
}
#endif
