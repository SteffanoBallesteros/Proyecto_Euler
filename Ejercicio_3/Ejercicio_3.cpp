//ejercicio 3: 

#include <iostream>
using namespace std;

int main() {
	long long numero = 600851475143;
	long long limite = numero;
	long long i = 2;
	while(numero > i) { 
		if (numero % i == 0) {
			numero = numero / i;     
		}
		else {
			i++;
		}
	}
	cout << "El factor mas grande de " << limite << " es: " << i << endl;

	return 0;
}