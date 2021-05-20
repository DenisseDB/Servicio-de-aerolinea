//Denisse Dominguez Bolaños aA01702603
#pragma once
#include <iostream>

//el proposito de esta clase es generar tanto los 50 vuelos como los datos reelevantes de cada vuelo, ambos fueron generados de manera aleatoria.

//En esta clase vemos presencia de atributo la inicializacion de un arreglo el cual ayuda a saber cuantos asientos disponibles hay en cada vuelo, esto es utilizado tanto en la clase "Buscador" y en la clase "Reservaciones", para poder hacer uso de los datos detras de este arreglo fue necesario la implementacion de un get. Cabe mencionar que en esta clase vemos presencia de una situacion extraña con respecto al atributo, ya que al mandar llamar esta clase en el menu (opcion 2) podemos ver que los datos impresos son correctos de acuerdo a los limites de los aleatorios, sin embargo, al mandar llamar la clase de impresion de cada uno de los destinos en otras clases (en la clase "Buscador" y en la clase "Reservaciones"), se puede notar que los asientos disponibles cambian drasticamente sin respetar los limites de sus aleatorios, esto fue revisado y he notado que no hay error alguno, por lo tanto desconozco esta situacion.

class Vuelos{
  private:
    int capacidadDeAsientos[50];
  public:
    Vuelos();
    void generarVuelos();
    void generarCapacidadPasajeros();
    int getCapacidad(int);
    void generarAvionDeEmbarque();
    void generarTiempoSalida();
    void imprimirVuelosT();
    void imprimirVuelosM();
    void imprimirVuelosS();
    void imprimirVuelosH();
    void imprimirVuelosNY();
    void imprimirVuelosSJ();
    void imprimirVuelosBA();
    void imprimirVuelosQ();
    void imprimirVuelosA();
    void imprimirVuelosTK();
};
