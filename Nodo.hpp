template <typename T>
class Nodo
{
public:
  T data;
  Nodo *Siguiente;
  Nodo *Anterior;
  Nodo(T data);
  ~Nodo();
};
template <typename T>
Nodo<T>::Nodo(T data)
{
  this->data = data;
}
template <typename T>
Nodo<T>::~Nodo()
{
}
