#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
int generar_numero() {
	
	9876/ 
	
	return numero;
}
*/

int main (){

	int intento,e,f,g,h;
	int primerdigito = 0;
	int segundodigito = 0;
	int tercerdigito = 0;
	int cuartodigito = 0;
	int posicionescorrectas = 0;
	
	srand(time(0));
	int a = rand() % 10;
	
	srand(time(0) + 1);
	int b = rand() % 10;
	
	srand(time(0) + 2);
	int c = rand() % 10;
	
	srand(time(0) +3);
	int d = rand() % 10;
	
	int numero = a*1000+b*100+c*10+d;

	cout << "numero = " << numero << endl;
	
	cin >> intento;
	cout << "intento = " << intento << endl;
	
	h = intento % 10;
	intento = intento / 10;
	
	g = intento % 10;
	intento = intento / 10;
	
	f = intento % 10;
	intento = intento / 10;
	
	e = intento % 10;
	intento = intento / 10;
	
	cout << "e = " << e << endl;
	cout << "f = " << f << endl;
	cout << "g = " << g << endl;
	cout << "h = " << h << endl;
	
	if (a == e){
		primerdigito = 1;
	}
	
	if (b == f){
		segundodigito = 1;
	}
	
	if (c == g){
		tercerdigito = 1;
	}
	
	if (d == h){
		cuartodigito = 1;
	}
	
	cout << "primer digito = " << primerdigito << endl;
	cout << "segundo digito = " << segundodigito << endl;
	cout << "tercer digito = " << tercerdigito << endl;
	cout << "cuarto digito = " << cuartodigito << endl;
	
	posicionescorrectas = primerdigito + segundodigito + tercerdigito + cuartodigito;
	
	cout << "Posiciones correctas = " << posicionescorrectas << endl;
	
	return 0;
}


