#include "funkcjeAgh.h"

#include <iostream>
#include <string>
#include <cstring> 

using namespace std;

double suma(char** param, int dlugosc)			// deklaracja funkcji specjalizowanej
{
	double wynik = 0;							// ustawiamy wynik na 0

	for (int i = 0; i < dlugosc; i++)
	{
		wynik += strlen(param[i]);				// dodajemy do wyniku dlugosc lancucha znakowego i-tego skladnika sumy
		cout << param[i];						// wypisujemy na ekran i-ty skladnik sumy
		if (i + 1 < dlugosc) cout << '+';		// dodajemy plusy miedzy nimi
	}

	cout << '=';

	for (int i = 0; i < dlugosc; i++)
	{
		cout << param[i];						// wypisujemy sklejony ciag znaków
	}

	cout << '(' << wynik << ')' << endl;		// wynik w nawiasie

	return wynik;								// funkcja zwraca wynik
}
