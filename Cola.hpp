#ifndef COLA_HPP
#define COLA_HPP
template <typename T>
class Cola
{
public:
  Nodo<T> *inicio;
  Nodo<T> *fin;
  long long longitud;
  Cola();
  ~Cola();
  void push(T data);
  void pop(std::function<void(T)> Imprimir);
};
template <typename T>
Cola<T>::Cola()
{
  inicio = fin = nullptr;
  longitud = 0;
}
template <typename T>
Cola<T>::~Cola()
{
}
template <typename T>
void Cola<T>::push(T data)
{
  Nodo<T> *nuevo = new Nodo<T>(data);

  if (longitud == 0)
  {
    inicio = fin = nuevo;
  }
  else
  {
    fin->Siguiente = nuevo;
    nuevo->Anterior = fin;
    fin = nuevo;
  }
  longitud++;
}

template <typename T>
void Cola<T>::pop(std::function<void(T)> Imprimir)
{
  if (longitud == 0)
  {
    std::cout << "No hay nada en la cola";
  }
  else
  {
    Imprimir(inicio->data);
    if (longitud == 1)
    {
      inicio = nullptr;
    }
    else
    {
      Nodo<T> *aux = inicio->Siguiente;
      aux->Anterior = nullptr;
      inicio->Siguiente = nullptr;
      inicio = aux;
      //delete aux; //por que al borrar el auxiliar se va lo demas
    }
    longitud--;
  }
}
#endif