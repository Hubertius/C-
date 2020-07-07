#include <iostream>
using namespace std;
int main()
{
	cout << "a) roslinozerca		b) pianista\nd) drzewo		g) gra\n";
	char ch;
	do
	{
		cout << "Prosze podac litere r, p, d, g: ";
		cin >> ch;
	} while (ch != 'r' && ch != 'd' && ch != 'g' && ch != 'p');
	switch (ch)
	{
		case 'r':
			cout << "Niektore dinozaury tez sa roslinozerne.";
			break;
		case 'd':
			cout << "Klon tez jest drzewem.";
			break;
		case 'g':
			cout << "Gothic I ukazal sie w Polsce w 2001 roku.";
			break;
		case 'p':
			cout << "Wladyslaw Szpilman byl pianista.";
			break;

	}
	return 0;
}