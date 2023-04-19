#include "Catalogos.h"
    #include<iostream>
    #include<fstream>
    #include<stdlib.h>
    #include<cstdlib>
    #include<conio.h>
    #include<iomanip>

using namespace std;
void catalogo()
{
     int opcion;
	char x;
	do
    {
	system("cls"); //Limpia pantalla

    //Menú para el modificación e ingreso de Jugadores
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |   Catalogos  |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Altas de empleados"<<endl;
	cout<<"\t\t\t 2. Bajas de empleados"<<endl;
	cout<<"\t\t\t 3. Modificaciones de empleados"<<endl;
	cout<<"\t\t\t 4. Consulta de empleados"<<endl;
	cout<<"\t\t\t 5. Salir del Menu"<<endl;

	cout<<"\t\t\t---------------------------------------"<<endl;

	cout<<"Ingresa una Opcion: ";
    cin>>opcion;

     switch(opcion)
    {
    case 1:
        altas();
		break;
	case 2:
		bajas();
		break;
	case 3:
		modificarEmpleados();
		break;
	case 4:
		consultaEmpleados();
		break;
	case 5:
		exit(0);
		default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		}
	getch();
    }while(opcion!= 5);


}

void altas()
{
    system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Agregar Empleado ----------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngresa Nombre del Empleado     : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Direccion Del Empleado : ";
	cin>>direccion;
	cout<<"\t\t\tIngresa Estado del Empleado           : ";
	cin>>estado;


	//Abre archivo y luego lo ve al final de la salida
	file.open("Empleados.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< direccion <<std::left<<std::setw(15)<< estado << "\n";
	file.close();   //Cierra el archivo
}

void bajas()
{
    system("cls");
	fstream file,file1;
	string empleados_id;
	int found=0;
	cout<<"\n-------------------------Detalles del Empleado que desea borrar-------------------------"<<endl;
	file.open("Empleados.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el nombre del empleado que desea borrar: ";
		cin>>empleados_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> nombre >> direccion >> estado ;
		while(!file.eof())
		{
			if(empleados_id!= nombre)
			{
				file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< direccion <<std::left<<std::setw(15)<< estado << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado del Empleado exitoso";
			}
			file >> nombre >> direccion >> estado;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Nombre del empleado no encontrado...";
		}
		file1.close();
		file.close();
		remove("Empleado.txt");
		rename("Record.txt","Empleado.txt");
	}

}

void modificarEmpleados()
{
system("cls");
	fstream file,file1;
	string empleado_id;
	int found=0;
	cout<<"\n------------------------- \"Modificacion Detalles Jugador\" -------------------------"<<endl;
	file.open("Empleados.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el nombre del Empleado que desea modificar: ";
		cin>>empleado_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> nombre >> direccion >> estado;
		while(!file.eof())
		{
			if(empleado_id!=nombre)
			{
			 file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< direccion <<std::left<<std::setw(15)<< estado<< "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese el nombre del empleado: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese la direccion: ";
				cin>>direccion;
				cout<<"\t\t\tIngrese el estado: ";
				cin>>estado;
                file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< direccion <<std::left<<std::setw(15)<< estado << "\n";
				found++;
			}
			file >> nombre >> direccion >> estado;

		}
		file1.close();
		file.close();
		remove("Jugador.txt");
		rename("Record.txt","Jugador.txt");
	}
}


void consultaEmpleados()
{
system("cls");  //limpia pantalla
	fstream file;   //crea
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Jugador -------------------------"<<endl;
	file.open("Empleados.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> nombre >> direccion >> estado;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Nombre del empleado: "<<nombre<<endl;
			cout<<"\t\t\t Direccion del empleado: "<<direccion<<endl;
			cout<<"\t\t\t estado del empleado: "<<estado<<endl;
			file >> nombre >> direccion >> estado;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay empleados...";
		}
	}
	file.close();
}
