// Lab05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Rational.h"
#include <iostream>
using namespace std;


int main()
{
	Rational x(1, 2);
	Rational y(2, 3);

	Rational z;

	z = x + 1;

	cout << z.getM() << "/" << z.getN() << endl;



	}

