#include "ruta.h"

ruta::ruta(int ID, int tam){
	id = ID;
	tamano = tam;
	lista[tamano] = {0};
}

void ruta::setID(int ID){
	id = ID;
}

int ruta::getID(){
	return id;
}

void ruta::setTAMANO(int TAM){
	tamano = TAM;
}

int ruta::getTAMANO(){
	return tamano;
}

void ruta::creacion(segmento LISTA[]){
	lista = LISTA;
}

cuadra ruta::siguiente_seg(segmento actual){
	int iactual = actual.getID();
	int i;	
	for(i = 0; i < tamano; i++)
		if(lista[i].getID() == iactual)
			return lista[i+1];
	return null; 
}

int ruta::siguiente_segID(int actual){
	int i;
	for(i = 0; i < tamano; i++)
		if(lista[i].getID() == actual)
			return lista[i+1].getID();
	return -1;d
}
	
