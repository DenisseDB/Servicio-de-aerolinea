all: main.out

main.out: buscador.o destinos.o reservaciones.o vuelos.o main.o
	g++ *.o -o main.out

buscador.o: Buscador.h Buscador.cpp
	g++ Buscador.cpp -c
	
destinos.o: Destinos.h Destinos.cpp
	g++ Destinos.cpp -c
	
reservaciones.o: Reservaciones.h Reservaciones.cpp
	g++ Reservaciones.cpp -c
	
vuelos.o: Vuelos.h Vuelos.cpp
	g++ Vuelos.cpp -c

main.o: main.cpp
	g++ main.cpp -c 

clean:
	rm *.o main.out
