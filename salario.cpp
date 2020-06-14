#include "iostream"

using namespace std;
int n,a = 1;
float st, sr, ht, hx, r1, r2, htp = 1.75, hxp = 2.50;
 
 void cal1()
{
   r1 = ht * htp;   // lo que se paga por hora se multiplica por el  numero de horas digitada
   r2 = hx * hxp;

   st = r1+r2;      // se suma el resultado de ambos para obtener el salario total
 cout << "El salario total es : " << st << endl;
}
 void cal2()
{
   sr = st - (st*0.04) - (st*0.0625);
 if (st > 500)                                /* para obtener el salario real se resta el salario total menos  
                                                  el porcentage de descuento por el salario total*/
 {                                                                                    
     sr = st - (st*0.04) - (st*0.0625) - (st*0.1);
 }
 cout << "El salario real es : " << sr;
}

int main()
{
    cout << "Numero de empleados que desea calcular :";
   cin >> n;
                                       //se pide el numero de empleados para poder repetir el proceso las veces necesarias
   for (int i = 0; i < n; i++)       
   {
   cout << endl << "empleado "<< a << endl;   
   a++;
   cout << "Horas normales trabajadas :";
   cin >> ht;
   cout << "Horas extras trabajadas :";
   cin >> hx;



   cout ; cal1();      
   cout ; cal2();
   }

return 0;


}
