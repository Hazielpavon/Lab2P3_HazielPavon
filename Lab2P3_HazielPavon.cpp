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
	// aca solo se hace una comparacion
	int numeromenor = 1;
	bool nofaltaalguno;
	for (int i = 0; i < 10; i++) {
		if (arreglo[i] == numeromenor) {
			numeromenor++;
		}
	}
	cout << "No hay ningun numero entero positivo faltante en el arreglo." << endl;

}
// el swap que agarra el valor +1 de a y -1 de b
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
// metodo recursivo que le quita y suma a los valores a y b
// el contador esta en 3 ya que solo 3 veces necesita iteracion 
void recursivo(int arr[], int a, int b, int cont) {
	if (cont == 0) {
		
	}
	else {
		swap(arr[a], arr[b]);
		recursivo(arr, a + 1, b - 1, cont - 1);
	}
}

void ejercicio3() {
	int arreglo[7] = { 1, 2, 3, 4, 5, 6, 7 };

	cout << "Arreglo inicial" << endl;

	for (int i = 0; i < 7; i++) {
		if (i == 6) {
			cout << arreglo[i] << endl;
		}
		else {
			cout << arreglo[i] << ",";
		}
	}
	cout << "Arreglo Modificado" << endl;
	recursivo(arreglo, 0, 6, 3);
	for (int i = 0; i < 7; i++) {
		if (i == 6) {
			cout << arreglo[i] << endl;
		}
		else {
			cout << arreglo[i] << ",";
		}
	}
	cout << "" << endl;
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
			ejercicio3();
			break;

		case 4:
			seguir = false;
			cout << "Saliendo";
			break;

		default:
			cout << "Ingrese una opcion correcta" << endl;
			break;
		}
	}
}

