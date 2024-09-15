/*
 Crear una función que reciba una cola por referencia y un número. Dicha función debe: Eliminar
todas las ocurrencias de dicho número, menos la primera. Si dicho número no se repite, deja la
cola como esta. Si dicho número no está en la cola, debe anunciar un mensaje de error. Imprimir
la cola al final para verificar si hubo o no modificaciones.
  */
#include <iostream>
#include "Cola/Cola.h"
using namespace std;
void eliminarOcurrencias(Cola<int>cola,int n){

    Cola<int> aux;
    int contador = 0;
    while (!cola.esVacia()){
        int valor = 0;
        valor = cola.peek();
        if (valor == n){
            contador++;

        }
        aux.encolar(valor);

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

    eliminarOcurrencias(cola,n);


}
