#include <iostream>

using namespace std;

void saludar(void);
void menu(void);
void mostrarResultado(int resultado);
int sumar (int a, int b);
int restar (int a, int b);
int dividir (int a, int b);
int multiplicar (int a, int b);

int main()
{
    int resultado, a, b, seleccion;
    saludar();
    cin>>a>>b;
    menu ();
    cin>>seleccion;

    switch (seleccion)
    {
    case 1: resultado=sumar(a,b);
    break;
    case 2: resultado=restar(a,b);
    break;
    case 3: resultado=dividir(a,b);
    break;
    case 4: resultado=multiplicar(a,b);
    break;
    }
    mostrarResultado(resultado);

    return 0;
}
void mostrarResultado(int resultado)
{
    cout<<"El resultado es: "<<resultado<<endl;
    return;
}

void saludar(void)
{
    cout<<"Hola, bienvendido"<<endl;
    cout<<"ingresa dos numeros"<<endl;

    return;
}

void menu(void)
{
    cout<<"Que operacion deseas realizar"<<endl;
    cout<<"1) Suma"<<endl;
    cout<<"2) resta"<<endl;
    cout<<"3) division "<<endl;
    cout<<"4) multiplicacion"<<endl;

    return;
}


int sumar(int a, int b)
{
    return (a+b);
}

int restar(int a, int b)
{
    return (a-b);
}

int dividir(int a, int b)
{
    return (a/b);
}

int multiplicar(int a, int b)
{
    return (a*b);
}
