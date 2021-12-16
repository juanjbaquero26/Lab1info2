#include <iostream>

using namespace std;

int main()
    {

    int numIngr;
    int divi=0,triangular=0;

    cout<<"Ingrese un numero entero : ";
    cin>>numIngr;


    for(int i=1;divi<=numIngr;i++){       // Ciclo que calcula numeros triangulares, luego si verificara cuantos divisores
        triangular=i*(i+1)/2;             // tiene los evalua 1 a 1 gracias a la operacion modulo.
        divi=0;
        for(int cont=1;cont<=triangular;cont++){    //ciclo para saber  los divisores que tiene el numero triangular
            if(triangular%cont==0){
                divi++; }

        }
    }

    cout<<"El numero : "<<triangular<<", tiene "<<divi<<" divisores "<<"\n";

    return 0;
}
