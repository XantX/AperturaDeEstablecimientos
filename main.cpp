#include <iostream>
#include <functional>
#include <string>
//using namespace std;
#include "Nodo.hpp"
#include "Lista.hpp"
#include "Cola.hpp"
#include "Establicimiento.hpp"
#include "IngresoDesdeArchivos.hpp"
#include "Funciones.hpp"
int main()
{
  Lista<Establecimientos> Lista2;
  Establecimientos Sinpuntero;

  DatoIn::Datos(Sinpuntero);
  //PrinLocal::ImprimirUnPoint(Sinpuntero);
  Lista2.InsertarInicio(Sinpuntero);
  Lista2.imprimir(PrinLocal::ImprimirUnPoint);

  DatoIn::Datos(Sinpuntero);
  Lista2.InsertarInicio(Sinpuntero);

  Lista2.imprimir(PrinLocal::ImprimirUnPoint);

  guardar<Establecimientos>(Lista2);
  return 0;
}