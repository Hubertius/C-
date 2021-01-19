#ifndef TIME_H_
#define TIME_H_

class Time
{
  private:
    int hours, minutes;
  public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);

    // funkcje zaprzyjaźnione wykonujące operacje obiekt obiekt
    friend Time operator+(const Time & first, const Time & second);
    friend Time operator-(const Time & first, const Time & second);



    //funkcje zprzyjaźnione wykonujące operacje obiekt wartość double

    friend Time operator+(const Time & first, int minutes);
    friend Time operator-(const Time & first, int minutes);
    friend Time operator*(const Time & first, double value);

    // funkcje zaprzyjaźnione wykonujące opereacje wartość double obiekt
    friend Time operator+(int minutes, const Time & first);
    friend Time operator-(int minutes, const Time & first);
    friend Time operator*(double value, const Time & first);


    // funkcja zaprzyjaźnia z parametrami klasy ostream i Time mająca na celu wysyłanie danych na strumień wyjścia
    friend std::ostream & operator<<(std::ostream & os, const Time & t);


};



#endif
