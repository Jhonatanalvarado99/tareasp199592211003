#include <iostream>
#include "prototipos.h"


int opc;
char inicio;

using namespace std;
int main()
{
    cout<<"\n\t***Bienvenidos al programa de gestion de partidos politicos**";
    cout<<" "<<endl;

    do {
    cout<<"Que partido desea calcular?";
    cout<<" "<<endl;
    cout<<"\n\t     1. Partido Republicano";
    cout<<"\n\t     2. Partido Democrata";
    cout<<"\n\t     3. Partido Independiente";

    cout<<"\n INGRESE LA OPCION: "<<endl;
    cin>>opc;

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
	} while ((inicio=='S')||(inicio=='s'));
		cout<<"\n\t QUE TENGA UN EXCELENTE DIA!!"<<endl;
}
