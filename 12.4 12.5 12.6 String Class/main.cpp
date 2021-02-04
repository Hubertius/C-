#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    String name;
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << name << ", write into " << ArSize << " 10 short proverbs.\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for(i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while(cin && cin.get() != '\n')
        {
            continue;
        }
        if(!cin || temp[0] == '\0')
        {
            break;
        }
        else
        {
            sayings[i] = temp;
        }
    }
    int total = i;
    if( total > 0 )
    {
        cout << "Yours proverbs.\n";
        for(i = 0; i < total; i++)
        {
            cout << i + 1 << ": " << sayings[i] << endl;
        }
        int shortest = 0;
        int first = 0;
        for(i = 1; i < total; i++)
        {
            if( sayings[i].length() < sayings[shortest].length() )
            {
                shortest = i;
            }
            if( sayings[i] < sayings[first] )
            {
                first = i;
            }
        }
        cout << "The shortest proverb: " << sayings[shortest] << endl;
        cout << "The proverb first as aplphabetic: " << sayings[first] << endl;
        cout << "Program used " << String::HowMany() << " objects of class \"String\"." << endl;

    }
    else
    {
        cout << "No data!" << endl;
    }

    return 0;
}