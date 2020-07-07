#include <iostream>

using namespace std;

int main()
{
	char ch = ' ';
	int flag = 0;
	int consonant = 0;
	int vowel = 0;
	int another = 0;
	cout << "Podawaj slowa (wpisanie litery 'q' zakonczy procedure.\n";
	do
	{
		if (ch == ' ')
		{
			flag = 1;
		}
		cin.get(ch);
		if (cin.fail())
		{
			cout << "ERROR";
			cin.clear();
			return 1;
		}
		if (flag == 1 && ch != 'q' )
		{
			if( isalpha(ch) )
			{
				char temp = toupper(ch);
				switch (temp)
				{
					case 'A':
						vowel++;
						break;
					case 'E':
						vowel++;
						break;
					case 'O':
						vowel++;
						break;
					case 'I':
						vowel++;
						break;
					case 'U':
						vowel++;
						break;
					case 'Y':
						vowel++;
						break;
					default:
						consonant++;
						break;
				}
			}
			else
			{
				//cout << ch <<  "\n";
				another++;
			}
			flag = 0;
		}
	}while (ch != 'q');
	cout << consonant << " zaczynajacych sie od spolglosek.\n";
	cout << vowel << " zaczynajacych sie od samoglosek.\n";
	cout << another << " nie zalicza sie do zadnej katgorii.\n";
	return 0;
}