#include "menuPrincipal.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

int busquedaAleatoriospr(int minimopr, int maximopr)
{
    return minimopr + rand() / (RAND_MAX / (maximopr - minimopr + 1) + 1);
}

void llenarMatrizpr(float matrizpr[NUMERO_CANDIDATOSpr][NUMERO_ANOSpr + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOSpr; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_ANOSpr; x++)
        {
            int calificacionpr = busquedaAleatoriospr(MIN_CALIFICACIONpr, MAX_CALIFICACIONpr);
            suma += (float)calificacionpr;
            matrizpr[y][x] = calificacionpr;
        }
        // Agregar promedio
        float promediopr = suma / NUMERO_ANOSpr;
        matrizpr[y][NUMERO_ANOSpr] = promediopr;
    }
}

void imprimirMatrizLineapr()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_ANOSpr + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatrizpr(float matrizpr[NUMERO_CANDIDATOSpr][NUMERO_ANOSpr + 1], char candidatospr[NUMERO_CANDIDATOSpr][MAXIMA_LONGITUD_CADENApr])
{

    int y, x;
    float promedioMayorpr = matrizpr[0][NUMERO_ANOSpr];
    float promedioMenorpr = matrizpr[0][NUMERO_ANOSpr];
    char candidatoPromedioMayorpr[MAXIMA_LONGITUD_CADENApr];
    char candidatoPromedioMenorpr[MAXIMA_LONGITUD_CADENApr];
    memcpy(candidatoPromedioMayorpr, candidatospr[0], MAXIMA_LONGITUD_CADENApr);
    memcpy(candidatoPromedioMenorpr, candidatospr[0], MAXIMA_LONGITUD_CADENApr);

    imprimirMatrizLineapr();
    cout << setw(9) << "Candidato";

    cout << setw(9) << "2017";

    cout << setw(8) << "2019"  ;

    cout << setw(8) << "2021"  ;

    cout << setw(8) << "2023"  ;

    cout << setw(8) << "Prom" << endl;

    imprimirMatrizLineapr();
    for (y = 0; y < NUMERO_ANOSpr; y++)
    {
        cout << "!" << setw(8) << candidatospr[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANOSpr; x++)
        {
            int calificacionpr = matrizpr[y][x];
            cout << setw(9) << calificacionpr << "!";
        }
        float promediopr = matrizpr[y][NUMERO_ANOSpr];
        if (promediopr > promedioMayorpr)
        {
            promedioMayorpr = promediopr;
            memcpy(candidatoPromedioMayorpr, candidatospr[y], MAXIMA_LONGITUD_CADENApr);
        }
        if (promediopr < promedioMenorpr)
        {
            promedioMenorpr = promediopr;
            memcpy(candidatoPromedioMenorpr, candidatospr[y], MAXIMA_LONGITUD_CADENApr);
        }
        cout << setw(9) << fixed << setprecision(2) << promediopr << "!" << endl;
        imprimirMatrizLineapr();
    }
    cout << "Promedio mayor: " << setw(10) << candidatoPromedioMayorpr << " Nota: " << setw(10) << promedioMayorpr << endl;
    cout << "Promedio menor: " << setw(10) << candidatoPromedioMenorpr << " Nota: " << setw(10) << promedioMenorpr << endl;
    }





int busquedaAleatoriospd(int minimopd, int maximopd)
{
    return minimopd + rand() / (RAND_MAX / (maximopd - minimopd + 1) + 1);
}

void llenarMatrizpd(float matrizpd[NUMERO_CANDIDATOSpd][NUMERO_ANOSpd + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOSpd; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_ANOSpd; x++)
        {
            int calificacionpd = busquedaAleatoriospd(MIN_CALIFICACIONpd, MAX_CALIFICACIONpd);
            suma += (float)calificacionpd;
            matrizpd[y][x] = calificacionpd;
        }
        // Agregar promedio
        float promediopd = suma / NUMERO_ANOSpd;
        matrizpd[y][NUMERO_ANOSpd] = promediopd;
    }
}

void imprimirMatrizLineapd()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_ANOSpd + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatrizpd(float matrizpd[NUMERO_CANDIDATOSpd][NUMERO_ANOSpd + 1], char candidatospd[NUMERO_CANDIDATOSpd][MAXIMA_LONGITUD_CADENApd])
{

    int y, x;
    float promedioMayorpd = matrizpd[0][NUMERO_ANOSpd];
    float promedioMenorpd = matrizpd[0][NUMERO_ANOSpd];
    char candidatoPromedioMayorpd[MAXIMA_LONGITUD_CADENApd];
    char candidatoPromedioMenorpd[MAXIMA_LONGITUD_CADENApd];
    memcpy(candidatoPromedioMayorpd, candidatospd[0], MAXIMA_LONGITUD_CADENApd);
    memcpy(candidatoPromedioMenorpd, candidatospd[0], MAXIMA_LONGITUD_CADENApd);

    imprimirMatrizLineapd();
    cout << setw(9) << "Candidato";

    cout << setw(9) << "2017";

    cout << setw(8) << "2019"  ;

    cout << setw(8) << "2021"  ;

    cout << setw(8) << "2023"  ;

    cout << setw(8) << "Prom" << endl;

    imprimirMatrizLineapr();
    for (y = 0; y < NUMERO_ANOSpd; y++)
    {
        cout << "!" << setw(8) << candidatospd[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANOSpd; x++)
        {
            int calificacionpd = matrizpd[y][x];
            cout << setw(9) << calificacionpd << "!";
        }
        float promediopd = matrizpd[y][NUMERO_ANOSpr];
        if (promediopd > promedioMayorpd)
        {
            promedioMayorpd = promediopd;
            memcpy(candidatoPromedioMayorpd, candidatospd[y], MAXIMA_LONGITUD_CADENApd);
        }
        if (promediopd < promedioMenorpd)
        {
            promedioMenorpd = promediopd;
            memcpy(candidatoPromedioMenorpd, candidatospd[y], MAXIMA_LONGITUD_CADENApd);
        }
        cout << setw(9) << fixed << setprecision(2) << promediopd << "!" << endl;
        imprimirMatrizLineapd();
    }
    cout << "Promedio mayor: " << setw(10) << candidatoPromedioMayorpd << " Nota: " << setw(10) << promedioMayorpd << endl;
    cout << "Promedio menor: " << setw(10) << candidatoPromedioMenorpd << " Nota: " << setw(10) << promedioMenorpd << endl;
    }

int busquedaAleatoriospi(int minimopi, int maximopi)
{
    return minimopi + rand() / (RAND_MAX / (maximopi - minimopi + 1) + 1);
}

void llenarMatrizpi(float matrizpi[NUMERO_CANDIDATOSpi][NUMERO_ANOSpi + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOSpi; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_ANOSpi; x++)
        {
            int calificacionpi = busquedaAleatoriospi(MIN_CALIFICACIONpi, MAX_CALIFICACIONpi);
            suma += (float)calificacionpi;
            matrizpi[y][x] = calificacionpi;
        }
        // Agregar promedio
        float promediopi = suma / NUMERO_ANOSpi;
        matrizpi[y][NUMERO_ANOSpi] = promediopi;
    }
}

void imprimirMatrizLineapi()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_ANOSpi + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

   void imprimirMatrizpi(float matrizpi[NUMERO_CANDIDATOSpi][NUMERO_ANOSpi + 1], char candidatospi[NUMERO_CANDIDATOSpi][MAXIMA_LONGITUD_CADENApi])
{

    int y, x;
    float promedioMayorpi = matrizpi[0][NUMERO_ANOSpi];
    float promedioMenorpi = matrizpi[0][NUMERO_ANOSpi];
    char candidatoPromedioMayorpi[MAXIMA_LONGITUD_CADENApi];
    char candidatoPromedioMenorpi[MAXIMA_LONGITUD_CADENApi];
    memcpy(candidatoPromedioMayorpi, candidatospi[0], MAXIMA_LONGITUD_CADENApi);
    memcpy(candidatoPromedioMenorpi, candidatospi[0], MAXIMA_LONGITUD_CADENApi);

    imprimirMatrizLineapi();
    cout << setw(9) << "Candidato";

    cout << setw(9) << "2017";

    cout << setw(8) << "2019"  ;

    cout << setw(8) << "2021"  ;

    cout << setw(8) << "2023"  ;

    cout << setw(8) << "Prom" << endl;

    imprimirMatrizLineapi();
    for (y = 0; y < NUMERO_ANOSpi; y++)
    {
        cout << "!" << setw(8) << candidatospi[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANOSpi; x++)
        {
            int calificacionpi = matrizpi[y][x];
            cout << setw(9) << calificacionpi << "!";
        }
        float promediopi = matrizpi[y][NUMERO_ANOSpi];
        if (promediopi > promedioMayorpi)
        {
            promedioMayorpi = promediopi;
            memcpy(candidatoPromedioMayorpi, candidatospi[y], MAXIMA_LONGITUD_CADENApi);
        }
        if (promediopi < promedioMenorpi)
        {
            promedioMenorpi = promediopi;
            memcpy(candidatoPromedioMenorpi, candidatospi[y], MAXIMA_LONGITUD_CADENApi);
        }
        cout << setw(9) << fixed << setprecision(2) << promediopi << "!" << endl;
        imprimirMatrizLineapr();
    }
    cout << "Promedio mayor: " << setw(10) << candidatoPromedioMayorpi << " Nota: " << setw(10) << promedioMayorpi << endl;
    cout << "Promedio menor: " << setw(10) << candidatoPromedioMenorpi << " Nota: " << setw(10) << promedioMenorpi << endl;
    }

    void opciones()
    {

    if(opc==1)
    {
    srand(getpid());
    float matrizpr[NUMERO_CANDIDATOSpr][NUMERO_ANOSpr + 1];
    char candidatospr[NUMERO_CANDIDATOSpr][MAXIMA_LONGITUD_CADENApr] = {"Candidato Felix","Candidato Umberto", "Candidato Jhonatan", "Candidato Alfonso", "Candidato Luis"};
    llenarMatrizpr(matrizpr);
    imprimirMatrizpr(matrizpr, candidatospr);
    }


    if(opc==2)
    {
 srand(getpid());
    float matrizpd[NUMERO_CANDIDATOSpd][NUMERO_ANOSpd + 1];
    char candidatospd[NUMERO_CANDIDATOSpd][MAXIMA_LONGITUD_CADENApd] = {"Candidato Yerin","Candidato Jordan", "Candidata Ana", "Candidata Elizabeth", "Candidato Tomas"};
    llenarMatrizpd(matrizpd);
    imprimirMatrizpd(matrizpd, candidatospd);
    }

     if(opc==3)
    {
 srand(getpid());
    float matrizpi[NUMERO_CANDIDATOSpi][NUMERO_ANOSpi + 1];
    char candidatospi[NUMERO_CANDIDATOSpi][MAXIMA_LONGITUD_CADENApi] = {"Candidato Darwin","Candidato Pablo", "Candidata Marisol", "Candidato Elder", "Candidato Arturo"};
    llenarMatrizpi(matrizpi);
    imprimirMatrizpi(matrizpi, candidatospi);
    }

        cout<<"\n Desea Continuar (S/N)? ";
		cin>>inicio;
	}
