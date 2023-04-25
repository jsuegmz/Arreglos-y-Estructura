#include <iostream>
using namespace std;


int Arreglo3()
{
    char tabla[5][10];

    tabla[0][0] = 'L';
    tabla[0][1] = 'a';
    tabla[0][2] = 'p';
    tabla[0][3] = 'i';
    tabla[0][4] = 'z';

    tabla[1][0] = 'B';
    tabla[1][1] = 'o';
    tabla[1][2] = 'r';
    tabla[1][3] = 'r';
    tabla[1][4] = 'a';
    tabla[1][5] = 'd';
    tabla[1][6] = 'o';
    tabla[1][7] = 'r';

    tabla[2][0] = 'R';
    tabla[2][1] = 'e';
    tabla[2][2] = 'g';
    tabla[2][3] = 'l';
    tabla[2][4] = 'a';
    tabla[2][5] = ' ';

    tabla[3][0] = 'T';
    tabla[3][1] = 'a';
    tabla[3][2] = 'j';
    tabla[3][3] = 'a';
    tabla[3][4] = 'd';
    tabla[3][5] = 'o';
    tabla[3][6] = 'r';
    
    tabla[4][0] = 'M';
    tabla[4][1] = 'o';
    tabla[4][2] = 'c';
    tabla[4][3] = 'h';
    tabla[4][4] = 'i';
    tabla[4][5] = 'l';
    tabla[4][6] = 'a';

   for(int fila = 0; fila < 5; fila++) {
      for(int columna = 0; columna < 10; columna++) {
         cout << tabla[fila][columna] << " ";
      }
      cout << endl;
   }
}