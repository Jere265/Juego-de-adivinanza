#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){

	int intento,e,f,g,h;
	int primerdigito = 0;
	int segundodigito = 0;
	int tercerdigito = 0;
	int cuartodigito = 0;
	int posicionescorrectas = 0;
	int numerodeintentos = 1;
	
	int guia[3];
	
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
	
	while (intento != numero){
		
		h = intento % 10;
		intento = intento / 10;
		
		g = intento % 10;
		intento = intento / 10;
		
		f = intento % 10;
		intento = intento / 10;
		
		e = intento % 10;
		intento = intento / 10;
		
		if (a == e){
			primerdigito = 1;
			guia[0] = a;
		}
		
		if (b == f){
			segundodigito = 1;
			guia[1] = b;
		}
		
		if (c == g){
			tercerdigito = 1;
			guia[2] = c;
		}
		
		if (d == h){
			cuartodigito = 1;
			guia[3] = d;
		}
		
		posicionescorrectas = primerdigito + segundodigito + tercerdigito + cuartodigito;
		
		primerdigito = 0;
		segundodigito = 0;
		tercerdigito = 0;
		cuartodigito = 0;
		
		cout << "Posiciones correctas = " << posicionescorrectas << endl;
		
		cin >> intento;
		
		numerodeintentos++;
		
		
		
	}
	
	cout << "adivinaste en " << numerodeintentos << " intentos" << endl;
	
	return 0;
}


