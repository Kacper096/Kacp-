// Zadanie nr.5.c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include<iostream>
#include <cmath>
using namespace std;


int main()
{
	float a = 1,
		b = 4,
		c = 4;
	float d, x0;

	cout << " Witam tutaj bede obliczal trzeci trojmian z zadania domowego nr.5." << endl;

	d = pow(b, 2) - 4 * a*c;

	if (d == 0)
	{
		x0 = ((-b) / (2 * a));
		cout << " Wynik tego tromianu jest tylko jeden " << endl
			<< " X0 = " << x0 << endl;

	}

	system("pause");
    return 0;
}

