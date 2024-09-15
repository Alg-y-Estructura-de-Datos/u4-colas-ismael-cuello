/*
 Implementar una función que suprima de la cola todos los elementos mayores que un número
 “n” dado como límite. Al final se debe imprimir la cola depurada sin perder el orden que había
 desde la cola original.
  */
#include <iostream>
#include "Cola/Cola.h"
using namespace std;
void suprimir(Cola<int>cola,int n){

    Cola<int> aux;

    while (!cola.esVacia()){
        int valor = 0;
        valor = cola.peek();
        if (valor<=n){
                aux.encolar(valor);
        }
        cola.desencolar();
    }

    while (!aux.esVacia()){
        cout << aux.peek() << endl;
        cola.encolar(aux.desencolar());

    }

}
int main() {
    Cola<int> cola;
    int n;
    cola.encolar(2);
    cola.encolar(4);
    cola.encolar(6);
    cola.encolar(8);
    cola.encolar(10);

    cout << "Entero que limite la cola" << endl;
    cin >> n;

    suprimir(cola,n);


}
