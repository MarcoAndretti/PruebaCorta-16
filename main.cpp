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
}

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
#include <iostream>

int main() {
    int numero;

    do {
        std::cout << "Digite un numero";
        std::cin >> numero;
    } while (numero < 1 || numero > 10);

    for (int i = 1; i <= 20; i++) {
        std::cout << numero << " * " << i << " = " << numero * i << std::endl;
    }

    return 0;
}

#include <iostream>
int main (){
    int suma = 0, cuadrado;

    for (int i=1;i<=10;i++){
        cuadrado = i * i;
        suma += cuadrado; //suma = suma + cuadrado
    }
    std::cout << "El resultado de la suma es: "<<suma << std::endl;

    return 0;

}
#include <iostream>
int main() {
    int numero, suma = 0;

    do {
        std::cout << "digite un numero: ";
        std::cin >> numero;

        if (numero > 0) {
            suma += numero;
        }
    } while ((numero < 20 || numero > 30) && numero != 0);

    std::cout << "\n La suma es: " << suma << std::endl;

    return 0;
}
#include <iostream>
int main (){
    int n, suma = 0;

    std::cout <<"Digite el numero de elementos: ";
    std::cin >> n;

    for (int i=1; i<=n;i++){
        suma += i;
    }
    std::cout << "\n La suma es: " << suma << std::endl;

    return 0;

}

#include <iostream>
int main(){
    int numero, factorial = 1;

    std::cout << "digite un numero: ";
    std::cin >> numero;

    for (int i = 1; i <=numero ; i++) {
        factorial = factorial * i;

    }

    std::cout << "\n El factorial del numero es: " <<factorial<<std::endl;

    return 0;

}*

#include <iostream>
#include <cmath>

int main() {
    int suma = 0, elevacion = 0, n;

    std::cout << "Digite el numero de elementos a sumar: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        elevacion = pow(2, i);
        suma += elevacion;
    }

    std::cout << "\nLa suma total es: " << suma << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int n, x = 0, y = 1;

    std::cout << "Digite el numero de elementos: ";
    std::cin >> n;

    std::cout << "1 ";
    for (int i = 1; i < n; ++i) {
        int z = x + y;
        std::cout << z << " ";
        x = y;
        y = z;
    }
    std::cout << "\n";

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int numero, dato, contador = 0;

    srand(time(NULL)); // GENERAR NUMERO ALEATORIO
    dato = 1 + rand() % 100; // Generar un número aleatorio entre 1 y 100

    do {
        std::cout << "Digite un numero: ";
        std::cin >> numero;

        if (numero > dato) {
            std::cout << "\nDigite un numero menor.\n";
        }
        else if (numero < dato) {
            std::cout << "\nDigite un numero mayor.\n";
        }

        contador++;
    } while (numero != dato);

    std::cout << "\n FELICIDADES ADIVINASTE EL NUMERO! \n";
    std::cout << "Numero de intentos: " << contador << std::endl;

    return 0;
}*/

#include <iostream>
#include <conio.h>
int main (){

    int numeros [] = {1,2,3,4,5};
    int suma = 0;

    for (int i=0; i<5;i++){
        suma += numeros [i];
    }
    std::cout << "La suma de los elementos del vector es: " << suma << std::endl;

    getch();
    return 0;
}




