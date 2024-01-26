#include <iostream>
#include<cstdlib>
#include <math.h>
using namespace std;
void ejercicio1() {
	int arreglo[10];
	int prom = 0;
	double resp = 0;
	srand((unsigned)time(NULL));
	// consiguiendo los datos 
	for (int i = 0; i < 10; i++)
	{
		int random = 100 + (rand() % 401);
		arreglo[i] = random;
		prom += arreglo[i];
		if (i == 0) {
			cout << "[" << arreglo[i] << ", ";
		}
		else if (i > 0 && i < 9) {
			cout << arreglo[i] << ", ";
		}
		else {
			cout << arreglo[i] << "] " << endl;
		}
	}
	prom = prom / 10;
	// for para realizar los calculos 
	for (int i = 0; i < 10; i++) {
		double ref = arreglo[i];
		resp += pow(ref - prom, 2);
	}

	resp /= 10.0;
	resp = sqrt(resp);
	cout << "La desviacion estandar es : " << resp << endl;

}

void ejercicio2() {
	int arreglo[10];
	int numeromenor = 0;
	srand((unsigned)time(NULL));

	// llenando el arreglo y realizando lo pedido 
	for (int i = 0; i < 10; i++)
	{
		int random = -10 + (rand() % 20);
		arreglo[i] = random;
		if (i == 0) {
			cout << "[" << arreglo[i] << ", ";
		}
		else if (i > 0 && i < 9) {
			cout << arreglo[i] << ", ";
		}
		else {
			cout << arreglo[i] << "] " << endl;
		}

	}

	for (int i = 0; i < 10; i++)
	{
		if (arreglo[i] > 0) {
			int ref = arreglo[i];
			if (ref > 0 && ref < arreglo[i + 1] && ref < arreglo [i-1]) {
				numeromenor = numeromenor++;
			}
			
		}

	}



	cout << "Entero minimo faltante es: " << numeromenor << endl;
}

int main()
{
	bool seguir = true;
	while (seguir) {

		cout << "ingrese una opcion" << endl;
		cout << "1. Ejercicio Practico 1 Desviacion Estandar" << endl;
		cout << "2. Ejercicio practico 2 Entero positivo minimo faltante" << endl;
		cout << "3. Ejercicio practico 3 Easy Swap" << endl;
		cout << "4. Salir" << endl;
		int op;
		cin >> op;

		switch (op) {
		case 1:
			ejercicio1();
			break;

		case 2:
			ejercicio2();
			break;

		case 3:
			break;

		case 4:
			seguir = false;
			cout << "Saliendo...";
			break;

		default:
			cout << "Ingrese una opcion correcta" << endl;
			break;
		}
	}





}

