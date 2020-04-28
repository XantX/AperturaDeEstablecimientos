#include <iostream>
#include <functional>
#include <string>
#include "Funciones.hpp"
using namespace std;
#include "Nodo.hpp"
#include "Lista.hpp"
#include "Establicimiento.hpp"
int main()
{

  Lista<int> listaDoble;
  listaDoble.imprimir(PrintNum::Imprimir<int>);
  return 0;
}