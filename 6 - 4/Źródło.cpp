#include <iostream>
#include <cstring>

using namespace std;

struct zpdw
{
	string imie;
	string stanowisko;
	string pseudozpw;
	int preferencje;
};

int main()
{
	zpdw tablica[5];
	tablica[0].imie =  "Wiktor Starzynski";
	tablica[0].stanowisko = "Programista";
	tablica[0].pseudozpw = "HakerX";
	tablica[0].preferencje = 0;
	tablica[1].imie = "Hubert Olszewski";
	tablica[1].stanowisko = "Programista";
	tablica[1].pseudozpw = "TigerBonzo";
	tablica[1].preferencje = 1;
	tablica[2].imie = "Wiktor Starzynski";
	tablica[2].stanowisko = "Programista";
	tablica[2].pseudozpw = "Zdzisiek Marysiek";
	tablica[2].preferencje = 2;
	tablica[3].imie = "Antoni Stachurski";
	tablica[3].stanowisko = "Programista";
	tablica[3].pseudozpw = "Kononowicz";
	tablica[3].preferencje = 0;
	tablica[4].imie = "Bogdan Miloszewski";
	tablica[4].stanowisko = "Programista";
	tablica[4].pseudozpw = "MisGumis";
	tablica[4].preferencje = 1;
	char choice = 'a';
	do
	{
		cout << "Wybierz jedna z opcji: ";
		cin >> choice;
		if ( cin.fail() )
		{
			cout << "Blad!";
			cin.clear();
			break;
		}
		;
		if (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd')
		{
			for (int i = 0; i < 5; i++)
			{
				if (choice == 'a')
				{
					cout << tablica[i].imie << "\n";

				}
				else if (choice == 'b')
				{
					cout << tablica[i].stanowisko << "\n";
				}
				else if (choice == 'c')
				{
					cout << tablica[i].pseudozpw << "\n";
				}
				else
				{
					if (tablica[i].preferencje == 0)
					{
						cout << tablica[i].imie << "\n";
					}
					else if (tablica[i].preferencje == 1)
					{
						cout << tablica[i].stanowisko << "\n";
					}
					else
					{
						cout << tablica[i].pseudozpw << "\n";
					}
				}
			}
		}
	}while (choice != 'q');


	return 0;
}