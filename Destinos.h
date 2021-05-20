//Denisse Dominguez Bolaños aA01702603
#pragma once
#include <iostream>
using namespace std;

//la principal funcionalidad de esta clase es establecer los destinos disponibles en la aerolinea junto con sus respectivos datos de destino, tal y como clave de aeropuertos, distancias, etc. Al establecer esto la informacion de cada destino podra ser impresa

class Destinos{
  private:
    string destinos; 
    double distanciasEntreAeropuertos;
    string claveAeropuerto;
    string tiempoDeVuelo;
  public:
    Destinos();
    void nuestrosDestinos();
    void informacionDestinoT();
    void informacionDestinoM();
    void informacionDestinoS();
    void informacionDestinoH();
    void informacionDestinoNY();
    void informacionDestinoSJ();
    void informacionDestinoQ();
    void informacionDestinoBA();
    void informacionDestinoA();
    void informacionDestinoTK();
};