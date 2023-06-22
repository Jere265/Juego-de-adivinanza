#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int generar_numero() {
	
	srand(time(0));
	int a = rand() % 10;
	
	srand(time(0) + 1);
	int b = rand() % 10;
	
	srand(time(0) + 2);
	int c = rand() % 10;
	
	srand(time(0) +3);
	int d = rand() % 10;
	
	int numero = a*1000+b*100+c*10+d;
	
	return numero;
}

int main (){
	

//int a, b, c, d;



cout << "a = " << generar_numero() << endl;
cout << "b = " << generar_numero() << endl;
cout << "c = " << generar_numero() << endl;
cout << "d = " << generar_numero() << endl;

return 0;
}


