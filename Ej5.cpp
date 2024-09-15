/*
 Implementar una función que reciba una cola de números enteros y una pila entera vacía, y
separe los elementos de la cola de tal manera que los elementos pares de la cola permanezcan
en la cola, y los elementos impares formen parte de la pila.
Observaciones:
● Al insertar los elementos en la pila, deberán aparecer en orden inverso a como estaban
en la cola: el elemento de la posición 1 de la cola estará al fondo de la pila, el de la
posición 3 será el segundo desde el fondo, etc.
● Si la cola estuviera vacía mostrar mensaje de error.
 */
#include <iostream>
#include "Cola/Cola.h"
#include "Pila/Pila.h"
using namespace std;
void paresImpares(Cola<int>cola,Pila<int>pila){
    Cola<int> aux;
    int numero=0;
    while(!cola.esVacia()){
        numero = cola.peek();
        if(numero % 2 ==0){
            pila.push(numero);
        } else{
            aux.encolar(numero);
        }
        cola.desencolar();
    }
    cout << "La cola quedo.." << endl;
    while (!aux.esVacia()){
        cout << aux.peek() << "-->";
        aux.desencolar();
    }
    cout << "La pila quedo.." << endl;
    while (!pila.esVacia()){
        cout << pila.pop() << endl;
        cout << "---";
    }
}
int main(){
    Cola<int> cola;
    Pila<int> pila;
    cola.encolar(1);
    cola.encolar(3);
    cola.encolar(2);
    cola.encolar(4);
    cola.encolar(5);
    cola.encolar(8);

    paresImpares(cola,pila);
}