#include "cuadra.h"

cuadra::cuadra(int ID,cuadra horizontal,cuadra vertical, semaforo shorizontal, semaforo svertical){
	id = ID;						//clave unica del objeto
	capacidad = 20;						//capacidad fija
	ocupado = 0;						//cuantos automoviles hay
	cua_proxima_horizontal = horizontal;			//proximo segmento horizontal
	cua_proxima_vertical = vertical;			//proximo segmento vertical
	fila[20] = {0};						//fila de automoviles
	sem_horizontal = shorizontal;				//semaforo para segmento horizontal
	sem_vertical = svertical;				//semaforo para segmento vertical
	veces_congestionada = 0;

}

void cuadra::setID(int ID){
	id = ID;
}

int cuadra::getID(){
	return id;
}

int cuadra::getCAPACIDAD(int CAPACIDAD){
	return capacidad;
}

int cuadra::getOCUPADO(){
	return ocupado;
}

void cuadra::setPROXIMAS(cuadra horizontal,cuadra vertical){
	cua_proxima_horizontal = horizontal;
	cua_proxima_vertical = vertical;
}

bool cuadra::agregarAUTO(automovil AUTO){
	if(ocupado<capacidad){
		fila[ocupado]=AUTO;
		ocupado++;
		return true;
	}
	else
		return false;
	
}

automovil cuadra::sacarAUTO(){
	automovil aux;
	int i;
	
	if(ocupado > 0){
		for(i = (ocupado - 1) ; i > 0 ; i++){
		aux=fila[i-1];
		fila[i-1] =fila[i];		
		}
		return aux;
	}
	else
		return null;	
}


void cuadra::congestion(){
	veces_congestionada++;
}





