#include <iostream>
#include <functional>
#include <string>

#include "Nodo.hpp"
#include "Establicimiento.hpp"
#include "Funciones.hpp"
#include "Lista.hpp"
#include "Cola.hpp"

#include "IngresoDesdeArchivos.hpp"

#include "FunMenu.hpp"

void BuscarEnLista(Lista<Establecimientos> NuevaLista)
{
  std::string Nombre;
  std::string RUC;
  std::cout << "Dime el nombre del local que quieres buscar:\n";
  std::cin >> Nombre;
  std::cout << "Dime el RUC del local que quieres buscar:\n";
  std::cin >> RUC;
  NuevaLista.Buscar(Nombre, RUC);
}
void Menu()
{
  std::cout << "-------------------------------------\n";
  std::cout << "Elige una opcion------------ \n";
  std::cout << "1.--> Ingresar un local nuevo \n";
  std::cout << "2.--> Guardar locales en un archivo \n";
  std::cout << "3.--> Encolar los locales permitidos para abrir \n";
  std::cout << "4.--> Desplegar los locales permitidos \n";
  std::cout << "5.--> Locales no permitidos para apertura \n";
  std::cout << "6.--> Imprimir Lista de locales \n";
  std::cout << "0.--> Salir \n";
  std::cout << "----------->";
  std::cout << "      ";
}
int main()
{
  Lista<Establecimientos> NuevaLista;
  Establecimientos Local;
  Cola<Establecimientos> Permitidos;
  Cola<Establecimientos> NoPermitidos;
  int opcion;
  while (1)
  {
    Menu();
    std::cin >> opcion;
    //std::cin >> opcion;
    switch (opcion)
    {
    case 0:
      return 0;
      break;
    case 1:
      Ingresar(NuevaLista, Local);
      break;
    case 2:
      guardar(NuevaLista);
      break;
    case 3:
      Recorre(Permitidos, NoPermitidos, NuevaLista);
      break;
    case 4:
      desplegar(Permitidos);
      break;
    case 5:
      desplegar(NoPermitidos);
      break;
    case 6:
      NuevaLista.Imprimir();
      break;
    default:
      std::cout << "-------------------------------------\n";
      std::cout << "No es una opcion de la lista \n";
      std::cout << "-------------------------------------\n";
      break;
    }
  }
  return 0;
}