/*#include <iostream>
using namespace std;
int main() {

int saldo_inicial = 1000, opc;
float extra, saldo, retiro;

cout << "\tBienvenido a su cajero virtual"<<endl;
cout << "1. ingresar dinero en cuenta"<<endl;
cout << "2.Retirar dinero de la cuenta"<<endl;
cout << "3. Salir"<<endl;
cout << "opcion:";
cin >> opc;

    switch (opc) {

        case 1:
            cout << "digite la cantida de dinero a ingresar";
            cin>>extra;
            saldo = saldo_inicial + extra;
            cout << "Dinero en cuenta: " <<saldo;break;

        case 2:
            cout << "digita la cantida de dinero que va a retirar: ";
            cin >> retiro;

            if (retiro > saldo_inicial){
                cout << "no tiene esa cantidad de dinero";
            }else {
                saldo = saldo_inicial - retiro;
                cout << "cuanto dinero tienes en tu cuenta: " <<  saldo;
            }
        case 3: break;



    }

#include <iostream>
#include <conio.h>
int main (){
    int i;
    i=1;
    while(i<=10){
        std::cout <<i<< "\n";
        i++;
    }
    getch();
    return 0;
}*/

#include <iostream>
#include <conio.h>
int main (){
    int i;
    for(i=10; i>=1; i--){
        std::cout << i << "\n";
    }
    getch();
    return 0;
}
