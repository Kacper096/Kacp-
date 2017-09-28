// Kolory.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <cstdio>
using namespace std;



int main()
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN |FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_BLUE);
		cout << ("Hello World!") << endl;
		system("pause");
    return 0;
}

