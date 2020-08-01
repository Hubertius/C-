#include <iostream>
using namespace std;

double add(double x, double y);
double substract(double x, double y);
double calculate(double x, double y, double (*p)(double x, double y));

int main()
{
	
	int choice;
	bool check = false;
	do
	{
		cout << "Wybierz, czy chcesz dokonywac operacji na add albo substract. 0/1\n";
		cin >> choice;
		if(cin.fail() == true)
		{
			cout << "Error! Please write again you choice.\n";
			cin.clear();
			cin.ignore();
			check = true;
		}
		else if (choice < 0 || choice > 1)
		{
			cout << "Error! Please write again you choice.\n";
			check = true;
		}
		else
		{
			check = false;
		}
	}while(check);
	cout << "Podaj liczby: ";
	double x, y;
	cin >> x >> y;
	double score;
	if (choice == 0)
	{
		score = calculate(x, y, add);
	}
	else
	{
		score = calculate(x, y, substract);
	}
	cout << "Wynik: " << score << endl;;
	cout << "THE END";
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double calculate(double x, double y, double (*p)(double x, double y))
{
	double (*pf[2])(double x, double y) = { add,substract };
	double value;
	if (p == add)
	{
		value = pf[0]( x, y);
	}
	else
	{
		value = pf[1]( x, y);
	}
	return value;
}

double substract(double x, double y)
{
	return x - y;
}