#include "include/main.h"
#include "include/cuadra.h"
#include "include/automovil.h"
#include "include/evento.h"

using namespace std;

Evento::Evento() {
}

Evento::~Evento() {
}

int Evento::get_tiempo(){
	return tiempo;
}

int Evento::get_tipo(){
	return tipo;
}

LlegadaAuto::LlegadaAuto(int t, int * ruta) {
	int id_cuadra_origen;
	tiempo = t;
	tipo = 0;
	id_auto++;
	a = new Automovil(id_auto, ruta);
	
	id_cuadra_origen = ruta[0].id;

	calle[id_cuadra_origen]::agregarAuto(id_auto);
}

CambioSemaforo::CambioSemaforo(int t, int id) {
	tiempo = t;
	tipo = 1;
	id = id;
}

int CambioSemaforo::getID(){
	return id;
}
