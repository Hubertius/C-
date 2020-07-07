#include <iostream>
#include <array>
using namespace std;

int main()
{
	array <double, 10> table;
	double sum = 0.0;
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe: ";
		double value;
		cin >> value;
		if (cin.fail())
		{
			cin.clear();
			break;
		}
		table[i] = value;
		sum += table[i];
	}
	sum /= i;
	cout << "Srednia: " << sum << "\n";

	for (int j = 0; j < i; j++)
	{
		if (table[j] > sum)
		{
			cout << table[j] << " ";
		}
	}
	return 0;
}