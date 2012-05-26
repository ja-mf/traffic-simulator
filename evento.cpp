#include "include/main.h"
#include "include/cuadra.h"
#include "include/automovil.h"
#include "include/evento.h"

using namespace std;

Evento::Evento() {
}

Evento::~Evento() {
}

LlegadaAuto::LlegadaAuto(Cuadra * ruta) {
	int id_cuadra_origen;

	id_auto++;
	a = new Automovil(id_auto, ruta);
	
	id_cuadra_origen = ruta[0].id;

	calle[id_cuadra_origen]::agregarAuto(id_auto);
}

CambioSemaforo::CambioSemaforo(int id) {
}

