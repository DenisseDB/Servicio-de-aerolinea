//Denisse Dominguez Bolaños aA01702603
#include <iostream>
//Ambas clases utilizadas en el codigo se mandan llamar a travez de sus respectivos #include
#include "Buscador.h"
#include "Vuelos.h"
using namespace std;

//En este espacio se desarollan los metodos y constructores que se establecieron en la clase Buscador

//variable utilizada para guaradar la respuesta del usuario para la repeticion o salida del unico metodo de esta clase
string respuesta;

//constructor sin parametros. -> atributo destinoVuelo: despues del signo de igual se pone la clase Vuelos ya que sus atributos son de tipo Vuelos
Buscador :: Buscador(){
  indiceDestino = 0;
  destinoVuelo = Vuelos();
}

//Metodo utilizado para buscar los vuelos de un destino, la clave de cada vuelo, tiempo se salida, asientos disponibles, etc de cada destino, esto se ejecuta dependiendo el numero de destino a buscar introducido por el usuario, para establecer sobre que condiciones se imprime que vuelo, se hizo uso de condicionales. Se retorna los vuelos del numero de destino introducido por el usuario
void Buscador :: buscadorConDestino(){
  cout <<"\n Destino a consultar vuelos: ";
  cin >> indiceDestino;
  if (indiceDestino == 1){
    destinoVuelo.imprimirVuelosT(); //con el atributo destinoVuelo se "entra" a la clase vuelo y se imprime el metodo que contenga los vuelos de cada destino por separado.
  }
  else if (indiceDestino == 2){
    destinoVuelo.imprimirVuelosM();
  }
  else if (indiceDestino == 3){
    destinoVuelo.imprimirVuelosS();
  }
  else if (indiceDestino == 4){
    destinoVuelo.imprimirVuelosH();
  }
  else if (indiceDestino == 5){
    destinoVuelo.imprimirVuelosNY();
  }
  else if (indiceDestino == 6){
    destinoVuelo.imprimirVuelosSJ();
  }
  else if (indiceDestino == 7){
    destinoVuelo.imprimirVuelosQ();
  }
  else if (indiceDestino == 8){
    destinoVuelo.imprimirVuelosBA();
  }
  else if (indiceDestino == 9){
    destinoVuelo.imprimirVuelosA();
  }
  else if (indiceDestino == 10){
    destinoVuelo.imprimirVuelosTK();
  }
  else{
    cout << "OPCION INVALIDA, INTENTE DE NUEVO"<< endl;
    buscadorConDestino(); //en caso de no poner un numero del 1 al 10 se imprime el mensaje establecido y regresa al usuario al inicio de esta clase
  }
  cout << "\n¿Gustas consultar los vuelos de otro destino? ";
  cin >> respuesta; //es aqui donde la variable respuesta establecida hace presencia
  if (respuesta == "SI" || respuesta == "si" || respuesta == "Si"){
    buscadorConDestino(); //si la respuesta del usuario es alguna de las opciones establecidas, se repite esta clase, evitando que el usuario regrese al menu despues de buscar 1 vuelo y pueda buscar mas vuelos sin necesidad de tanto desplazamiento
  }
}