// Zadanie nr.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int liczba;
	float suma = 0;

	cout << " Tutaj bede dodawal 5 liczb, ale tylko parzyste. Jednak mozesz tez wpisywac nieparzyste. " << endl;

	for (int i = 1; i < 6; i++)
	{
		cout << " Podaj " << i << " liczbe " ;
		cin >> liczba;
		if ((liczba % 2) == 0)
			suma += liczba;
	}

	cout << " Suma 5 liczb parzystych wynosi: "
		<< suma << endl;
	system("pause");


    return 0;
}

