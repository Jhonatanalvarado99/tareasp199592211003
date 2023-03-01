#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

const int ALUMNOS = 10;
const int PARCIALES = 5;
const int MAXIMA_LONGITUD_CADENA = 100;

int main()
{
    srand(getpid());
    char alumnos[ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Alex", "Carlos", "Juan", "Jose", "Jorge", "Ruben", "Daniela", "Alberto", "Walter", "Kimberly"};

    return 0;
}

void facultad_inge()
{
    matriz[0][0] ="Alumnos";
    matriz[0][1] ="Parcial 1";
    matriz[0][2] ="Parcial 2";
    matriz[0][3] ="Examen Final";
    matriz[0][4] ="Actividades";
    matriz[0][5] ="Promedio";

}
