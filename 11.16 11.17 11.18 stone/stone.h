#ifndef STONE_H_
#define STONE_H_

class Stone
{
  private:
    enum {Lbs_per_stn = 14}; // liczba funtów na kamień
    int stone;  // masa w całych kamieniach
    double pds_left; // reszta w funtach
    double pounds; // masa w funtach
  public:
    Stone(double lbs); // konstruktor dla funtów
    Stone(int stn, double lbs); // konstruktor dla kamieni i funtów
    Stone();
    void show_lbs() const; // wyświetla masę w funtach
    void show_stn() const; // wyświetla masę w kamieniach
    ~Stone();
};

#endif
