#include "iostream"

using namespace std;
int a;
void fecha()
{
  if (a % 400 == 0)         // se crea la funcion y se emplea if
  {                     
      cout << "Es bisiesto";
  }                                  //se digita la forma de como saber si es bisiesto
if (a % 4== 0 && a % 100 != 0)
  {
      cout << "Es bisiesto";
  }
else
  {
      cout << "No es bisiesto";
  }

}

int main()
{
  cout << "Ingrese el annio : ";
  cin >> a;                           // se pide año a probar

  cout ; fecha();     //se llama a la funcion 
  return 0;
}