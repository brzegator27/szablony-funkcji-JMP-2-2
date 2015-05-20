#pragma once
class aghFib											 // definicja klasy
{
private:
	int fibonacci(int);
public:
	aghFib();

	int operator [](int i) { return fibonacci(i); }		// przeladowanie operatora [], co umozliwia skorzystanie z sumy
};