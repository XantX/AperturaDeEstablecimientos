void Ingresar(Lista<Establecimientos> &NuevaLista, Establecimientos &Local)
{
  DatoIn::Datos(Local);
  NuevaLista.InsertarInicio(Local);
}
void EncolarLocales(Establecimientos &Data, Cola<Establecimientos> &Permitidos, Cola<Establecimientos> &NoPermitidos)
{
  if (EntraEnLaCola(Data))
  {
    Permitidos.push(Data);
    std::cout << "Entro a la cola de permitidos: \n";
    std::cout << Data.GetNombre() << std::endl;
  }
  else
  {
    NoPermitidos.push(Data);
    std::cout << "No esta en la cola de permitidos: \n";
    std::cout << Data.GetNombre() << std::endl;
  }
}
void Recorre(Cola<Establecimientos> &Permitidos, Cola<Establecimientos> &NoPermitidos, Lista<Establecimientos> &NuevaLista)
{
  if (NuevaLista.GetLongitud() == 0)
  {
    std::cout << "No hay locales en la lista" << std::endl;
  }
  else
  {
    int cont = 0;
    Nodo<Establecimientos> *aux = NuevaLista.inicio;
    while (cont < NuevaLista.GetLongitud())
    {
      //Recorrido para meter en la cola a los locales con las caracteristicas
      EncolarLocales(aux->data, Permitidos, NoPermitidos);
      cont++;
      aux = aux->Siguiente;
    }
  }
}
void desplegar(Cola<Establecimientos> &Permitidos)
{
  if (Permitidos.longitud == 0)
  {
    std::cout << "La cola esta vacia \n";
    return;
  }
  Permitidos.pop(PrinLocal::Imprimir);
  desplegar(Permitidos);
}