#ifndef CUADRA_H
#define CUADRA_H

class Cuadra {
	public:
		int id;	
		int * idAutos;
		int capacidad;				//20 para las que se pueden congestionar
		int cantidad_autos;					//1000 para las iniciales
		
		int veces_congestionada;
		int intentos;
	
		void setID(int);
		int getID();

		bool agregarAuto(int);
		void sacarAuto();
		
		Cuadra(int, int);
};
#endif
