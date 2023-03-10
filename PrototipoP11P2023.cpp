#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define NUMERO_CANDIDATOS 5
#define NUMERO_ANOS 4
#define MAX_VOTOS 1000
#define MIN_VOTOS 0
#define MAXIMA_LONGITUD_CADENA 100

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_ANOS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_ANOS + 1], char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA]);

int main()
{
    int opc;
    bool repetir = true;
    char opcion;

    do
    {
        system ("cls");
        float promedio_partido_1=0;
        float promedio_partido_2=0;
        float promedio_partido_3=0;

        cout<<"COMPARATIVO DE PARTIDOS POLITICOS"<<endl << endl;

        cout<<"Que partido desea calcular?";
        cout<<" "<<endl;
        cout<<"\n\t     1. Partido Republicano";
        cout<<"\n\t     2. Partido Democrata";
        cout<<"\n\t     3. Partido Independiente";
        cout<<" "<<endl;

        cout<<"\n\t INGRESE LA OPCION: "<<endl;

        if (opc==1)
        {
             srand(getpid());
             float matriz_partido_1[NUMERO_CANDIDATOS][NUMERO_ANOS + 1];
             float promedio_partido_1;
             char candidatos_1[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA] = {"Luis", "Carlos", "Umberto", "Jhonatan", "Alex"};
             llenarMatriz(matriz_partido_1);
             promedio_partido_1 = imprimirMatriz(matriz_partido_1, candidatos_1, "Partido Republicano");
        }

        if (opc==2)
        {
            srand(getpid());
             float matriz_partido_2[NUMERO_CANDIDATOS][NUMERO_ANOS + 1];
             float promedio_partido_2;
             char candidatos_2[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA] = {"Pedro", "Juan", "Miguel", "Mario", "Jose"};
             llenarMatriz(matriz_partido_2);
             promedio_partido_2 = imprimirMatriz(matriz_partido_2, candidatos_2, "Partido Democrata");
        }

        if (opc==3)
        {
             srand(getpid());
             float matriz_partido_3[NUMERO_CANDIDATOS][NUMERO_ANOS + 1];
             float promedio_partido_3;
             char candidatos_3[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA] = {"Ruben", "Jordan", "Diego", "Alejandro", "Daniel"};
             llenarMatriz(matriz_partido_3);
             promedio_partido_3 = imprimirMatriz(matriz_partido_3, candidatos_3, "Partido Independiente");
        }

        if (promedio_partido_1 > promedio_partido_2 && promedio_partido_1 > promedio_partido_3)
        {
            cout<<"El partido con el mejor promedio es: " << "Partido Republicano" << "Promedio: " <<promedio_partido_1<<endl;
        } else
        if (promedio_partido_2 > promedio_partido_1 && promedio_partido_2 > promedio_partido_3)
        {
            cout<<"El partido con el mejor promedio es: " << "Partido Democrata" << "Promedio: " <<promedio_partido_2<<endl;
        } else
        if (promedio_partido_3 > promedio_partido_1 && promedio_partido_3 > promedio_partido_2)
        {
            cout<<"El partido con el mejor promedio es: " << "Partido Independiente" << "Promedio: " <<promedio_partido_3<<endl;
        } else
        {
            cout<<"Algunos partidos tienen el mismo promedio " <<endl << endl;
        }
        cout << "Desea otro calculo (s/n) ? ";
        cin>> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);

    return 0;
}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz (float matriz[NUMERO_CANDIDATOS] [NUMERO_ANOS + 1])
    {
      int y, x;
      for(y=0; y < NUMERO_CANDIDATOS; y++)
      {
        float suma = 0;
         for (x = 0; x < NUMERO_CANDIDATOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_VOTOS, MAX_VOTOS);
            suma += (float)calificacion;
            matriz[y][x] = calificacion;
        }
        matriz[y][NUMERO_CANDIDATOS] = promedio;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_CANDIDATOS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_ANOS + 1], char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_ANOS];
    float promedioMenor = matriz[0][NUMERO_ANOS];
    float totalGeneral =0;
    float promedioGeneral = 0;
    char candidatoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char candidatoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy (candidatoPromedioMayor, candidato[0], MAXIMA_LONGITUD_CADENA);
    mempcy (candidatoPromedioMenor, candidatos[0], MAXIMA_LONGITUD_CADENA);
    cout<< nombrePartido <<endl;
    cout<<"(Ano1)=> 2017  (Ano2)=> 2019  (Ano3)=> 2021  (Ano4)=> 2023" << endl;
    imprimirMatrizLinea();
    cout<< setw(9) <<"candidato";
    for (x = 0; x < NUMERO_ANOS; x++)
    {
        cout<< setw(9) <<"Ano" << x + 1;
    }
    cout<< setw(8) <<"Tot" <<endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_ANOS; y++)
    {
            cout<< "!" <<setw(8) << candidatos[y] << "!";
            float suma = 0;
            for (x = 0; x < NUMERO_ANOS; x++)
            {
                int calificacion = matriz[y][x];
                cout<<setw(9) << calificacion << "!";
            }
            float promedio = matriz[y][NUMERO_ANOS];
            totalGeneral += matriz [y][NUMERO_ANOS];
            if (promedio > promedioMayor)
            {
                promedioMayor = promedio;
                memcpy(candidatoPromedioMayor, candidatos[y], MAXIMA_LONGITUD_CADENA);
            }
            if (promedio > promedioMenor)
            {
                promedioMenor = promedio;
                memcpy(candidatoPromedioMenor, candidatos[y], MAXIMA_LONGITUD_CADENA);
            }
            cout<<setw(9) << fixed <<setprecision(2)<<promedio<<"!" <<endl;
            imprimirMatrizLinea();
    }
    promedioGeneral = totalGeneral / NUMERO_CANDIDATOS;
    cout<< "Nota Mayor: " << setw(10) << candidatoPromedioMayor << setw(10) <<promedioMayor <<endl;
    cout<< "Nota Menor: " << setw(10) << candidatoPromedioMenor << setw(10) <<promedioMenor <<endl;
    cout<< "Nota Prom: " << setw(10) << promedioGeneral << endl << endl;
    return promedioGeneral
}
