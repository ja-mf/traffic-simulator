#include <iostream>
#include "include/main.h"
#include "include/cuadra.h"
#include "include/automovil.h"
#include "include/evento.h"

using namespace std;

/*Evento::Evento() {
}

Evento::~Evento() {
}

int Evento::get_tiempo(){
	return tiempo;
}

int Evento::get_tipo(){
	return tipo;
}*/

LlegadaAuto::LlegadaAuto(int t, int * r) {
	tiempo = t;
	tipo = 0;
	ruta = r;
//	a = new Automovil(id_auto, ruta);
//	cout << id_cuadra_origen << endl; 
//	calle[id_cuadra_origen]->agregarAuto(id_auto);
//	cout <<	calle[0]->intentos << endl;
}

CambioSemaforo::CambioSemaforo(int t, int id) {
	tiempo = t;
	tipo = 1;
	id = id;
}

int CambioSemaforo::getID(){
	return id;
}
