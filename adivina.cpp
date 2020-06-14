#include "iostream"

using namespace std;

int a,b=22,i,n=5;

void num()
{
                                  // se crea la funcion utilizando la funcion if
  if (a > b)
  {
      cout << "No, el numero es menor ";
  }
  if (a >= 1 && a < b)
  {
      cout << "No, el numero es mayor ";
  }
 if (a == b)
 {
   cout << " correcto ";

   exit(a == 22);                    //utilizo la funcion exit para que el programa finalice cuando acierto y salir
 } 
if (a == 0)
 {
   cout << " Gracias por intentar ";

   exit(a == 0);
 }

}

int main()
{
 
  for ( i = 0; i < 5; i++)       // el numero de intentos ya esta determinado y al llgar a 5 finaliza
  {
    cout << endl << "Adivina un numero del 1 al 100 o digita 0 para salir " << endl; 
  
   cout << "numero de intentos :" << n << endl; 
  n--;                           // contador de intentos sobrantes
   cout << "numero :"; 
   cin >> a;

   cout ; num();          //llamamos a la funcion
 
  }
 
  return 0;
     

}