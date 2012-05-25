#ifndef SEMAFORO_H
#define SEMAFORO_H

class Semaforo {
	public:	
		int id;
		bool estado;
	
		void setid(int);
		int getid();
		void setEstado(bool);
		void cambiarESTADO();
		bool getESTADO();
}

#endif
