#include "aghFib.h"

using namespace std;

aghFib::aghFib() {}					// konstruktor

int aghFib::fibonacci(int n)		// metoda klasy aghFib do zwracania n-tego wyrazu ciagu fib
{
	if (n == 0) return 0;			// Pierwsze wyrazy ida: 0,1
	if (n == 1) return 1;

	int f1 = 0, f2 = 1;
	int w = 0;

	for (int i = 2; i <= n; i++)
	{
		w = f1 + f2;				// funkcja zrealizowana iteracyjnie z uzyciem zmiennej pomocniczej w i podmiana argumentów
		f1 = f2;
		f2 = w;
	}

	return f2;						// zwracamy dany wyraz ciagu
}