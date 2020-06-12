#include <iostream>

using namespace std;

int main()
{
	const int Max = 5;
	int golf[Max];
	cout << "Prosze podac 5 swoich wynikow w golfie.\n";
	for (int i = 0; i < Max; i++)
	{
		if( !(cin >> golf[i]) )
		{
			cout << "Incorrect input!\n";
			cin.clear(); // Zerowanie obiektu cin, aby w przyszłości chodził poprawnie.
			while (cin.get() != '\n')
			{
				continue;
			}
			i--;
		}
	}

	return 0;
}