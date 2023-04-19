#include "Usuarios.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <string>

#define USER "admin"
#define PASS "123456"

using namespace std;

bool LoginUsuarios(){
    string usuario, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system ("cls");
        cout<<"--------------------------"<<endl;
        cout<<"AUTENTICACION DE USUARIOS "<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"codigo de usuario: ";
        getline(cin, usuario);
        cout<<"\nContrasena: ";
        // getline (cin, contra);
        char caracter;
        caracter = getch();
        contra="";

        while (caracter !=13)
        {
            if (caracter !=8)
            {
                contra.push_back(caracter);
                cout<<"*";
            } else
            {
                if (contra.length() > 0)
                {
                    cout<<"\b \b";
                    contra = contra.substr(0, contra.length()-1);
                }
            }
            caracter = getch();
        }

        if (usuario == USER && contra==PASS){
            ingresa=true;
        } else {
            cout<<"\nEl usuario y/o contrasena son incorrectos"<<endl;
            cin.get();
            contador++;
        }
    } while (ingresa==false && contador<3);
    if (ingresa==false){
        cout<<"\nLo siento, no puede ingresar al sistema, sus contrasenas son invalidas o agoto intentos"<<endl;
        cin.get();
    }else {
    cout<<"\n=== Bienvenido al sistema ==="<<endl;
    cin.get();
    }
    return ingresa;
}
