#include <iostream>
#include <string.h>
#include "estructura1.h"

using namespace std;

void Estructura1();

void Estructura1()
{
    dispositivo disp;
    strcpy(disp.tipo, "Telefono Celular");
    strcpy(disp.modelo, "Xiaomi Poco X3");
    disp.precio = 300;

    cout << "EL dispositivo es un: " << disp.tipo << endl;
    cout << "El modelo del dispositivo es: " << disp.modelo << endl;
    cout << "El precio del dispositivo es: $" << disp.precio << endl;
}