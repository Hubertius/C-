#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch = 'a';
	while ( cin.get(ch) && ch != '@' )
	{
		if (isdigit(ch) != 0)
		{
			continue;
		}
		else
		{
			if ( islower(ch) )
			{
				ch = ch - 32;
				cout << ch;
				continue;
			}
			if ( isupper(ch) )
			{
				ch = ch + 32;
				cout << ch ;
				continue;
			}
			cout << ch;
		}
	}
	return 0;
}