// Zadanie nr.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n,suma=0 ;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		if ((i % 2) == 1)
			suma += i;
	}
	cout << suma;
	system("pause");

    return 0;
}

