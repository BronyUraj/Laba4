#include "Complex.h"
#include "UsersDefined.h"
#include <math.h>

Complex pow(const Complex& z1, const Complex& z2) {
	Complex result = Complex(exp(z2.Re() * log(z1.R()) - z2.Im() * z1.Phi()), z2.Re() * z1.Phi() + z2.Im() * log(z1.R()));
	return result;
}

Complex y(const Complex& z) {
	return Complex(2) * z + pow(exp(1), Complex(5)) * (Complex(1) + z);
}