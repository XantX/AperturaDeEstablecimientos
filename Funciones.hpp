
namespace PrintNum
{
  template <typename T>
  void Imprimir(T data)
  {
    std::cout << data << std::endl;
  }
} // namespace PrintNum

namespace PrinLocal
{
  void ImprimirUnPoint(Establecimientos local)
  {
    std::cout << "------------------------" << std::endl;
    std::cout << "El Local es: " << std::endl;
    std::cout << local.GetNombre() << std::endl;
    std::cout << local.GetRUC() << std::endl;
    std::cout << local.GetTipoLocal() << std::endl;
    std::cout << local.GetDireccion() << std::endl;
    std::cout << "-----------------------------" << std::endl;
  }
  void Imprimir(Establecimientos *local)
  {
    std::cout << "------------------------" << std::endl;
    std::cout << "El Local es: " << std::endl;
    std::cout << local->GetNombre() << std::endl;
    std::cout << local->GetRUC() << std::endl;
    std::cout << local->GetTipoLocal() << std::endl;
    std::cout << local->GetDireccion() << std::endl;
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
    ll Area;
    ll AforoMax;
    int BanosCANT;
    std::cout << "Dime el nombre de el local:\n";
    std::cin >> Nombre;
    nuevo.SetNombre(Nombre);
    std::cout << "Dime la direccion de el local: \n";
    std::cin >> Direccion;
    nuevo.SetDireccion(Direccion);
    std::cout << "Dime el ruc del local: \n";
    std::cin >> RUC;
    nuevo.SetRUC(RUC);
    std::cout << "Dime que tipo de local es: \n";
    std::cin >> tipoLocal;
    nuevo.SetipoLocal(tipoLocal);
  }
  void DatosPoint(Establecimientos *nuevo)
  {
    s Nombre;
    s RUC;
    s Direccion;
    s tipoLocal;
    ll Area;
    ll AforoMax;
    int BanosCANT;
    std::cout << "Dime el nombre de el local:\n";
    std::cin >> Nombre;
    nuevo->SetNombre(Nombre);
    std::cout << "Dime la direccion de el local: \n";
    std::cin >> Direccion;
    nuevo->SetDireccion(Direccion);
    std::cout << "Dime el ruc del local: \n";
    std::cin >> RUC;
    nuevo->SetRUC(RUC);
    std::cout << "Dime que tipo de local es: \n";
    std::cin >> tipoLocal;
    nuevo->SetipoLocal(tipoLocal);
  }
} // namespace DatoIn