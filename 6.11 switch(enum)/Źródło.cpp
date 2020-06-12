#include <iostream>

using namespace std;

enum color{red,  orange, yellow,  green,  blue,  violet, indigo};

int main()
{
	cout << "Podaj kod koloru (0-6): ";
	int code;
	if ( !(cin >> code) )
	{
		cout << "Incorrect input";
		return 1;
	}
	switch (code)
	{
		case red:
			cout << "Masz wlosy koloru czerwonego!" << endl;
			break;
		case orange:
			cout << "Masz wlosy pomaranczowe!" << endl;
			break;
		case yellow:
			cout << "Masz wlosy koloru zoltego!" << endl;
			break;
		case green:
			cout << "Masz wlosy koloru zielonego!" << endl;
			break;
		case violet:
			cout << "Jej oczy byly fiolkowe!" << endl;
			break;
		case indigo:
			cout << "Byla w nastroju indigo!" << endl;
			break;
		default:
			cout << "Twoj wybor nie jest w zakresie od 0 do 6!" << endl;
	}
	cout << "KONIEC";
	return 0;
}