//Denisse Dominguez Bolaños aA01702603
#include <iostream>
#include "Vuelos.h"
#include "Reservaciones.h"
using namespace std;

//inicializacion de arreglos necesarios en esta clase.
const float N = 50;
int vuelosAleatorios[50];
string avionAbordar[50];
int tiempoSalida[50];

//los 20 aviones que nuestra aerolinea tiene para los vuelos
string nuestrosAviones[] = {"Airbus A330-200  913km/h ", "Airbus A330-300  913km/h", "Airbus A340-600  913km/h", "Airbus A321 876km/h", "Airbus A320  840km/h", "Airbus A320 NEO  840km/h", "Airbus A319  871km/h", "Airbus A340-600  913km/h", "Airbus A350  945km/h","Airbus A330-200   913km/h", "Airbus A330-300  913km/h", "Airbus A340-600  913km/h", "Airbus A321  876km/h", "Airbus A320  840km/h", "Airbus A320 NEO  840km/h", "Airbus A319  871km/h", "Airbus A340-600  913km/h", "Airbus A350  945km/h", "Airbus A330-200  913km/h", "Airbus A330-300  913km/h"}; //nuestros aviones corresponden a los aviones de la aerolinea Iberia

//constructor sin parametros
Vuelos :: Vuelos(){
   capacidadDeAsientos[1] = 9;
}

//metodo para generar 50 vuelos aleatorios
void Vuelos :: generarVuelos(){ 
  for(int i=0; i<N; i++){ 
    vuelosAleatorios[i]= 100+rand()%(1000+1-100); 
  }
}

//metodo para generar 50 capacidad de pasajeros aleatoriamente, es decir, asientos Disponibles
void Vuelos :: generarCapacidadPasajeros(){
  for (int i=0; i<N; i++){
    capacidadDeAsientos[i] = 3 + rand() %(60+1-3);
  }
}

//metodo para obtener la capacidad de asientos disponibles dependiendo la posicion de los vuelos
int Vuelos :: getCapacidad(int cp){
  return capacidadDeAsientos[cp];
}

//metodo para establecer aleatoriemnte los aviones en los cuales se realizaran los vuelos
void Vuelos :: generarAvionDeEmbarque(){
  for(int i = 0; i<N; i++){
    avionAbordar[i] = nuestrosAviones[rand()%20];
  }
}

//metodo para generar aleatoriamente en cuantas horas sale cada vuelo
void Vuelos :: generarTiempoSalida(){
  for(int i=0; i<N; i++){
    tiempoSalida[i] = 3 + rand()%(15+1-3);
  }
}

//en los 10 metodos siguientes se hace la impresion de los datos de cada vuelo, es decir, clave de vuelo, asientos disponibles, aviones, etc. Estos datos se establcieron de manera aleatoria y dependiendo de la posicion de cada dato se acomodo en los 10 destinos disponibles, estableciendo 5 vuelos por destino.
void Vuelos :: imprimirVuelosT(){
  cout << "\n1. Vuelos con destino TORONTO, CA: " << endl;
  for (int i=0; i<5 ; i++){
    cout << "Clave de vuelo: " << "T-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosM(){
  cout << "\n2. Vuelos con destino MONTREAL, CA: " << endl;
  for (int i=5; i<10 ; i++){
    cout << "Clave de vuelo: " << "M-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosS(){
  cout << "\n3.Vuelos con destino SYDENY, AUS: " << endl;
  for (int i=10; i<15 ; i++){
    cout << "Clave de vuelo: " << "S-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosH(){
  cout << "\n4. Vuelos con destino HELSINKI, GER " << endl;
  for (int i=15; i<20 ; i++){
    cout <<  "Clave de vuelo: " << "H-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosNY(){
  cout << "\n5.Vuelos con destino NEW YORK, USA " << endl;
  for (int i=20; i<25 ; i++){
    cout <<  "Clave de vuelo: "<< "NY-" << vuelosAleatorios[i]<< "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosSJ(){
  cout << "\n6.Vuelos con destino SAN JUAN, PR " << endl;
  for (int i=25; i<30 ; i++){
    cout << "Clave de vuelo: " << "SJ-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] <<  "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosQ(){
  cout << "\n7.Vuelos con destino QUITO, ECU " << endl;
  for (int i=30; i<35 ; i++){
    cout << "Clave de vuelo: " << "Q-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosBA(){
  cout << "\n8.Vuelos con destino BUENOS AIRES, ARG: " << endl;
  for (int i=35; i<40 ; i++){
    cout << "Clave de vuelo: " << "BA-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosA(){
  cout << "\n9.Vuelos con destino AUCKLAND, NZE: " << endl;
  for (int i=40; i<45 ; i++){
    cout << "Clave de vuelo: " << "A-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i] << "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}

void Vuelos :: imprimirVuelosTK(){
  cout << "\n10.Vuelos con destino TOKIO, JPN " << endl;
  for (int i=45; i<50 ; i++){
    cout << "Clave de vuelo: " << "TK-" << vuelosAleatorios[i] << "   Asientos Disponibles: " << capacidadDeAsientos[i]<< "   Avion a Embarcar: " << avionAbordar[i] << "   EL VUELO SALE EN: " << tiempoSalida[i] << " HORAS" << endl;
  }
}
