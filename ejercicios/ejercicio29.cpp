#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n,menor=0,mayor=100;
    char signo;
    n=rand() % (100-0+1)+0;
    bool adivino=false;

    while(adivino==false){
        cout<<"el numero adivinado es:  "<<n<<endl;
        cout<<"escriba = si adivinamos su numero, < si es menor y este > por si es mayor que el numero que adivinamos"<<endl;
        cin>>signo;
        switch (signo) {
            case '=':
                adivino=true;
                cout<<"adivinamos, excdlnte "<<endl;
            break;
            case '<':
                mayor=n;
                n=(mayor-menor)/2 + menor;

            break;
            case '>':
                menor=n;
                n=((mayor-menor)/2) + menor;

            break;
            default: cout<<"ingrese una operacion valida"<<endl;


        }



    }



    return 0;
}


