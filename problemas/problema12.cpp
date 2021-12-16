/*
#include <iostream>

using namespace std;
int numeroalreves(int numero); //prototipo de la funcion.

int main()
{
    int numero;
     int numero2;
     int numeromasgrande;
     int resultado=0;
     cout<<"Ingrese un numero de 3 digitos: ";
     cin>>numero;
     int iteracion=0;

     if(numero>=-999 && numero<=999)
     {
         for (int i=1;i<999;i++)
         {
             numeromasgrande=numero*i;//se asigna el numero que se ingresó multiplicado por la variable i que es la que recorre.
             numero2=numeroalreves(numeromasgrande);//invoco la funcion para saber si el numero que ingreso el usuario el palindromo
             if(numeromasgrande==numero2)
             {
                 resultado=numeromasgrande;
                 iteracion=i;
             }
         }
     cout<<numero<<"*"<<iteracion<<"="<<resultado<<endl;
     }
     else
     {
         cout<<"El numero no es de 3 digitos."<<endl;
     }



    return 0;
}
int numeroalreves(int numero)//con esto puedo saber si el numero es palindromo
{
    int respuesta=0;
    while (numero>0)
    {
        respuesta=respuesta+numero%10;
        respuesta=respuesta*10;
        numero=numero/10;
    }
    return respuesta/10;
}
*/
