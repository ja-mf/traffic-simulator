#include "include/cuadra.h"
#include <iostream>

Cuadra::Cuadra(int ID, int CAPACIDAD){
	id = ID; 				//clave unica del objeto
	capacidad = CAPACIDAD;
	idAutos = new int [capacidad];
	cantidad_autos = 0;
	veces_congestionada = 0;
	intentos = 0;
}

void Cuadra::setID(int ID){
	id = ID;
}

int Cuadra::getID(){
	return id;
}

bool Cuadra::agregarAuto(int AUTO) {
	std::cout << intentos << std::endl;	
	//this->intentos++;
	/*
	if(cantidad_autos < 20){
		idAutos[cantidad_autos] = AUTO;
		cantidad_autos++;
		return true;
	}
	else{	
		veces_congestionada++;
		return false;
	}
	
	*/
}

void Cuadra::sacarAuto(){
	int i;
	
	if(cantidad_autos > 0){
		cantidad_autos--;
		for(i = 0 ; i > cantidad_autos - 1 ; i++)
			idAutos[i] = idAutos[i+1];		
	}	
}
