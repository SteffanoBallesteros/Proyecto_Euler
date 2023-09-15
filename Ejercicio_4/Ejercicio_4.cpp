//ejercicio 4:

#include <iostream>
using namespace std;

int main() { 
	int numero = 0;
	int palindromo_largo = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			int producto = i * j;
			if (producto > palindromo_largo) {
				numero = producto;
				int palindromo = 0;

				while (numero > 0) {
					int resto = numero % 10;
					palindromo = palindromo * 10 + resto;
					numero /= 10;
				}
				if (producto == palindromo) {
					palindromo_largo = producto;
				}
			}
		}
	}
	cout << "El palindromo más grande que se obtiene del producto de dos numero de tres digitos es: " << palindromo_largo << endl;
	
	return 0;
}