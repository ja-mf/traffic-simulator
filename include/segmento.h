#include <iostream>
#include <automovil.h>

class segmento{
	public:
		int id;	
		int capacidad;
		int ocupado;
		segmento proxima_horizontal;
		segmento proxima_vertical;
		automovil fila[20];

		void setID(int ID);
		int getID();
		int getCAPACIDAD();
		int getOCUPADO();
		void setPROXIMAS(segmento horizontal,segmento vertical);
		bool agregarAUTO(automovil AUTO);
		automovil sacarAUTO();	
}

