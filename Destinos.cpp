//Denisse Dominguez Bolaños aA01702603
#include <iostream>
#include "Destinos.h" //La clase se esta mandado llamar por medio de #include "Punto.h"
using namespace std;

//En este espacio se desarollan los metodos y constructores que se establecieron en la clase Destinos. 

//constructor sin parametros
Destinos :: Destinos(){ 
  destinos = "Mexico";
  distanciasEntreAeropuertos = 0.0;
  claveAeropuerto = "MEX";
  tiempoDeVuelo = "0 horas 0 minutos";
}

//Se establece e imprime los destinos que la aerolinea tiene disponibles, son 10 destinos internacionales
void Destinos :: nuestrosDestinos(){
  cout << "\nEstos son los 10 destinos que tenemos disponibles: " << endl;
  string destino1 = "1. Toronto, CA";
  cout << destino1 << endl;
  string destino2 ="2. Montreal, CA";
  cout << destino2 << endl;
  string destino3 = "3. Sydney, AUS";
  cout << destino3 << endl;
  string destino4 = "4. Helsinki, GER";
  cout << destino4 << endl;
  string destino5 = "5. New York, USA";
  cout << destino5 << endl;
  string destino6 = "6. San Juan, PR";
  cout << destino6 << endl;
  string destino7 = "7. Quito, ECU";
  cout << destino7 << endl;
  string destino8 = "8. Buenos Aires, ARG";
  cout << destino8 << endl;
  string destino9 = "9. Auckland, NZE";
  cout << destino9 << endl;
  string destino10  = "10. Tokio, JPN";
  cout << destino10 << endl;
}

//Al haber establecido los destinos, posteriormente por cada destino se etablece e imprime los datos importantes seleccionados de cada uno de ellos, tal y como distancia enre aeropuertos, tiempo de vuelo, claves, etc. Cabe remarcar que los vuelos salen de la cuidad de Mexico
void Destinos :: informacionDestinoT(){
  double distanciasEntreAeropuerto = 4078.2;
  string tiempoDeVuelo = "4 horas 25 minutos";
  string claveAeropuerto = "YYZ" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto <<"km"<< endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoM(){
  double distanciasEntreAeropuerto = 4606.0;
  string tiempoDeVuelo = "5 horas 5 minutos";
  string claveAeropuerto = "YUL" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoS(){
  double distanciasEntreAeropuerto = 12975.0;
  string tiempoDeVuelo = "22 horas 30 minutos";
  string claveAeropuerto = "SYD" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoH(){
  double distanciasEntreAeropuerto = 9824.0;
  string tiempoDeVuelo = "16 horas 0 minutos";
  string claveAeropuerto = "HEL" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km " << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoNY(){
  double distanciasEntreAeropuerto = 4157.1;
  string tiempoDeVuelo = "4 horas 50 minutos";
  string claveAeropuerto = "JFK" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoSJ(){
  double distanciasEntreAeropuerto = 3472.0;
  string tiempoDeVuelo = "4 horas 18 minutos";
  string claveAeropuerto = "SJU" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo << endl;
}

void Destinos :: informacionDestinoQ(){
  double distanciasEntreAeropuerto = 3133.0;
  string tiempoDeVuelo = "4 horas 35 minutos";
  string claveAeropuerto = "UIO" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoBA(){
  double distanciasEntreAeropuerto = 7392.0;
  string tiempoDeVuelo = "4 horas 25 minutos";
  string claveAeropuerto = "EZE" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoA(){
  double distanciasEntreAeropuerto = 10958.0;
  string tiempoDeVuelo = "4 horas 25 minutos";
  string claveAeropuerto = "AKL" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}

void Destinos :: informacionDestinoTK(){
  double distanciasEntreAeropuerto = 11305.0;
  string tiempoDeVuelo = "4 horas 25 minutos";
  string claveAeropuerto = "HND" ;
  cout << "Distancia entre aeropuertos: " << distanciasEntreAeropuerto << "km" << endl;
  cout << "Tiempo de viaje: " << tiempoDeVuelo<< endl;
}