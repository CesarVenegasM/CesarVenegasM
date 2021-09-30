#include <iostream>
#include <cstdlib>
#include <ctime>

/*
* Problema 79 capitulo 5
*
*  Encontrar el promedio de 1,000 números tomados al azar.
*
*  Realizar un programa que determine el promedio de 1000 numeros tomados al azar
*/

//autor @CesarVenegasM
//Fecha 16 de Septiembre del 2021

using namespace std;

int main() {
    int ArrayRandom[1000];
    int SumaArray=0;
    float Promedio;

    srand(time(NULL));

    for(int i=0; i < 1000; i++)
        {
         ArrayRandom[i] = rand() % 100;
         SumaArray = SumaArray + ArrayRandom[i];
        }
    
   // Demostrativo solamente de almacenamiento de los numeros aleatorios

    for (int i = 0; i < 1000; i++)
    {
        cout << ArrayRandom[i] << " ";
    }

    Promedio = SumaArray / 1000;

    cout << "Promedio: " << Promedio;

    return 0;
}