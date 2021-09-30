#include <iostream>

/*
* Problema 71 capitulo 5
*
*  Se tienen 27 libros diferentes y dos libreros, uno de los cuales contiene exactamente 13 libros y el otro 14.
  ¿De cuántas maneras pueden distribuirse los libros en los libreros? .
*
*  Realizar un programa que determine las combinaciones de 2 libreros con un total de 27 libros, tomando en cuenta
*  de forma individual una combinacion de 13 y 14 libros con respecto a los 2 libreros
*/

//autor @CesarVenegasM
//Fecha 22 de Septiembre del 2021

using namespace std;

int main() {
	int i;
	int numero = 14;
	int numero2 = 2;
	int numero3 = 13;

	int x,x1;
	double factr = 1;
	double fact = 1;
	double  fact3 = 1;
	int fact2 = 1;
	double fact4 = 1;
	
	int c = 0, c2,c3, y,c4,cr;



	if (numero < 0) { fact = 0; }
	else if (numero == 0) { fact = 1; }
	else {
		for (i = 1; i <= numero; i++) {
			fact = fact * i;
		}
	}

	if (numero2 < 0) { fact2 = 0; }
	else if (numero2 == 0) { fact2 = 1; }
	else {
		for (x = 1; x <= numero2; x++) {
			fact2 = fact2 * x;
		}
	}

	if (numero3 < 0) { fact4 = 0; }
	else if (numero3 == 0) { fact4 = 1; }
	else {
		for (x1 = 1; x1 <= numero3; x1++) {
			fact4 = fact4 * x1;
		}
	}

	//C2 es una variable que tiene el objetivo ser la resta de N y R 
	//dentro de la primera combinacion y determinar el factorial
	c2 = numero - numero2;

	if (c2 < 0) { fact3 = 0; }
	else if (c2 == 0) { fact3 = 1; }
	else {
		for (y = 1; y <= c2; y++) {
			fact3 = fact3 * y;
		}
	}

	//C3 es una variable que tiene el objetivo ser la resta de N y R 
	//dentro de una la segunda combinacion y determinar el factorial
	c3 = numero3 - numero2;

	if (c3 < 0) { factr = 0; }
	else if (c3 == 0) { factr = 1; }
	else {
		for (y = 1; y <= c3; y++) {
			factr = factr * y;
		}
	}

	//Formula Primer Combinacion 
	c = fact / (fact3 * fact2);

	//Formula segunda Combinacion 
	c4 = fact4 / (factr * fact2);

	//Calculo de combinaciones totales
	cr = c * c4;
	
	
	cout << "La primer combinacion es: " << c << endl;

	cout << "La segunda combinacion es: " << c4 << endl;

	cout << "Las combinaciones totales son " << cr << endl;


	return 0;
}