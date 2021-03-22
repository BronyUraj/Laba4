#include "Complex.h"
#include <iostream>
#define PI 3.14159265


using namespace std;

int main() {
	Complex comp1 = Complex(10, PI / 10);
	Complex comp2 = Complex(1, PI / 12);
	cout << comp1.Re() << " + " << comp1.Im() << "i" << endl;
	cout << comp2.Re() << " + " << comp2.Im() << "i" << endl;
	Complex sumcomp = comp1 / comp2;
	cout << sumcomp.Re() << " + " << sumcomp.Im() << "i" << endl;
	return 0;
}