
typedef std::string s;
typedef long long ll;
#ifndef ESTABLECIMIENTOS_HPP
#define ESTABLECIMIENTOS_HPP
class Establecimientos
{
private:
  s Nombre;
  s RUC;
  s Direccion;
  s tipoLocal;
  bool CarnetDeDesInfeccion;
  bool SeguroDeTrabajadores;

public:
  Establecimientos();
  ~Establecimientos();
  void SetNombre(s Nombre);
  void SetRUC(s RUC);
  void SetDireccion(s Direccion);
  void SetipoLocal(s tipoLocal);
  void SetCarnet(bool carnet);
  void SetSeguro(bool Seguro);
  std::string GetNombre();
  std::string GetRUC();
  std::string GetDireccion();
  std::string GetTipoLocal();
  bool GetCarnet();
  bool GetSeguro();
};

Establecimientos::Establecimientos()
{
}
Establecimientos::~Establecimientos()
{
}
void Establecimientos::SetNombre(s Nombre)
{
  this->Nombre = Nombre;
}
void Establecimientos::SetRUC(s RUC)
{
  this->RUC = RUC;
}
void Establecimientos::SetDireccion(s Direccion)
{
  this->Direccion = Direccion;
}
void Establecimientos::SetipoLocal(s Local)
{
  this->tipoLocal = Local;
}
void Establecimientos::SetSeguro(bool seguro)
{
  this->SeguroDeTrabajadores = seguro;
}
void Establecimientos::SetCarnet(bool carnet)
{
  this->CarnetDeDesInfeccion = carnet;
}
bool Establecimientos::GetCarnet()
{
  return CarnetDeDesInfeccion;
}
bool Establecimientos::GetSeguro()
{
  return SeguroDeTrabajadores;
}
std::string Establecimientos::GetNombre()
{
  return Nombre;
}
std::string Establecimientos::GetRUC()
{
  return RUC;
}
std::string Establecimientos::GetDireccion()
{
  return Direccion;
}
std::string Establecimientos::GetTipoLocal()
{
  return tipoLocal;
}
#endif