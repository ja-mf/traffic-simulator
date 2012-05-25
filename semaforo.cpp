#include "include/semaforo.h"

semaforo::semaforo(int ID, bool ESTADO, Cuadra * h, Cuadra * v){
	id = ID;
	estado = ESTADO;
	horizontal = h;
	vertical = v;
}

void semaforo::setID(int ID){
	id = ID;
}

int semaforo::getID(){
	return id;
}

void semaforo::setESTADO(bool ESTADO){
	estado = ESTADO;
}

void semaforo::cambiarESTADO(){
	estado = estado? false:true;
	
}
bool semaforo::getESTADO(){
	return estado;
}
