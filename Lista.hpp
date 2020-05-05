#ifndef LISTA_HPP
#define LISTA_HPP
template <typename T>
class Lista
{
private:
  long long Longitud;
  void _Buscar(std::string dato1, std::string dato2, std::function<bool(std::string, std::string, T)> Condicion, std::function<void(T)> Impresora);
  void _Imprimir(std::function<void(T)> Impresora);

public:
  Nodo<T> *inicio;
  Nodo<T> *fin;
  Lista();
  ~Lista();
  void InsertarInicio(T data);
  void Buscar(std::string dato1, std::string dato2);
  void Imprimir();

  long long GetLongitud() { return Longitud; }
};
template <typename T>
Lista<T>::Lista()
{
  inicio = fin = nullptr;
  Longitud = 0;
}
template <typename T>
Lista<T>::~Lista()
{
}
template <typename T>
void Lista<T>::Buscar(std::string dato1, std::string dato2)
{
  _Buscar(dato1, dato2, Condicion, PrinLocal::Imprimir);
}
template <typename T>
void Lista<T>::Imprimir()
{
  _Imprimir(PrinLocal::Imprimir);
}
template <typename T>
void Lista<T>::_Imprimir(std::function<void(T)> Impresora)
{
  if (Longitud == 0)
  {
    std::cout << "No hay nada en el arreglo para imprimir";
  }
  else
  {
    Nodo<T> *aux = inicio;
    long long cont = 0;
    while (cont < Longitud)
    {
      Impresora(aux->data);
      aux = aux->Siguiente;
      cont++;
    }
  }
}
template <typename T>
void Lista<T>::_Buscar(std::string dato1, std::string dato2, std::function<bool(std::string, std::string, T)> Condicion, std::function<void(T)> Impresora)
{
  if (Longitud == 0)
  {
    std::cout << "No hay nada en la lista";
  }
  else
  {
    Nodo<T> *aux = inicio;
    int cont = 1;
    while (!Condicion(dato1, dato2, aux->data) && cont <= Longitud)
    {
      aux = aux->Siguiente;
    }
    if (Condicion(dato1, dato2, aux->data) == false)
    {
      std::cout << "No se encontro en el arreglo";
    }
    else
    {
      Impresora(aux->data);
    }
  }
}
template <typename T>
void Lista<T>::InsertarInicio(T data)
{
  Nodo<T> *nuevo = new Nodo<T>(data);
  if (Longitud == 0)
  {
    inicio = fin = nuevo;
  }
  else
  {
    nuevo->Siguiente = inicio;
    inicio->Anterior = nuevo;
    inicio = nuevo;
  }
  Longitud++;
}
#endif