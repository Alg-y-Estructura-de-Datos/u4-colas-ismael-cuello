/*Crear un programa que solicite números enteros al usuario hasta que desee, almacenar los
números en una cola, pedir también un numero entero "n". Luego crear una función que
recibiendo una cola y un número entero “n”, si el "n" se encuentra en una de las posiciones de
la cola. Devuelva la suma de los elementos de la cola hasta llegar a "n" (sin incluir a n). Si el
número "n" no se encuentra en la cola, la función devuelve la suma de todos los elementos de
la cola. Imprimir primero la cola antes de la suma de sus elementos.
 */

#include "Cola/Cola.h"
#include <iostream>
using namespace std;
int sumaHastaN(Cola<int>cola,int n){
    Cola<int> colaaux;
    bool encontrado = false;
    int suma= 0;
    int valor =0;
    while (!encontrado){
        valor = cola.peek();
        if (valor != n){
            colaaux.encolar(valor);
        } else{
            encontrado = true;
        }
        cola.desencolar();
    }
    while(!colaaux.esVacia()){
        suma += colaaux.peek();
        colaaux.desencolar();
    }

   return suma;
}
int main(){
    Cola<int>cola;
    char caracter;
    while (true) {
        cout << "Ingresa un número entero (o '.' para finalizar): ";
        cin >> caracter;

        // Si el usuario ingresa '.', se detiene el ingreso de datos
        if (caracter == '.') {
            break;
        }

        // Convertimos el carácter a entero si es válido
        if (isdigit(caracter)) {
            cola.encolar(caracter - '0');  // Convertimos el carácter a su valor numérico
        } else {
            cout << "Entrada no válida. Intenta de nuevo." << endl;
        }
    }
    int numero = 0;
    cout << "ingresa un entero " << endl;
    cin >> numero;

   int suma = sumaHastaN(cola,numero);
   cout << "La suma hasta el entero n es " << suma << endl;
}