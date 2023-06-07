#include "Menus.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <ctime>

//UsuarioPlanilla traerMenu;
//EmpleadosPlanilla enviarMenuE;
//Puestos enviarMenuP;
//Departamento enviarMenuD;
//Bitacora imprimirBitacora;

string Menus::menuInicial(string nombreUsuario)
{
    string userName = nombreUsuario;
   // system("cls");
    int optEscoger = 0;
    bool repetir = true;
    do
    {
    system("cls");
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|                  !Hola " << userName << "!                  |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t---------------------------------------------\n";
    cout << "\t\t\t| Bienvenido al Sistema de  Laboratorio Clinico|";
    cout << "\n\t\t\t-----------------------------------------------"<<endl;

    cout << "\n\t\t\t1. Menu Catalogos"<<endl;
    cout << "\t\t\t2. Menu Procesos"<<endl;
    cout << "\t\t\t3. Menu Informes"<<endl;
    cout << "\t\t\t4. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
       system("cls");
      // menuCatalogos(userName);
        break;
    }

    case 2:{
        system("cls");
        //menuProcesos(userName);
    break;
    }
    case 3:{
        system("cls");
       // subMenuInformes(userName);
        break;
        }
    case 4:{
             exit(0);
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=4);
}
