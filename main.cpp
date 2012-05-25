#include <iostream>
#include "automovil.h"
#include "cuadra.h"
#include "ruta.h"
#include "semaforo.h"

using namespace std;

int main(int argc,const char* argv[]){
	//declaracion de variables
	int i;
	cuadra calle[25];					
	semaforo sem[9];


	//inicializacion de variables
	for(i=0;i<12;i++)
		calle[i] = new cuadra(i,1000);
	for(i=12;i<24;i++)
		calle[i] = new cuadra(i,20);
	
	//constructor id , estado, horizontal, vertical
	//del 1 ,3,6,7,9,11 llega el trafico
	sem[0] = new sem(0,true,&calle[12],&calle[0]);
	sem[1] = new sem(1,true,&calle[13],&calle[15]);
	sem[2] = new sem(2,true,&calle[4],&calle[2]);
	sem[3] = new sem(3,false,&calle[5],&calle[14]);
	sem[4] = new sem(4,false,&calle[17],&calle[20]);
	sem[5] = new sem(5,false,&calle[18],&calle[16]);
	sem[6] = new sem(6,true,&calle[22],&calle[19]);
	sem[7] = new sem(7,true,&calle[23],&calle[10]);
	sem[8] = new sem(8,true,&calle[8],&calle[21]);
}
