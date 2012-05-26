all: traffic

traffic: cuadra.o automovil.o semaforo.o evento.o
		g++ -o traffic main.cpp cuadra.o automovil.o semaforo.o evento.o

cuadra.o: 
		g++ -c cuadra.cpp

automovil.o: cuadra.o
		g++ -c automovil.cpp

semaforo.o: cuadra.o
		g++ -c semaforo.cpp

evento.o: cuadra.o automovil.o semaforo.o
		g++ -c evento.cpp

clean: 
		rm *.o
