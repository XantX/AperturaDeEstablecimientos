
bool operator==(Establecimientos Num1, Establecimientos NUm2)
{
  if (Num1.GetNombre() == NUm2.GetNombre() && Num1.GetRUC() == NUm2.GetRUC())
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Condicion(std::string Nombre, std::string RUC, Establecimientos dato2)
{
  if (Nombre == dato2.GetNombre() && RUC == dato2.GetRUC())
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool EntraEnLaCola(Establecimientos Data)
{
  if (Data.GetSeguro() && Data.GetCarnet())
  {
    return true;
  }
  else
  {
    return false;
  }
}
namespace PrintNum
{
  template <typename T>
  void Imprimir(T data)
  {
    std::cout << data << std::endl;
  }
} // namespace PrintNum
void ConvertirSiyNo(bool opcion)
{
  if (opcion == 1)
  {
    std::cout << "SI";
  }
  else
  {
    std::cout << "NO";
  }
}
namespace PrinLocal
{
  void Imprimir(Establecimientos local)
  {
    std::cout << "------------------------" << std::endl;
    std::cout << "El Local es:" << std::endl;
    std::cout << "Nombre :" << local.GetNombre() << std::endl;
    std::cout << "RUC : " << local.GetRUC() << std::endl;
    std::cout << "Direccion : " << local.GetDireccion() << std::endl;
    std::cout << "Tipo de local:" << local.GetTipoLocal() << std::endl;
    std::cout << "Tiene carnet de desinfeccion: ";
    ConvertirSiyNo(local.GetCarnet());
    std::cout << std::endl;
    std::cout << "Tiene el seguro para todos sus trabajadores: ";
    ConvertirSiyNo(local.GetSeguro());
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;
  }

} // namespace PrinLocal

namespace DatoIn
{
  void Datos(Establecimientos &nuevo)
  {
    s Nombre;
    s RUC;
    s Direccion;
    s tipoLocal;
    bool CarnetDeDesinfeccion;
    bool SeguroDetrabajadores;
    std::cout << "---------------------------------- \n ";
    std::cout << "Dime el nombre de el local:\n";
    std::cin.ignore();
    std::getline(std::cin, Nombre);
    nuevo.SetNombre(Nombre);
    std::cout << "Dime la direccion de el local: \n";
    std::getline(std::cin, Direccion);
    nuevo.SetDireccion(Direccion);
    std::cout << "Dime el ruc del local: \n";
    std::getline(std::cin, RUC);
    nuevo.SetRUC(RUC);
    std::cout << "Dime que tipo de local es: \n";
    std::getline(std::cin, tipoLocal);
    nuevo.SetipoLocal(tipoLocal);
    std::cout << "Dime si el local tiene su carnet de desinfeccion: SI[1] ó NO[0] \n";
    std::cin >> CarnetDeDesinfeccion;
    nuevo.SetCarnet(CarnetDeDesinfeccion);
    std::cout << "Dimie si el local tiene seguro para sus trabajadores contra la infeccion: SI[1] ó NO[0] \n";
    std::cin >> SeguroDetrabajadores;
    nuevo.SetSeguro(SeguroDetrabajadores);
  }

} // namespace DatoIn