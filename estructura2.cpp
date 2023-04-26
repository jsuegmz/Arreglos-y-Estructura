#include <iostream>
#include <string.h>
#include "estructura2.h"

using namespace std;

void Estructura2()
{
    estudiante estud;
    int edad;
    char nom[30], ape[30], carr[30];

    cout << "Introduzca su nombre: ";
    cin >> nom;
    cout << "Introduzca su apellido: ";
    cin >> ape;
    cout << "Introduzca su carrera: ";
    cin >> carr;
    cout << "Introduzca su edad: ";
    cin >> edad;

    strcpy(estud.nombre, nom);
    strcpy(estud.apellido, ape);
    strcpy(estud.carrera, carr);
    estud.edad = edad;
    
    cout << "Nombre: " << estud.nombre << endl;
    cout << "Apellido: " << estud.apellido << endl;
    cout << "Carrera: " << estud.carrera << endl;
    cout << "Edad: " << estud.edad << endl;

}
