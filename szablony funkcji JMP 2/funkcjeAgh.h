#include <iostream>

using namespace std;

double suma(char** param, int dlugosc);			// deklaracja funkcji specjalizowanej dla sumy


template <class type_1>							// definicja szablonu sumy
double suma(type_1 param, int dlugosc)
{
	double wynik = 0;							// poczatkowo wynik = 0

	for (int i = 0; i < dlugosc; i++)
	{
		wynik += param[i];						// dodajemy do wyniku i-ty skladnik sumy
		cout << param[i];						// wypisujemy go na ekran
		if (i + 1 < dlugosc) cout << '+';		// dopisujemy +
	}

	cout << '=' << wynik << endl;				// gdy skonczymy wypisywac skladniki sumy i zapamietywac wynik, wypisujemy '='

	return wynik;								// funkcja zwraca wynik
}