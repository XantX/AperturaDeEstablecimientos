#include <fstream>
template <typename T>
void guardar(Lista<T> ListaEntera)
{
  std::ofstream NuevoArchivo;
  NuevoArchivo.open("ListaDeLocales.txt", std::ios::out);
  if (NuevoArchivo.fail())
  {
    std::cout << "No se abrio el archivo";
  }
  else
  {
    int cont = 0;
    Nodo<Establecimientos> *aux = ListaEntera.inicio;
    while (cont < ListaEntera.GetLongitud())
    {
      std::cout << "Estoy escribiendo";
      NuevoArchivo << aux->data.GetNombre() << ";";
      NuevoArchivo << aux->data.GetDireccion() << ";";
      NuevoArchivo << aux->data.GetTipoLocal() << ".";
      NuevoArchivo << std::endl;
      cont++;
      aux = aux->Siguiente;
    }

    NuevoArchivo.close();
  }
}
void leer()
{
}
