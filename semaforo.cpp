#include "include/semaforo.h"

Semaforo::Semaforo(int ID, bool Estado, Cuadra * h, Cuadra * v){
	id = ID;
	estado = Estado;
	horizontal = h;
	vertical = v;
}

void Semaforo::setID(int ID){
	id = ID;
}

int Semaforo::getID(){
	return id;
}

void Semaforo::setEstado(bool Estado){
	estado = Estado;
}

void Semaforo::cambiarEstado(){
	estado = estado? false:true;
	
}
bool Semaforo::getEstado(){
	return estado;
}
