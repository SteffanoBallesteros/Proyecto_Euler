//ejercicio 10;

#include <iostream>
using namespace std;
int main() {
	long long sumatoria = 0;
	long long n = 2000000;
	//Para que sume el numero primo 2
	if (n >= 2) {
		sumatoria += 2;
	}

	//Para hacer más rapido el bucle, verificamos numero impares ya que ningun numero par mayor a 2 es primo
	for (long long i = 3; i < n; i+=2) {
		bool bandera = true;
		for (long long j = 3; j*j <= i; j+=2) {
			if (i % j == 0) {
				bandera = false;
			}
		}
		if (bandera) {
			sumatoria += i;
		}
	}
	cout<<"La sumatoria de " << n << " es: " << sumatoria << endl;

	return 0;
}
