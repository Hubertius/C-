#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "Podaj nazwe pliku: ";
	char filename[30];
	cin.getline(filename, 30);
	ifstream f;
	f.open(filename);
	if ( !f.is_open() )
	{
		cout << "Blad! Takowy plik nie istnieje!\n";
		exit(EXIT_FAILURE);
	}
	char character = 'a';
	int count = 0;
	do
	{
		f >> character;
		//cout << character;
		count++;
	}while ( f.good() );
	count--;
	cout << "Liczba znakow: " << count;
	f.close();
	return 0;
}