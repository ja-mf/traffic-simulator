all: traffic

traffic: cuadra.o automovil.o semaforo.o
		g++ -o traffic main.cpp cuadra.o automovil.o semaforo.o

cuadra.o: 
		g++ -c cuadra.cpp

automovil.o: cuadra.o
		g++ -c automovil.cpp

semaforo.o: cuadra.o
		g++ -c semaforo.cpp

clean: 
		rm *.o
