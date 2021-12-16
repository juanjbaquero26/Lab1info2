#include <iostream>
using namespace std;
/*
int main()
{
    int n;
    cout<<"Ingresa el tamaño de la espiral: ";
    cin>>n;

    while (n%2==0) {
        cout<<"El tamaño de la espiral debe ser un numero impar! Vuelve a ingresar el tamaño: ";
        cin>>n;
    }

    int m = 1;
    int diag1 = 1;
    int diag2 = 1;
    int diag3 = 1;
    int diag4 = 1;
    int sum_diag = 1;

    while (m < n-2) {
        diag1 += 2;
        diag2 += 4;
        diag3 += 6;
        diag4 += 8;

        sum_diag += diag1+diag2+diag3+diag4;

        cout<<diag1<<endl;
        cout<<diag2<<endl;
        cout<<diag3<<endl;
        cout<<diag4<<endl;

        if (diag4 == n*n){
            cout<< "La suma es: "<<sum_diag<<endl;
            break;
        }

        diag1 += 8*m;
        diag2 += 8*m;
        diag3 += 8*m;
        diag4 += 8*m;

        m+=1;
    }

    return 0;
}
*/
