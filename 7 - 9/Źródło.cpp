#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;

};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * st);
void display3(const student pa[], int n);

int main()
{
	const int n = 3;
	student table[n];
	getinfo(table, n);
	for (int i = 0; i < n; i++)
	{
		cout << "Odczyt " << i + 1 << " studenta dla funkcji z przekazywana struktura przez wartosc." << endl;
		display1(*(table + i));
		cout << "Odczyt " << i + 1 << " studenta dla funkcji z przekazywana struktura przez jej adres." << endl;
		display2(table + i);
	}
	display3(table, n);
	cout << "THE END";
	return 0;
}

int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << i + 1 << " struktura\n";
		cout << "Podaj imie i nazwisko studenta: ";
		cin.getline(pa[i].fullname, 30);
		if (pa[i].fullname == " ")
		{
			break;
		}
		cout << "Podaj hobby studenta: ";
		cin >> pa[i].hobby;
		cout << "Podaj ooplevel: ";
		cin >> pa[i].ooplevel;
		cin.ignore();
	}
	return i;

}
void display1(student st)
{
	cout << "Imie i nazwisko studenta: " << st.fullname << endl;
	cout << "Hobby studenta: " << st.hobby << endl;
	cout << "Jego ooplevel: " << st.ooplevel << endl;
}


void display2(const student * ps)
{
	cout << "Imie i nazwisko studenta: " << ps->fullname << endl;
	cout << "Hobby studenta: " << ps->hobby << endl;
	cout << "Jego ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << (pa + i)->fullname << endl;
		cout << (pa + i)->hobby << endl;
		cout << (pa + i)->ooplevel << endl;
	}
}