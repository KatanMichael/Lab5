#include "stdafx.h"

#include "Rational.h"
#include <iostream>
using namespace std;

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

int Rational::getM()
{
	return _m;
}

int Rational::getN()
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
Rational& Rational::operator+(Rational rat)
{
	Rational temp;
	int x = 0, y = 0;
	int tempN;

	if (this->_n == rat._n)
	{
		temp.setM(this->_m)->setN(this->_n);
		return temp;
	}
	else
	{
		tempN = this->_n * rat._n;
	}


	return Rational();
}

// (M/N)
Rational& Rational::operator*(Rational inRat)
{
	Rational* ret = new Rational;
	ret->setM(this->_m * (inRat._m))->setN(this->_n * (inRat._n));
	return *ret;
}
