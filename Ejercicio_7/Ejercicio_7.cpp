//ejercicio 7

#include <iostream>
using namespace std;

int main() {
	int contador = 0;
	long long numero = 2;

	while (true) {
		bool esPrimo = true;
		for (long long i = 2; i <= numero/2; i++){ //Logica para saber si es num primo o no
			if (numero % i == 0) {
				esPrimo = false;
				break;
			}
		}

		if (esPrimo) {
			contador++;
			if (contador == 10001) {
				cout << "El 10001º numero primo es: " << numero << endl;
				break;
			}
		}

		numero++;
	}

	return 0;
}