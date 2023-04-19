#include "MenuGeneral.h"
#include "Catalogos.h"
#include<iostream>
    #include<fstream>
    #include<stdlib.h>
    #include<cstdlib>
    #include<conio.h>
    #include<iomanip>

using namespace std;

using namespace std;

void MenuPrincipal()
{
    int opcion;

    do
    {
	system("cls");

	cout<<"Jhonatan Armando Alvarado Castro"<<endl;
	cout<<"9959-22-11003"<<endl;
	cout<<"\t\t\t----------------------"<<endl;
	cout<<"\t\t\t |   Menu Principal  |"<<endl;
	cout<<"\t\t\t----------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Informes"<<endl;
	cout<<"\t\t\t 3. Salir del Menu"<<endl;

	cout<<"\t\t\t-----------------------"<<endl;

	cout<<"Ingresa una Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:
        catalogo();
		break;
	case 2:
		Informes();
		break;
	case 3:
		exit(0);
		default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		}
	getch();
    }while(opcion!= 3);

}

void Informes()
{

}
