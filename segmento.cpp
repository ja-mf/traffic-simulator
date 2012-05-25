#include <segmento.h>

segmento::segmento(int ID, segmento horizontal, segmento vertical){
	id = ID;
	capacidad = 20;
	ocupado = 0;
	proxima_horizontal = horizontal;
	proxima_vertical = vertical;
	fila[20] = {0};

}

void segmento::setID(int ID){
	id = ID;
}

int segmento::getID(){
	return id;
}

int segmento::getCAPACIDAD(int CAPACIDAD){
	return capacidad;
}

int segmento::getOCUPADO(){
	return ocupado;
}

void segmento::setPROXIMAS(segmento horizontal,segmento vertical){
	proxima_horizontal = horizontal;
	proxima_vertical = vertical;
}

bool segmento::agregarAUTO(automovil AUTO){
	if(ocupado<capacidad){
		fila[ocupado]=AUTO;
		ocupado++;
		return true;
	}
	else
		return false;
	
}

automovil segmento::sacarAUTO(){
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








