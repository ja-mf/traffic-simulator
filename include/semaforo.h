#include "iostream"

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
