/*
 Diseñe un programa que sea capaz de leer dos colas y mediante un mensaje indicar si son
 iguales. Nota: los elementos constitutivos de las colas son caracteres.

 */

#include <iostream>
#include "Cola/Cola.h"
using namespace std;
bool mostrarYcomparar(Cola<char>cola1,Cola<char>cola2){
    Cola<char>aux;
    bool iguales = false;

    while (!cola1.esVacia() && !cola2.esVacia()){
        if (cola1.peek() != cola2.peek()) {
            return false;
        }
        cola1.desencolar();
        cola2.desencolar();
    }
    return cola1.esVacia() && cola2.esVacia();
}
int main() {
    Cola<char> cola1;
    Cola<char>cola2;

    cola1.encolar('a');
    cola1.encolar('b');
    cola1.encolar('c');
    cola1.encolar('d');

    cola2.encolar('a');
    cola2.encolar('b');
    cola2.encolar('c');
    cola2.encolar('d');

    if (mostrarYcomparar(cola1,cola2)){
            cout << "las colas son iguales" << endl;
        }else{
            cout << "no son iguales " << endl;
        }

}
