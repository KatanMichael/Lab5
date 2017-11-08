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

	_m = m;
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
	return this;
}

