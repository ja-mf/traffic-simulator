#include "automovil.h"

automovil::automovil(int ID, cuadra ORIGEN,cuadra DESTINO, ruta CAMINO){
	id = ID;
	origen = ORIGEN;
	destino = DESTINO;
	camino = CAMINO;
}

void automovil::setID(int ID){
	id = ID;
}

int automovil::getID(){
	return id;
}

void automovil::setORIGEN(segmento ORIGEN){
	origen = ORIGEN;
}

cuadra automovil::getORIGEN(){
	return origen;
}

int automovil::getORIGENID(){
	//return origen.id;
	return origen.getID();
}

void setDESTINO(cuadra DESTINO){
	destino = DESTINO;
}

cuadra getDESTINO(){
	return destino;
}

int getDESTINOID(){
	//return destino.id;
	return destino.getID();
}
