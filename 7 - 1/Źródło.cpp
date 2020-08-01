#include <iostream>
using namespace std;

double srednia_harmoniczna(double x,double y);

int main()
{
	double x, y;
	while (true)
	{
		cout << "Podaj pierwsza liczbe: ";
		cin >> x;
		cout << "Podaj druga liczbe: ";
		cin >> y;
		if (x == 0 || y == 0)
		{
			break;
		}
		else
		{
			cout << srednia_harmoniczna(x, y) << endl;
		}
	}
	return 0;
}

double srednia_harmoniczna(double x, double y)
{
	return 2.0 * x * y / (x + y);
}