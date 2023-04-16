#include <iostream>
#include "Menus.h"

using namespace std;

int main()
{
     int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tSISTEMA DE NOMINA" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Ingreso de Datos" << endl;
        cout << "\t2. Busquedad de Datos" << endl;
        cout << "\t3. Modificacion de Datos" << endl;
        cout << "\t4. Borrar Datos" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            Menus menuDatos();
            break;

        case 2:
            Menus menuSecciones ();
            break;

        case 3:
            Menus menuSecciones ();
            break;

        case 4:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
    return 0;
}

