#include <iostream>

using namespace std;
struct pudlo
{
	char producent[40] = "Asia Mrozowska";
	float wysokosc = 2.5;
	float szerokosc = 3.5;
	float dlugosc = 15.3;
	float objetosc;
};

void  function_with_value(pudlo something);
void  function_wtih_adress(pudlo * something);

int main()
{
	pudlo structure;
	cout << "Przekazanie struktury do funkcji przez wartosc:" << endl;
	function_with_value(structure);
	cout << "Przekazazanei struktury do funkcji przez jej adres:" << endl;
	function_wtih_adress(&structure);
	return 0;
}

void function_with_value(pudlo something)
{
	cout << something.producent << endl;
	cout << something.wysokosc << endl;
	cout << something.szerokosc << endl;
	cout << something.dlugosc << endl;
	cout << something.dlugosc * something.wysokosc * something.szerokosc << endl;
}

void function_wtih_adress(pudlo * something)
{
	cout << something->producent << endl;
	cout << something->wysokosc << endl;
	cout << something->szerokosc << endl;
	cout << something->dlugosc << endl;
	cout << something->dlugosc * something->wysokosc * something->szerokosc << endl;
}