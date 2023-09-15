//ejercicio 5

#include <iostream>
using namespace std;

int main() {
	long long resultado = 1;

	for (int i = 1; i <= 20; i++) {
		long long max_comun_div = 1;
		int small = (resultado < i) ? resultado : i; //condicional ternario para evaluar la condicion, si es verdadero toma el valor resultado, sino toma el valor de i
		for (int j = 1; j <= small; j++) {
			if (resultado % j == 0 && i % j == 0) {
				max_comun_div = j;
			}
		}

		resultado = (resultado * i) / max_comun_div;
	}

	cout << "El número positivo más pequeño divisible por todos los números de 1 a 20 es: " << resultado << endl;

	return 0;
}

//Plus 
/*Comprobar si el numero 232792560 es divisible por todos los numero del 1 al 20
#include <iostream>
using namespace std; 

int main() {
	long long numero = 232792560;
	for (int i = 1; i <= 20; i++) {
		int resultado = 0;
		resultado = numero / i;
		cout << resultado << endl;
	}
	return 0;
}*/
