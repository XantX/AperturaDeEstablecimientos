
template <typename T>
class Lista
{
private:
  long long Longitud = 0;

public:
  Nodo<T> *inicio;
  Nodo<T> *fin;
  Lista();
  ~Lista();
  void InsertarInicio(T data);
  void imprimir(function<void(T)> Impresora);
};
template <typename T>
Lista<T>::Lista()
{
}
template <typename T>
Lista<T>::~Lista()
{
}
template <typename T>
void Lista<T>::imprimir(function<void(T)> Impresora)
{
  if (Longitud == 0)
  {
    cout << "No hay nada en el arreglo para imprimir";
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
