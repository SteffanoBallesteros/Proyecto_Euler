// ejercicio 2: Sumas pares de la serie fibonacci, si se suma el termino n + (n+1) no debe pasar de 4000000
#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 1, aux;
	int suma = 0;
	for (int i = 1; y < 4000000; i++) { 
		aux = x + y;
		x = y;
		y = aux;
		//cout << aux << " ";
		if (aux % 2 == 0) {
			suma += aux;
		}
	}
	cout << "\nLa suma total es: " << suma << endl;

	return 0;
}