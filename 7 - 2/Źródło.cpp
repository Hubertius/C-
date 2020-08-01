#include <iostream>
using namespace std;

int functions(double array[], int size = 10);

int main()
{
	double array[10];
	double* pointer = array;
	int check = functions(pointer);
	double srednia = 0;
	for (int i = 0; i < check; i++)
	{
		cout << array[i] << " ";
		srednia += array[i];
	}
	cout << "\n" << "Srednia: " << srednia;
	return 0;
}

int functions(double array[],int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << "Podaj " << i + 1 << " wartosc: ";
		cin >> array[i];
		if (cin.fail() == true)
		{
			cout << "ERROR!" << endl;
			cin.clear();
			cin.ignore();
			return -1;
		}
		if (i < size - 1)
		{
			cout << "Czy chcesz opuscic program (Y/N)? ";
			char choice;
			cin >> choice;
			if (choice == 'Y')
			{
				break;
			}
			else if (choice == 'N')
			{
				continue;
			}
			else
			{
				cout << "Podales inny znak niz Y/N. Program bedzie dalej kontynuowal swoja prace." << endl;
			}
		}

	}
	return i;
}