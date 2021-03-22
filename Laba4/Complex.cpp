#include "Complex.h"
#include <math.h>
	

Complex::Complex() {
	this->r = this->phi = 0;
}

Complex::Complex(double r) {
	this->r = r;
	this->phi = 0;
}

Complex::Complex(double r, double phi) {
	this->r = r;
	this->phi = phi;
}

	double Complex::R() const {
		return this->r;
	}

	double Complex::Phi() const {
		return this->phi;
	}

	double Complex::Re() const {
		return this->r * cos(this->phi);
	}

	double Complex::Im() const {
		return this->r * sin(this->phi);
	}

	Complex::operator double() {
		return this->Re();
	}

	Complex Complex::operator+(const Complex& rhs) {
		Complex result;
		result.r = sqrt(pow((this->Re() + rhs.Re()), 2) + pow((this->Im() + rhs.Im()), 2));
		result.phi = atan((this->Im() + rhs.Im()) / (this->Re() + rhs.Re()));
		return result;
	}
	Complex Complex::operator-(const Complex& rhs) {
		Complex result;
		result.r = sqrt(pow((this->Re() - rhs.Re()), 2) + pow((this->Im() - rhs.Im()), 2));
		result.phi = atan((this->Im() - rhs.Im()) / (this->Re() - rhs.Re()));
		return result;
	}
	Complex Complex::operator*(const Complex& rhs) {
		Complex result;
		result.r = this->r * rhs.r;
		result.phi = this->phi + rhs.phi;
		return result;
	}
	Complex Complex::operator/(const Complex& rhs) {
		Complex result;
		result.r = this->r / rhs.r;
		result.phi = this->phi - rhs.phi;
		return result;
	}
