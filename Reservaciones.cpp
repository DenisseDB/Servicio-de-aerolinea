//Denisse Dominguez Bolaños aA01702603
#include <iostream>
#include  "Destinos.h" //La clases utilizadas se esta mandan llamar por medio de #include
#include "Vuelos.h"
#include "Reservaciones.h"
using namespace std;

//En este espacio se desarollan los metodos y constructores que se establecieron en la clase Reservaciones 

//variables utilizadas a lo largo de la ejecuccion de esta clase
string confirmacion;
int cantidadPersonas;
string np2; //nombre pasajero 2
string np3; //nombre pasajero 3
int ep2; //edad pasajero 2
int ep3; //eddad pasajero 3
int numeroDestinoSeleccionado;
int numeroVueloSeleccionado;
int disponibilidadDeAsientos;
//costo de vuelos dependiendo destino
int precioT = 3432;
int precioM = 6753;
int precioS = 37361;
int precioH = 7651;
int precioNY = 8641;
int precioSJ = 2671;
int precioQ = 1981;
int precioBA = 4312;
int precioA = 16231;
int precioTK = 29124;
int precioFinal;
int r1,r2,r3;

//constructor sin parametros, 2 atributos son de tipo clases, es decir, una tipo Vuelos y otra Destinos
Reservaciones :: Reservaciones(){
  nombrePasajero = "DenisseDominguezBolaños";
  edad = 19;
  vueloaReservar = Vuelos();
  destinoaViajar = Destinos();
}

//en este metodo se realiza la introduccion de datos personas de los pasajeros, en este metodo encontramos un condicional if, el cual estabalece limites de edad para poder abordar/reservar un vuelo, esto fue establecido de acuerdo a las condicines del COVID-19, ajustandonos al protocolo de proteccion a la salud de los mas vulnerables
void Reservaciones :: datosPasajeros(){
  cout << "USUARIO = si desea salir o cancelar reserva, solo digite no cuando se pida confirmacion de reserva" << endl;
  cout << "\n¿A cuantas personas se reservara vuelo?: MAXIMO 3 PERSONAS:  ";
  cin >> cantidadPersonas; //variable que guardda la cantidad de pasajeros a reserar vuelos
  if (cantidadPersonas>=1 && cantidadPersonas<=3){
    cout << "\nInicio de Reserva, introduzca los datos solicitados de los pasajeros" << endl;
    if (cantidadPersonas == 1){
      cout << "Nombre del Pasajero: ";
      cin >> nombrePasajero;
      cout << "Edad: ";
      cin >> edad; 
      if (edad < 6 || edad > 70 ){
        cout << "Lo sentimos, algun pasajero/s no cumple con los requisitos de edad. Dadas las condciones del COVID-19 su reserva ha sido *DENEGADA*" << endl;
        datosPasajeros();   
      }
    } 
    else if(cantidadPersonas == 2){
      cout << "Nombre del Pasajero #1: ";
      cin >> nombrePasajero;
      cout << "Edad: ";
      cin >> edad;
      cout << "Nombre del Pasajero #2: ";
      cin >> np2;
      cout << "Edad: ";
      cin >> ep2;
      if (edad < 6 || edad > 70 || ep2 < 6 || ep2 >70){
        cout << "Lo sentimos, algun pasajero/s no cumple con los requisitos de edad. Dadas las condciones del COVID-19 su reserva ha sido *DENEGADA*" << endl;
        datosPasajeros();   
      }
    }
    else if (cantidadPersonas == 3){
      cout << "Nombre del Pasajero #1: ";
      cin >> nombrePasajero;
      cout << "Edad: ";
      cin >> edad;
      cout << "Nombre del Pasajero #2: ";
      cin >> np2;
      cout << "Edad: ";
      cin >> ep2;
      cout << "Nombre del Pasajero #3: ";
      cin >> np3;
      cout << "Edad: ";
      cin >> ep3;
      if (edad < 6 || edad > 70 || ep2 < 6 || ep2 >70 || ep3 < 6 || ep3 >70){
        cout << "Lo sentimos, algun pasajero/s no cumple con los requisitos de edad. Dadas las condciones del COVID-19 su reserva ha sido *DENEGADA*\n" << endl;
        datosPasajeros();   
      }
    }
  }
  else{  
   cout << "\nReserva *DENEGADA* por cantidad de personas" << endl;
    datosPasajeros(); //regresar al inicio de la solictud de datos, evitando el desplazamieto consecutivo al menu
  } 
}

//en este metodo se realiza la verificacion de asientos disponibles en el vuelo seleccionado a reservar, con condcionales se establece que si en el vuelo hay menos asientos que la cantidad de personas a reservar, se lanzara un mensaje indicando la situacion; en caso de si haber asientos disponibles, la reserva continua
void Reservaciones :: asientosDisp(){
  if (numeroDestinoSeleccionado == 1 ){
    vueloaReservar.imprimirVuelosT();//se "entra" a la calse vuelos para realizar la impresion de los vuelos del numero de destino seleccionado por el usuario
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado-1); //se "entra" a a clase vuelos para que con ayuda del getCapacidad y del numero de vuelo seleccionado obtener la cantidad de asientos disponibles en la posicion ingresada por el usuario. Se hace la resta de -1 ya que el usuario no sabe que las posiciones comienzan en 0
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp(); //en caso de no haber asientos disponibles, se imprime el mensaje establecido y se regresa al metodo asientosDisp para que el usuario pueda reservar otro numero de vuelo con asientos disponibles
    }
  }
  else if(numeroDestinoSeleccionado == 2){
    vueloaReservar.imprimirVuelosM();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+4);//se +4 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }  
  }
  else if(numeroDestinoSeleccionado == 3){
    vueloaReservar.imprimirVuelosS();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+9);//se +9 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }
  }
  else if(numeroDestinoSeleccionado == 4){
    vueloaReservar.imprimirVuelosH();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+14);//se +14 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }
  }  
  else if(numeroDestinoSeleccionado == 5){
    vueloaReservar.imprimirVuelosNY();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+19); //se +19 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }
  } 
  else if(numeroDestinoSeleccionado == 6){
    vueloaReservar.imprimirVuelosSJ();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+24); //se +24 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    } 
  } 
  else if(numeroDestinoSeleccionado == 7){
    vueloaReservar.imprimirVuelosQ();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+29); //se +29 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }
  } 
  else if(numeroDestinoSeleccionado == 8){
    vueloaReservar.imprimirVuelosBA();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+34); //se +34 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }
  }
  else if(numeroDestinoSeleccionado == 9){
    vueloaReservar.imprimirVuelosA();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+39); //se +39 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }
  } 
  else if(numeroDestinoSeleccionado == 10){
    vueloaReservar.imprimirVuelosTK();
    cout << "\n¿Que numero vuelo gusta reservar? #";
    cin >> numeroVueloSeleccionado;
    disponibilidadDeAsientos = vueloaReservar.getCapacidad(numeroVueloSeleccionado+44); //se +44 al numeroVueloSeleccionado ya que las posiciones de estos vuelos no comienzan en 0, debido a que en vuelos se generaron los vuelos en un arreglo
    if(disponibilidadDeAsientos >= cantidadPersonas){
      cout << "\nAsientos disponibles"<< endl;
    }
    else{ 
      cout <<"sin asientos disponibles para " << cantidadPersonas << " personas\n";
      asientosDisp();
    }
  }
}

//en este metodo se imprime el costo de boleto de cada destino, estos se guardan en la variable precioFinal ya que posteriormente haremos uso de esta al calcular el precio final de la reserva
void Reservaciones :: precioReserva(){
  if (numeroDestinoSeleccionado == 1){
    cout << "\nCosto por boleto de avion con destino Toronto, CA: $" << precioT << endl;
    precioFinal = precioT;
  }
  else if(numeroDestinoSeleccionado == 2){
    cout << "\nCosto por boleto de avion con destino Montreal, CA: $" << precioM << endl;  
    precioFinal = precioM; 
  }
  else if(numeroDestinoSeleccionado == 3){
    cout << "\nCosto por boleto de avion con destino Sydney, AUS: $" << precioS << endl;  
    precioFinal = precioS;
  }
  else if(numeroDestinoSeleccionado == 4){
    cout << "\nCosto por boleto de avion con destino Helsinki: $" << precioH << endl; 
    precioFinal = precioH; 
  }  
  else if(numeroDestinoSeleccionado == 5){
    cout << "\nCosto por boleto de avion con destino New York, USA: $" << precioNY << endl;
    precioFinal = precioNY;
  } 
  else if(numeroDestinoSeleccionado == 6){
    cout << "\nCosto por boleto de avion con destino San Juan, PR: $" << precioSJ << endl;
    precioFinal = precioSJ;
  } 
  else if(numeroDestinoSeleccionado == 7){
    cout << "\nCosto por boleto de avion con destino Quito, ECU: $" << precioQ << endl;
    precioFinal = precioQ;
  } 
  else if(numeroDestinoSeleccionado == 8){
    cout << "\nCosto por boleto de avion con destino Buenos Aires, ARG: $" << precioBA << endl;
    precioFinal = precioBA;
  }
  else if(numeroDestinoSeleccionado == 9){
    cout << "\nCosto por boleto de avion con destino Auckland, NZE: $" << precioA << endl;
    precioFinal = precioA;
  } 
  else if(numeroDestinoSeleccionado == 10){
    cout << "\nCosto por boleto de avion con destino Tokio, JPN: $" << precioTK << endl;
    precioFinal = precioTK;
  }
  else{
    cout << "dato invalido..." << endl;
  }
}

//en este metodo se estable la impresion de los datos importantes de cada destino, para hacer esto se hace uso de la calse "Destinos" debido a que en ella encontramos dichos datos importantes de cada destino, de igual manera de calcula e imprime la cantidad por pagar de los vuelos seleccionados en la reserva, de igual manera se lanza un mensaje al vendedor de mostrador (usuario) indicandole cuantos asientos quedan disponibles despues de realizar la reserva en curso, se realiza esto por medio de una resta de asientos disponibles - la cantidad de personas a reservar. Finalmente se imprime un mensaje dirigido a los pasajeros para que esten atentos a la hora de salida de sus vuelos
void Reservaciones :: datosImpresion(){
  if (numeroDestinoSeleccionado == 1){
    cout << "Buen Viaje a Toronto" << endl;
    cout << "Pago de vuelo: $" << precioT * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoT();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 2){
    cout << "Buen Viaje a Montreal" << endl;
    cout << "Pago Final: $" << precioM * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoM();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 3){
    cout << "Buen Viaje a Sydney" << endl;
    cout << "Pago Final: $" << precioS * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoS();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 4){
    cout << "Buen Viaje a Helsinki" << endl;
    cout << "Pago Final: $" << precioH * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoH();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 5){
    cout << "Buen Viaje a New York" << endl;
    cout << "Pago Final: $" << precioNY * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoNY();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 6){
    cout << "Buen Viaje a San Juan" << endl;
    cout << "Pago Final: $" << precioSJ * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoSJ();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 7){
    cout << "Pago Final: $" << precioQ * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoQ();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 8){
    cout << "Buen Viaje a Buenos Aires" << endl;
    cout << "Pago Final: $" << precioBA * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoBA();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 9){
    cout << "Buen Viaje a Auckland" << endl;
    cout << "Pago Final: $" << precioA * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoA();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else if (numeroDestinoSeleccionado == 10){
    cout << "Buen Viaje a Tokio" << endl;
    cout << "Pago Final: $" << precioTK * cantidadPersonas << endl;
    destinoaViajar.informacionDestinoTK();
    cout << "\nUSUARIO : Quedan " << disponibilidadDeAsientos - cantidadPersonas << " asientos disponibles para el vuelo reservado" << endl;
  }
  else{
    cout << "Probemas tecnicos" << endl;
  }
  cout << "IMPORTANTE : PASAJEROS, ESTEN AL PENDIENTE DE LA HORA DE SALIDA DE SU VUELO" << endl;
  cout << "Gracias por volar con FlyFree, nos vemos en el aire ✈✈✈" << endl;  
}

//si las reservas son hacia el mismo destino para todos los pasajeros, se hace uso de este metodo, el cual manda llamar los metodos pasados necesarios para para su implementacion (metodos que contienen las fucnionalidades y datos necesarios de cada destino) dependiendo del destino al que deseen viajar, finalemente se realiza e imprime el calculo final del pago a realizar
void Reservaciones :: unDestinoDeViaje(){
  destinoaViajar.nuestrosDestinos();
  cout << "0. Salir" << endl;
  cout << "Numero de destino al que viajan: "; 
  cin >> numeroDestinoSeleccionado;
  asientosDisp();
  precioReserva();
  cout << "\nPrecio FINAL de su reserva = $" << precioFinal * cantidadPersonas;
}
    
//si las reservas son hacia diferentes destinos para todos los pasajeros, se hace uso de este metodo, el cual manda llamar los metodos pasados necesarios para su implementacion (metodos que contienen las fucnionalidades y datos necesarios de cada destino) dependiendo del destino al que desee viajar cada pasajero. En este metodo primero se realiza el condicional para cantidad de personas, el cual ayuda a ejecutar las acciones necesarias dependiendo de la cantidad de pasajeros a reservar, posteriormente se ejecuta las acciones de metodos pasados dependiendo las selecciones, donde al haber ejecutado estos, se pide a cada pasajero que confirmen su reserva, al confirmarla se imprimen sus datos y los datos del vuelo, en caso de no confirmar, se cancela la reserva automaticamente
void Reservaciones :: variosDestinoDeViaje(){
  if (cantidadPersonas == 2){
    cantidadPersonas = 1;
    destinoaViajar.nuestrosDestinos();
    cout << "0. Salir" << endl;
    cout << "Destino pasajero 1: #";
    cin >> numeroDestinoSeleccionado;
    asientosDisp();
    precioReserva();
    cout << "\nPrecio FINAL de primer reserva = $" << precioFinal * cantidadPersonas;
    cout <<"\n¿Confirma reserva?";
    cin >> confirmacion;
    if(confirmacion == "SI" || confirmacion == "si" ||confirmacion == "Si"){
      cout << "\n ☑ Reserva CONFIRMADA, imprimiendo pase de abordar..." << endl;
      r1 = precioFinal * cantidadPersonas;
      cout << "\nDatos de primera reserva" << endl;
      cout << "\nPasajero 1: " << nombrePasajero << "\nPasajero con destino numero: " << numeroDestinoSeleccionado << endl;
      datosImpresion();
    }
    else{
      cout << "\nReserva CANCELADA" << endl;
    }
    cout << "\nDestino pasajero 2: #";
    cin >> numeroDestinoSeleccionado;
    asientosDisp();
    precioReserva();
    cout << "\nPrecio FINAL de segunda reserva = $" << precioFinal * cantidadPersonas;
    cout <<"\n¿Confirma reserva?";
    cin >> confirmacion;
    if(confirmacion == "SI" || confirmacion == "si" ||confirmacion == "Si"){
      cout << "\n ☑ Reserva CONFIRMADA, imprimiendo pase de abordar..." << endl;
      r2 = precioFinal * cantidadPersonas;
      cout << "\nDatos de segunda reserva" << endl;
      cout << "\nPasajero 2 " << np2 << "\nPasajero con destino numero: " << numeroDestinoSeleccionado << endl;
      datosImpresion();
    }
    else{
      cout << "\nReserva CANCELADA" << endl;
    }
    cout << "\nTotal de vuelos: $" << r1 + r2;
  }
  else if(cantidadPersonas == 3){
    cantidadPersonas = 1;
    destinoaViajar.nuestrosDestinos();
    cout << "0. Salir" << endl;
    cout << "Destino pasajero 1: ";
    cin >> numeroDestinoSeleccionado;
    asientosDisp();
    precioReserva();
    cout << "\nPrecio FINAL de primera reserva = $" << precioFinal * cantidadPersonas;
    cout <<"\n¿Confirma reservas?";
    cin >> confirmacion;
    if(confirmacion == "SI" || confirmacion == "si" ||confirmacion == "Si"){
      cout << "\n ☑ Reserva CONFIRMADA, imprimiendo pase de abordar..." << endl;
      r1 = precioFinal * cantidadPersonas;
      cout << "\nDatos de primera reserva" << endl;
      cout << "\nPasajero 1 " << nombrePasajero << "\nPasajero con destino numero: " << numeroDestinoSeleccionado << endl;
      datosImpresion();
    }
    else{
      cout << "\nReserva CANCELADA" << endl;
    }
    cout << "\nDestino pasajero 2: ";
    cin >> numeroDestinoSeleccionado;
    asientosDisp();
    precioReserva();
    cout << "\nPrecio FINAL de segunda reserva = $" << precioFinal * cantidadPersonas;
    cout <<"\n¿Confirma reservas?";
    cin >> confirmacion;
    if(confirmacion == "SI" || confirmacion == "si" ||confirmacion == "Si"){
      cout << "\n ☑ Reserva CONFIRMADA, imprimiendo pase de abordar..." << endl;
      r2 = precioFinal * cantidadPersonas;
      cout << "\nDatos de segunda reserva" << endl;
      cout << "\nPasajero 2 " << np2 << "\nPasajero con destino numero: " << numeroDestinoSeleccionado << endl;
      datosImpresion();
    }
    else{
      cout << "\nReserva CANCELADA" << endl;
    }
    cout << "\nDestino pasajero 3: ";
    cin >> numeroDestinoSeleccionado;
    asientosDisp();
    precioReserva();
    cout << "\nPrecio FINAL de tercera reserva = $" << precioFinal * cantidadPersonas;
    cout <<"\n¿Confirma reservas?";
    cin >> confirmacion;
    if(confirmacion == "SI" || confirmacion == "si" ||  confirmacion == "Si"){
      cout << "\n ☑ Reserva CONFIRMADA, imprimiendo pase de abordar..." << endl;
      r3 = precioFinal * cantidadPersonas;
      cout << "\nDatos de tercera reserva" << endl;
      cout << "\nPasajero 3 " << np3 << "\nPasajero con destino numero: " << numeroDestinoSeleccionado << endl;
      datosImpresion();
    }
    else{
      cout << "\nReserva CANCELADA" << endl;
    }
    cout << "Total de vuelos: $" << r1 + r2 + r3;
  }
  else{
    cout << "dato invalido" << endl;
  }
}

//en este metodo se imprime los datos de cada pasajero, del destino y vuelo a abordar, este metodo es exclusivo para reservaciones con un solo destino, cabe mencionar que este metodo se ejecuta al confirmar reservacion desde el maiin
void Reservaciones :: imprimirDatosUnVuelo(){
  cout << "\nPasajero 1 " << nombrePasajero <<  endl;
  cout << "Pasajero 2 " << np2 << endl;
  cout << "Pasajero 3 " << np3 << endl;
  cout << "Pasajeros con destino numero #" << numeroDestinoSeleccionado << endl;
  datosImpresion();
}