// Lab05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Rational.h"
#include <iostream>
using namespace std;


int main()
{
	Rational x(1, 8);
	Rational y(3, 8);

	Rational z;

	z = x + y;

	cout << z.getM() << "/" << z.getN() << endl;



}

