#include "Complex.h"
#include "UsersDefined.h"
#include <iostream>
#define PI 3.14159265
using namespace std;

int main() {
	Complex arg = Complex(1.2, PI / 3);
	Complex result = y(arg);
	cout << result.Re() << " + (" << result.Im() << ")i" << endl;
	return 0;
}