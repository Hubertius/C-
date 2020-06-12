#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	cout << "Write text to analise it, finish with '@' letter.\n";
	char character;
	int whitespace = 0;
	int digits = 0;
	int letters = 0;
	int punct = 0;
	int others = 0;
	cin.get(character);
	while (character != '@')
	{
		if ( isalpha(character) )
		{
			letters++;
		}
		else if ( isspace(character))
		{
			whitespace++;
		}
		else if (isdigit(character))
		{
			digits++;
		}
		else if (ispunct(character))
		{
			punct++;
		}
		else
		{
			others++;
		}
		cin.get(character);
	}
	cout<< "Letters: " << letters << endl
		<< "Whitespaces: " << whitespace << endl
		<< "Digits: " << digits << endl
		<< "Dots and commas: " << punct << endl
		<< "Others signs: " << others << endl;

	return 0;
}