//ejercicio 6

#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n = 100;
	//Logica para hallar la suma de los cuadrados de n numero naturales
	long long sumador = 0;
	for (int i = 1; i <= n; i++) {
		sumador += pow(i, 2);
	}

	cout << "El resultado la suma de los cuadrados de " << n << " es: " << sumador << endl;

	//Logica para hallar el cuadrado de la suma de n numeros naturales

	long long sumador_2 = 0;
	for (int i = 1; i <= n; i++) {
		sumador_2 += i;
	}
	long long resultado = pow(sumador_2, 2);

	cout << "El resultado del cuadrado de la suma de " << n << " es: " << resultado << endl;

	//Diferencia de entre la suma de los cuadrados de los primeros n números naturales y el cuadrado de la suma.
	int diferencia = resultado - sumador;
	cout << "La diferencia entre la suma de los cuadrados de los primeros " << n << " numero naturales y el cuadrado de la suma es: " << diferencia << endl;
	return 0;
}