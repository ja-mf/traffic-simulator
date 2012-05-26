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

LlegadaAuto::LlegadaAuto(int t, Cuadra * ruta) {
	int id_cuadra_origen;
	tiempo = t;
	id_auto++;
	a = new Automovil(id_auto, ruta);
	
	id_cuadra_origen = ruta[0].id;

	calle[id_cuadra_origen]::agregarAuto(id_auto);
}

CambioSemaforo::CambioSemaforo(int t, int id) {
	tiempo = t;
	id = id;
}

int CambioSemaforo::getID(){
	return id;
}
