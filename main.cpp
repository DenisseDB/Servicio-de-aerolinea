/*
Nombre: Denisse Dominguez Bolaños
Matricula: A01702603
Fecha de creación: 28.01.2021
Fecha de ultima modificacion: 04.02.2021
El objetivo de este programa es realizar consultas y reservaciones de los vuelos de los destinos que la aerolinea ofrece, este programa esta dirigido a ser usado por empleados de mostrador, quienes ayudaran a los pasajeros a buscar sus vuelos, brindarles informacion de en cuanto tiempo sale su vuelos, de igual manera tendran posibilidad de realizar reservaciones , entre otras acciones.
//se esta ejecutando como si fueran las 8 de la noche y un cliente se acerca al mostrador
*/
#include <iostream>
#include "Destinos.h"
#include "Vuelos.h"
#include "Buscador.h"
#include "Reservaciones.h"
//manda llamar las clases a utilizar
using namespace std;

//funcion para iniciar sesion de los vendedores de mostrados del aeropuerto, la clave de acceso es una clave ya establecida y es la misma para todos ya que es la clave del acceso al portal de datos por mostrador.
void trabajador(){
  string nombre;
  string claveAccesoGeneral = "FF-1812"; //clave establecia
  string claveIntroducida;
  cout << "\n✈ Usuario: ";
  cin >> nombre;
  cout << "✈ Clave de Acceso: ";
  cin >> claveIntroducida;
  if (claveIntroducida != claveAccesoGeneral){
    cout << "Acceso DENEGADO" << endl;
    trabajador();
  }
  else{
    cout << "inicando sesion..." << endl;
    cout << "\nBuen Día " << nombre << " recuerde ser coordial y amable con los clientes" << endl;
  }
}

//MAIN: primero inicializamos los objetos de cada clase y se realiza la ejecuccion de la funcion trabajador, al acceder al "portal de FlyFree" los empleados tendran acceso a todas las funciones de las clases detras de cada opcion del menu.
int main() {
  Vuelos fly;
  fly.generarVuelos();
  fly.generarCapacidadPasajeros();
  fly.generarAvionDeEmbarque();
  fly.generarTiempoSalida();
  Destinos places;
  Buscador search;
  Reservaciones reserva;
  cout << "\nINICIAR SESION FLYFREE" << endl;
  trabajador();
  int opcion;
  cout << "\nBienvenido a FlyFree." << endl;
  cout << "A continuacion se desplegara nuestro menu de acciones" << endl;
  do{
    cout << "\nMenu" << endl;
    cout << "1. Consultar Destinos" << endl;
    cout << "2. Vuelos Disponibles" << endl;
    cout << "3. Buscar Vuelo" << endl;
    cout << "4. Reservaciones" << endl;
    cout << "5. Cerrar Sesion " << endl;
    cout << "6. Cerrar Sistema" << endl;
    cout << "Numero a consultar: ";
    cin >> opcion;
    if (opcion == 1){
      places.nuestrosDestinos();
    }
    else if (opcion == 2){
      fly.imprimirVuelosT();
      fly.imprimirVuelosM();
      fly.imprimirVuelosS();
      fly.imprimirVuelosH();
      fly.imprimirVuelosNY();
      fly.imprimirVuelosSJ();
      fly.imprimirVuelosQ();
      fly.imprimirVuelosBA();
      fly.imprimirVuelosA();
      fly.imprimirVuelosTK();
    }
    else if (opcion == 3){
      places.nuestrosDestinos();
      search.buscadorConDestino();
    }
    else if(opcion == 4){
      string respuesta1;
      string confirmacion;
      reserva.datosPasajeros();
      //al acreditar los datos de los pasajeros pasamos a la condicion de un destino o varios destinos
      cout << "¿Todos viajaran al mismo destino? ";
      cin >> respuesta1;
      if (respuesta1 == "SI" || respuesta1 == "si"){
        reserva.unDestinoDeViaje(); //si solo es un destino se ejecuta la funcion establecia para 1 destino para todos los pasajeros
        cout <<"\n¿Confirma reserva? "; //posteriormente se debe confirmar la reserva para asi poder imprimir el pase de abordar y la infromacion de la reserva y vuelo
        cin >> confirmacion;
        if(confirmacion == "SI" || confirmacion == "si"){
          cout << "\n ☑ Reserva CONFIRMADA, imprimiendo pase de abordar..." << endl;
          reserva.imprimirDatosUnVuelo();
        }
        else{
          cout << "\nReserva CANCELADA" << endl; //en caso de negar la reserva, esta es cancelada
        }
      }
      else if (respuesta1 == "NO" ||respuesta1 == "no"){
        reserva.variosDestinoDeViaje(); //si no viajan a un solo destino se ejecuta la funcion establecida para esta situacion, dentro de esta ya se encuentra las confirmaciones e impresiones necesarias
      }
      else{
        cout << "\nReserva CANCELADA" << endl;
      }
    }
    
    else if (opcion == 5){

      cout << "\nGracias hacer a nuestros pasajeros vivir una gran experiencia en el aire con FlyFree" << endl;
      cout << "Nos vemos" << endl;
      cout << "Finalizando sesion..." << endl;
      cout << "sesion finalizada" << endl;
      main(); //al cerrar sesion se regresa al main para que otro empleado pueda ingresar al sistema y realizar sus propios movimientos y ventas
    }
    else if(opcion == 6){
      cout << "\nFinalizando sesion..." << endl;
      cout << "sesion finalizada" << endl;
      cout << "Cerrando sistema..." << endl;
      cout << "sistema cerrado";
      return 0;
    }
    else{
      cout << "Opcion invalida, intente de nuevo" << endl;
    }
  }
  while (opcion != 5);
  return 0;
}
