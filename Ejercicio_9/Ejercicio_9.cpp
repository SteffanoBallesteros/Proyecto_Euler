//ejercicio 9

#include <iostream>
#include<math.h>
using namespace std;

int main() {

	int a = 1;
	bool Band = true;
	while (Band) {
		for (int b = 1; b <= 1000; b++) {
			int a2 = pow(a,2);
			int b2 = pow(b,2);
			int c = 1000-(a + b);
			int c2 = pow(c,2);
			if ((a2 + b2) == c2) {
				int producto = a * b * c;
				cout << a << b << c << endl;
				cout <<"Producto: " << producto << endl;
				Band = false;
			}
		}
		a+=1;
		
	}
}