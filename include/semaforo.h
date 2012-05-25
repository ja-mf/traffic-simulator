#ifndef SEMAFORO_H
#define SEMAFORO_H

class semaforo{
	public:	
		int id;
		bool estado;
	
		void setID(int ID);
		int getID();
		void setESTADO(bool ESTADO);
		void cambiarESTADO();
		bool getESTADO();
}

#endif
