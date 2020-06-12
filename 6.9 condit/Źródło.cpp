#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Podaj dwie liczby calkowite: ";
	cin >> a >> b;
	cout << "Wieksza z liczb a = " << a << " i b = " << b << " to: ";      
	int c = a > b ? a : b;
	cout << c;
	return 0;
}