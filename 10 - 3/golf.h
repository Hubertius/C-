#ifndef GOLF_H_
#define GOLF_H_

class Golfclub
{
  private:
    struct golf
    {
      char fullname[40];
      int handicap;
    }m_struct;
  public:
    Golfclub(const char * name, int hc);
    Golfclub();
    void handicap(int hc);
    void showgolf();

};

#endif
