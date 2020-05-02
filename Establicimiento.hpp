
typedef std::string s;
typedef long long ll;
class Establecimientos
{
private:
  s Nombre;
  s RUC;
  s Direccion;
  s tipoLocal;
  ll Area; //m^2
  ll AforoMax;
  int BanosCANT;

public:
  Establecimientos();
  ~Establecimientos();
  void SetNombre(s Nombre);
  void SetRUC(s RUC);
  void SetDireccion(s Direccion);
  void SetipoLocal(s tipoLocal);
  void SetArea(ll Area);
  void SetAforoMax(ll AforoMax);
  void SetBanosCant(int BanosCant);
  std::string GetNombre();
  std::string GetRUC();
  std::string GetDireccion();
  std::string GetTipoLocal();
  ll GetArea();
  ll GetAforoMax();
  int GetBanosCANT();
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
void Establecimientos::SetArea(ll Area)
{
  this->Area = Area;
}
void Establecimientos::SetAforoMax(ll Aforo)
{
  this->AforoMax = Aforo;
}
void Establecimientos::SetBanosCant(int BanosCant)
{
  this->BanosCANT = BanosCant;
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
ll Establecimientos::GetArea()
{
  return Area;
}
ll Establecimientos::GetAforoMax()
{
  return AforoMax;
}
int Establecimientos::GetBanosCANT()
{
  return BanosCANT;
}