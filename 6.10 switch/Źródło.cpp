#include <iostream>

using namespace std;

int main()
{
	cout << "Wybierz 1,2,3,4 albo 5:" << endl
		<< "1) alarm" << endl
		<< "2) raport" << endl
		<< "3) alibi" << endl
		<< "4) luzik" << endl
		<< "5) koniec" << endl;
	int wybor;
	cin >> wybor;
	if (wybor < 1 || wybor > 5)
	{
		cout << "Incorrect input";
		return 1;
	}
	switch (wybor)
	{
	case 1:
		cout << "\a\n";
		break;
	case 2:
		cout << "To byl naprawde wspanialy tydzien.\n"
			 << "Sprzedarz wzrosla o 120%, wydatki zmalaly o 35%.\n";
		break;
	case 3:
		cout << "Szef nigdzie nie wychodzil!" << endl;
		break;
	case 4:
		cout << "Jest wspaniale!\n";
		break;
	case 5:
		cout << "Nie ma takiej opcji!\n";
		break;
	default:
		cout << "Nie powinienes nawet tutaj wejsc!" << endl;
	}
	cout << "KONIEC";
	return 0;
}