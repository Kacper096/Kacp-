// Zadanie nr.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	
	cout << " Zadanie nr.10. Obliczanie wzoru dla kazdego X calkowitego nalezacego do przedzialu [1;10]" << endl;

	for (int x = 1; x <= 10; x++)
	{
		long double wynik = 0;

		wynik = (1 / 4)*sqrt(x + 2) - exp(3 * x + M_PI_2);
		cout << wynik << endl;
	}
	
	system("pause");
    return 0;
}

