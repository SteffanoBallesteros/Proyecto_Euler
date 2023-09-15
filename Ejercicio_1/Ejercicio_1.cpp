//ejercicio 1 :3
#include <iostream>
using namespace std;

int main() {
	int i = 0;
	int suma = 0;
	while (i < 1000) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			suma += i;
		}
		i++;
	}

	cout << "La suma total es " << suma << endl;
	return 0;
}
