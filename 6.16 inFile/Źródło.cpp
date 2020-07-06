#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int SIZE = 60;
int main()
{
	char filename[60];
	ifstream file;
	cout << "Podaj nazwe pliku: ";
	cin.getline(filename, 60);
	file.open(filename);
	if (!file.is_open())
	{
		cout << "Otwarcie programu " << filename << " nie powiodlo sie :(\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;
	do
	{
		file >> value;
		count++;
		sum += value;
	}while( file.good() != 0 );
	if (file.eof())
	{
		cout << "Koniec pliku.\n";
	}
	else
	{
		cout << "Wystapil blad.\n";
	}
	;
	if (count == 0)
	{
		cout << "Brak elementow";
	}
	else
	{ 
		cout << "Wczytanych elementow: " << count;
		cout << "\nSuma: " << sum;
		cout << "\nSrednia: " << sum / count;
	}
	file.close();
	return 0;
}