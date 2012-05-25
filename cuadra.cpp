#include "include/cuadra.h"

cuadra::cuadra(int ID, int CAPACIDAD){
	id = ID; 				//clave unica del objeto
	capacidad = CAPACIDAD;
	idAutos = new int [capacidad];
	cantidad_autos = 0;
	veces_congestionada = 0;
}

void cuadra::setID(int ID){
	id = ID;
}

int cuadra::getID(){
	return id;
}


bool cuadra::agregarAUTO(int AUTO){
	if(cantidad_autos < 20){
		idAutos[cantidad_autos] = AUTO;
		cantidad_autos++;
		return true;
	}
	else{	
		veces_congestionada++;
		return false;
	}
}

void cuadra::sacarAUTO(){
	int aux;
	int i;
	
	if(cantidad_autos > 0){
		cantidad_autos--;
		for(i = 0 ; i > cantidad_autos - 1 ; i++)
			idAutos[i] = idAutos[i+1];		
	}	
}