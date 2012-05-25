#include "iostream"
#include "cuadra.h"
#include "ruta.h"

class automovil{
	
	public: 
		int id;
		cuadra origen;
		cuadra destino;
		ruta camino;

		void setID(int ID);
		int getID();		
		void setORIGEN(segmento ORIGEN);
		cuadra getORIGEN();
		int getORIGENID();
		void setDESTINO(segmento DESTINO);	
		cuadra getDESTINO();
		int getDESTINOID();
}
