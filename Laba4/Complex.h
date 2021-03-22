	class Complex {
	private:
		double r;
		double phi;
	public:
		Complex();
		Complex(double r);
		Complex(double r, double phi);
		double Re() const;
		double Im() const;
		double R() const;
		double Phi() const;
		explicit operator double();
		Complex operator+(const Complex &rhs);
		Complex operator-(const Complex &rhs);
		Complex operator*(const Complex &rhs);
		Complex operator/(const Complex &rhs);

	};