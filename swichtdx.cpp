//
// Created by joeli on 7/11/2026.
//

#include <iostream>
using namespace std;

int main() {

    float num1, num2; // Variables donde guardaremoslos numeros
    int opcion; // Aqui guardamos la operacion que el querido y estamod username elija

    cout << "CALCULADORA" << endl;

    // Mostramos las operaciones disponibles obvi
    cout << "\n1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;

    cout << "\nElige una operacion: ";
    cin >> opcion; // Guardamos la opcion seleccionada para utilozarala en la operacion

    cout << "Ingresa el primer numero: ";
    cin >> num1; // Guardamos el primer numero

    cout << "Ingresa el segundo numero: ";
    cin >> num2; // Guardamos el segundo numero

    // Revisamos que operacion eligio el usuario para realizarla
    switch (opcion) {

        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            break; // Termina este caso para que no continue con los demas

        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            break;

        case 4:
            // Comprobamos que el segundo numero no sea cero, recordemos que valdria kk
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            }
            else {
                cout << "No se puede dividir entre cero." << endl;
            }
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0; // Termina el programa, hace snap y endgame
}
