#include <iostream>
#include<cstdlib>
using namespace std;


void ejercicio1() {
	int arreglo[10]; 
	int prom = 0; 
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random = 100 + (rand() % 401);
		arreglo[i] = random; 
		prom += arreglo[i];
		if (i == 0) {
			cout << "[" << arreglo[i] << ", ";
		}else if (i > 0 && i < 9) {
			cout << arreglo[i] << ", ";
		}else {
			cout  << arreglo[i] << "] " << endl;
		}
		
	}
	prom = prom / 10; 
	cout << prom << endl; 

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

