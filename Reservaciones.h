//Denisse Dominguez Bolaños aA01702603
#pragma once
#include <iostream>
#include "Vuelos.h"
#include "Destinos.h"

//la principal funcionalidad de esta clase es realizar reservaciones hacia un solo destino o hacia ditintos destinos, para esto fue necesario incluir clase "Vuelos" y "Destinos" ya que estas contienen datos, acciones e informacion relevante para la ejecucion de los metodos de esta clase, tal y como asientos disponibles, datos de los destinos, etc.

class Reservaciones{
  private:
    string nombrePasajero;
    int edad;
    Vuelos vueloaReservar;
    Destinos destinoaViajar;
  public:
    Reservaciones();
    void datosPasajeros();
    void asientosDisp();
    void precioReserva();
    void datosImpresion();
    void unDestinoDeViaje();
    void variosDestinoDeViaje();
    void imprimirDatosUnVuelo();
};