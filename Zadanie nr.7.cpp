// Zadanie nr.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n,suma=0 ;

	cout << " Tutaj bede zliczal liczby nieparzyste do danej licz ustalonej przez Ciebie. " << endl
		<< " Podaj liczbe: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		if ((i % 2) == 1)
			suma += i;
	}
	cout << suma << endl;
	system("pause");

    return 0;
}

