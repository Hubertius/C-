#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char automobile[50];
	int year;
	double price;
	ofstream outFile;
	outFile.open("Endingfile.txt");
	cout << "Podaj marke i model auta: ";
	cin.getline(automobile, 50);
	cout << "Podaj rok produkcji auta: ";
	cin >> year;
	cout << "Podaj cene wyjsciowa: ";
	cin >> price;
	outFile << "Marka i model: " << automobile << endl;
	outFile << "Rok: " << year << endl;
	outFile << "Cena wywolawcza: " << price << endl;
	outFile.close();
	return 0;
}