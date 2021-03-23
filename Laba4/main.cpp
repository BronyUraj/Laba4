#include "Complex.h"
#include "UsersDefined.h"
#include <iostream>
#define PI 3.14159265
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double argRe;
	double argIm;
	cout << "Введите модуль комплексного числа: ";
	cin >> argRe;
	cout << "Введите аргумент комплексного числа: ";
	cin >> argIm;
	Complex arg = Complex(argRe, argIm);
	Complex result = y(arg);
	cout << "y(z) = " << result.Re() << " + (" << result.Im() << ")i" << endl;
	return 0;
}