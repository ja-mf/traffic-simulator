#include "include/automovil.h"

Automovil::Automovil(int ID, int * RUTA){
	id = ID;
	ruta = RUTA;			//revisar como ingresar ruta al objeto
}

void Automovil::setID(int ID){
	id = ID;
}

int Automovil::getID(){
	return id;
}

