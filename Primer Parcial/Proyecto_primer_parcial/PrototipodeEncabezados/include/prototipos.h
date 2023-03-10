#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H


const int NUMERO_CANDIDATOSpr = 5;
const int NUMERO_ANOSpr =4;
const int MAX_CALIFICACIONpr = 1000;
const int MIN_CALIFICACIONpr = 0;
const int MAXIMA_LONGITUD_CADENApr = 100;

const int NUMERO_CANDIDATOSpd = 5;
const int NUMERO_ANOSpd =4;
const int MAX_CALIFICACIONpd = 1000;
const int MIN_CALIFICACIONpd = 0;
const int MAXIMA_LONGITUD_CADENApd = 100;

const int NUMERO_CANDIDATOSpi = 5;
const int NUMERO_ANOSpi =4;
const int MAX_CALIFICACIONpi = 1000;
const int MIN_CALIFICACIONpi = 0;
const int MAXIMA_LONGITUD_CADENApi = 100;

int busquedaAleatoriospi(int minimopi, int maximopi);
void llenarMatrizpi(float matrizpi[NUMERO_CANDIDATOSpi][NUMERO_ANOSpi + 1]);
void imprimirMatrizLinea();
void imprimirMatrizpi(float matrizpi[NUMERO_CANDIDATOSpi][NUMERO_ANOSpi + 1], char candidatospi[NUMERO_CANDIDATOSpi][MAXIMA_LONGITUD_CADENApi]);

int busquedaAleatoriospd(int minimopd, int maximopd);
void llenarMatrizpd(float matriz[NUMERO_CANDIDATOSpd][NUMERO_ANOSpd + 1]);
void imprimirMatrizLinea();
void imprimirMatrizpd(float matriz[NUMERO_CANDIDATOSpd][NUMERO_ANOSpd + 1], char candidatospd[NUMERO_CANDIDATOSpd][MAXIMA_LONGITUD_CADENApd]);


int busquedaAleatoriospr(int minimopr, int maximopr);
void llenarMatrizpr(float matrizpr[NUMERO_CANDIDATOSpr][NUMERO_ANOSpr + 1]);
void imprimirMatrizLinea();
void imprimirMatrizpr(float matrizpr[NUMERO_CANDIDATOSpr][NUMERO_ANOSpr + 1], char candidatopr[NUMERO_CANDIDATOSpr][MAXIMA_LONGITUD_CADENApr]);


#endif // PROTOTIPOS_H
