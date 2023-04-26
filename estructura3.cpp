#include <iostream>
#include <string.h>
#include "estructura3.h"

using namespace std;

void Estructura3()
{
    atleta atl[5];
    int edad;
    char nom[30], ape[30], dep[30];

    for (int i = 0; i < 5; i++)
    {
    cout << "Atleta " << i+1 << endl;
    cout << "Introduzca el nombre: ";
    cin >> nom;
    cout << "Introduzca el apellido: ";
    cin >> ape;
    cout << "Introduzca el deporte que practica: ";
    cin >> dep;
    cout << "Introduzca el edad: ";
    cin >> edad;

    strcpy(atl[i].nombre, nom);
    strcpy(atl[i].apellido, ape);
    strcpy(atl[i].deporte, dep);
    atl[i].edad = edad;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Atleta " << i+1 << endl;
        cout << "Nombre: " << atl[i].nombre << endl;
        cout << "Apellido: " << atl[i].apellido << endl;
        cout << "Deporte: " << atl[i].deporte << endl;
        cout << "Edad: " << atl[i].edad << endl;
    }

}
