#ifndef STONE_H_
#define STONE_H_

class Stone
{
  public:
    enum Mode {STONES_AND_POUNDS = 1, POUNDS_WITH_LEFT = 2, POUNDS_WITHOUT_LEFT = 3};
  private:
    enum {Lbs_per_stn = 14}; // liczba funtów na kamień
    int stone;
    double pds_left; // reszta w funtach
    double pounds; // masa w funtach
    Mode choice;
  public:
    Stone(int stn, double lbs); //konstruktor dla kamieni i funtów
    Stone(double lbs); // konstruktor dla funtów z częścią ułamkową
    Stone(int lbs);
    Stone();
    ~Stone();
    Mode choose_of_operation(int form);
    friend std::ostream & operator<<(std::ostream & os, const Stone obj);
};

#endif
