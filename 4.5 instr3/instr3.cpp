#include <iostream>
using namespace std;

int main()
{
    // cin.getline() odczytuje znak nowego wiersza i zastępuje go znakiem '\0'.
    // cin.get() odczytuje wszystko aż do napotkania znaku nowego wiersza, jednak w porównaniu do cin.getline() nie wczytuje go zastępując
    // znakiem '\0', lecz ZOSTAWIA znak nowego wiersza w kolejce wejściowej.
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Podaj swoje imie: ";
    cin.get(name, Arsize).get(); // cin.get(name, Arsize) == wczytanie znaku nowego wiersza, dodanie do tego .get() spowoduje wczytanie tegoż też znaku.
    // ZAPIS ALTERNATYWNY
    // cin.get(name, Arsize);
    // cin.get();
    cout << "Podaj swoj ulubiony deser: ";
    cin.get(dessert, Arsize).get();
    cout << "Mam dla ciebie deser " << dessert << ", " << name << ".";


    return 0;
}
