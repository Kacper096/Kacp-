// Zadanie nr.6.a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<cstdlib>
#include <iostream>
using namespace std;


/***********************************************************/
void change(long long liczba, int oct)
{
	if (liczba > 0)
	{
		change(liczba / oct,oct);

		if (liczba % oct > 7)

		{
			int b = liczba % oct;
			b += 2;
			cout << b;
		}


		else
			cout << liczba % oct;
		
	}
}
/*********************************************************/


int main()
{
	long long liczba;
	int oct = 8;

	cout << " Podaj liczbe ktora chcesz zmienic na system osemkowy " ;
	cin >> liczba;
	cout << " Ta liczba to " ;

	if (liczba == 0)
		cout << 0;


	else	
		 change (liczba, oct);
	cout << endl;

	system("pause");
    return 0;
}


