// Czy X miesci sie w przedziale.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x;

	cout << " Witaj tutaj bede sprawdzal czy liczba wprowadzona z twojej klawiatury miesci sie w przedziale [10;20)" << endl
		<< " Podaj jakas liczbe : ";
	cin >> x;
	
	if (10 <= x && x < 20)
		cout << " Brawo twoja liczba znajduje sie w podanym przedziale "  << endl;
	else cout << " Podana liczba nie nalezy do podanego zakresu " << endl;
	system("pause");
    return 0;
}

