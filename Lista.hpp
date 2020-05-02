
template <typename T>
class Lista
{
private:
  long long Longitud;

public:
  Nodo<T> *inicio;
  Nodo<T> *fin;
  Lista();
  ~Lista();
  void InsertarInicio(T data);
  void imprimir(std::function<void(T)> Impresora);
  void Buscar(std::function<bool(Nodo<T> *)> Condicion, std::function<void(Nodo<T> *)> Impresora);
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
void Lista<T>::imprimir(std::function<void(T)> Impresora)
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
void Lista<T>::Buscar(std::function<bool(Nodo<T> *)> Condicion, std::function<void(Nodo<T> *)> Impresora)
{
  if (Longitud == 0)
  {
    std::cout << "No hay nada en la lista";
  }
  else
  {
    Nodo<T> *aux = inicio;
    int cont = 1;
    while (!Condicion(aux) && cont <= Longitud)
    {
      aux = aux->Siguiente;
    }
    if (Condicion(aux) == false)
    {
      std::cout << "No se encontro en el arreglo";
    }
    else
    {
      Impresora(aux);
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
