#include <fstream>
template <typename T>
void guardar(Lista<T> ListaEntera)
{
  //Guarda la lista en un archivo plano
  /*
  formato:
  Nombre;Direccion;RUC;TipodeLocal;CarnetDeDesinfeccion;SeguroMedico
  */
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
      NuevoArchivo << aux->data.GetNombre() << ";";
      NuevoArchivo << aux->data.GetDireccion() << ";";
      NuevoArchivo << aux->data.GetRUC() << ";";
      NuevoArchivo << aux->data.GetTipoLocal() << ";";
      NuevoArchivo << aux->data.GetCarnet() << ";";
      NuevoArchivo << aux->data.GetSeguro() << "; \n";
      cont++;
      aux = aux->Siguiente;
    }
    std::cout << "Termine de escribir el archivo \n";
    NuevoArchivo.close();
  }
}
void Leer(Lista<Establecimientos> &ListaEntera)
{
  /*
  formato:
  Nombre;Direccion;RUC;TipodeLocal;CarnetDeDesinfeccion;SeguroMedico;
  */
  std::string datos;
  std::ifstream Archivo;
  Establecimientos nuevo;
  Archivo.open("ListaDeLocales.txt", std::ios::in);
  if (Archivo.fail())
  {
    std::cout << "El Archivo no se pudo abrir o no esta creado \n";
  }
  else
  {
    int cont = 0;
    while (!Archivo.eof())
    {
      std::getline(Archivo, datos, ';');
      cont++;
      if (cont > 6)
      {
        ListaEntera.InsertarInicio(nuevo);
        cont = 1;
      }
      std::cout << cont;
      DatoIn::InDatosArch(nuevo, datos, cont);

      std::cout << datos << std::endl;
    }
    Archivo.close();
  }
}