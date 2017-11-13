
class Rational
{
private:
	int _m;
	int _n;

	void minNum();

	public:

	Rational();
	Rational(int, int);
	~Rational();

	int getM();
	int getN();

	Rational* setM(int m);
	Rational* setN(int n);

	Rational& operator+(Rational);
	Rational & operator*(Rational inRat);
	Rational& operator/(Rational inRat);

};