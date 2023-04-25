#include <iostream>
#include "arreglo1.cpp"
#include "arreglo2.cpp"
#include "arreglo3.cpp"
#include "estructura1.cpp"
#include "estructura2.cpp"
#include "estructura3.cpp"

using namespace std;

int main()
{
    int eleccion1=0, eleccion2=0, eleccion3=0;

    cout << "Se encuentra en el menu elija una opcion" << endl;
    cout << "1. Arreglos" << endl;
    cout << "2. Estructuras" << endl;
    cout << "3. Salir" << endl;
    cin >> eleccion1;

    if (eleccion1==1)
    {
        cout << "Se encuentra en el submenu de arreglos elija una opcion" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cin >> eleccion2;

        if(eleccion2==1)
        {
            Arreglo1();
        }
        if(eleccion2==2)
        {
            Arreglo2();
        }
        if(eleccion2==3)
        {
            Arreglo3();
        }
    }

    if (eleccion1==2)
    {
        cout << "Se encuentra en el submenu de estructuras elija una opcion" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cin >> eleccion3;

        if(eleccion3==1)
        {
            Estructura1();
        }
        if(eleccion3==2)
        {
            Estructura2();
        }
        if(eleccion3==3)
        {
            Estructura3();
        }
    }
    if(eleccion1==3)
    {
        cout << "Programa terminado";
    }
    else
    {
        cout << "Ingrese un numero del 1 al 3";
    }
    return 0;
}