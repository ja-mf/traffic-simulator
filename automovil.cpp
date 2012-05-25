#include "include/automovil.h"

automovil::automovil(int ID, Cuadra * RUTA){
	id = ID;
	ruta = RUTA;			//revisar como ingresar ruta al objeto
}

void automovil::setID(int ID){
	id = ID;
}

int automovil::getID(){
	return id;
}

