#include "stdafx.h"

#include "Rational.h"
#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;

void Rational::minNum()
{
	int temp;
	temp = _n / _m;

	
}

// (M/N) 
Rational::Rational()
{
	_m = 1;
	_n = 1;
}


// (M/N) 
Rational::Rational(int m, int n)
{
	if (n == 0)
	{
		cout << "n cannot be 0... n is 1" << endl;
		_n = 1;
	}
	else
	{
		this->_n = n;
	}

	_m = m;
}

Rational::~Rational()
{
}

Rational::Rational(const Rational& inRat)
{
	this->_m = inRat.getM();
	this->_n = inRat.getN();
}

const Rational & Rational::operator=(const Rational & inRat)
{
	Rational temp(inRat);
	return temp;
}

int Rational::getM() const
{
	return _m;
}

int Rational::getN() const
{
	return _n;
}

Rational * Rational::setM(int m)
{
	_m = m;
	return this;
}

Rational * Rational::setN(int n)
{
	if (n == 0)
	{
		cout << "n cannot be 0.. keeping old value" << endl;
	}
	else
	{
		this->_n = n;
	}

	return this;
}


// (M/N) 
Rational& Rational::operator+(const Rational rat) const
{
	Rational temp;
	int x = 0, y = 0;
	int tempN;

	if (this->_n == rat._n)
	{
		temp.setM(this->_m + rat.getM())->setN(this->_n);
		temp.minimize();
		return temp;
	}
	else
	{
		tempN = this->_n * rat._n;
	}

	temp.minimize();
	return temp;
}

// (M/N)
Rational& Rational::operator*(const Rational inRat) const
{
	Rational* ret = new Rational;
	ret->setM(this->_m * (inRat._m))->setN(this->_n * (inRat._n));

	ret->minimize();
	return *ret;
}

// (/M/N)
Rational & Rational::operator/(const Rational inRat) const
{
	Rational temp;
	int x;
	x = this->_m * inRat.getN();
	temp.setM(x);
	x = this->_n * inRat.getM();
	temp.setN(x);

	temp.minimize();
	return temp;

}

// (M/N)
Rational & Rational::operator+ (const int num) const
{
	Rational temp;
	int x;
	
	x = this->_m + (num * this->_n);
	temp.setM(x);
	temp.minimize();
	return temp;
}

Rational & Rational::operator*=(const Rational& inRat)
{
	Rational temp;
	this->_m = this->_m * inRat._m;
	this->_n = this->_n * inRat._n;

	return *this;
}

int Rational:: gcd(int a, int b)
{
	int temp, GCD;
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (int i = b; i>0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			GCD = i;
			return GCD;
		}
	}

}

void Rational::minimize()
{
	int num;
	num = gcd(this->_m, this->_n);

	setM(this->_m / num);
	setN(this->_n / num);

}

// (M/N)
ostream & operator<<(ostream &output, const Rational& inRat)
{
	output << inRat.getM() << "/" << inRat.getN() << endl;

	return output;
}

istream& operator >>(istream&is, Rational &A)
{
	int x;
	is >> A._m;
	is >> x;

	A._n = x;

	
	A.minimize();
	return is;
}
