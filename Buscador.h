//Denisse Dominguez Bolaños aA01702603
#pragma once
#include "Vuelos.h"
#include "Destinos.h"

//clase Buscador, sus atributos son privados (encapsulamiento), mientras que los metodos son publicos, en esta clase se hace uso de la clase Vuelos, por lo tanto, se manda llamar a travez de #include"PVuelos.h",el buscadorConDestino no tiene parametros dado que dentro de estos metodos se estara definiendo que destino imprimir

class Buscador{
  private:
    int indiceDestino; //numero de destino a buscar sus vuelos
    Vuelos destinoVuelo; //hacer uso de la clase vuelos ya que esta contiene los vuelos de cada numero de destino
  public:
    Buscador();
    void buscadorConDestino(); //mostrara los vuelos dependiendo del indiceDestino introducido
};