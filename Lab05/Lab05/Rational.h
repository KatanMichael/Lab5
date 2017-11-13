
class Rational
{
private:
	int _m;
	int _n;

	void minNum();

	int gcd(int, int);
	void minimize();

	public:

	Rational();
	Rational(int, int);
	~Rational();

	int getM() const;
	int getN() const;

	Rational* setM(int m);
	Rational* setN(int n);

	Rational& operator+(const Rational) const;
	Rational & operator*(const Rational) const;
	Rational& operator/(const Rational) const;
	Rational& operator + (const int) const;


};