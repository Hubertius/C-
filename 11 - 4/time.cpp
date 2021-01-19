#include <iostream>
#include "time.h"


Time::Time()
{
  hours = minutes = 0;
}

Time::Time(int h, int m)
{
  hours = h;
  minutes = m;
}

void Time::addMin(int m)
{
  minutes += m;
  hours += minutes / 60;
  minutes %= 60;
}

void Time::addHr(int h)
{
  hours += h;
}

void Time::reset(int h, int m)
{
  hours = h;
  minutes = m;
}


Time operator+(const Time & first, const Time & second)
{
  Time sum;
  sum.minutes = first.minutes + second.minutes;
  sum.hours = first.hours + second.hours + sum.minutes / 60;
  sum.minutes %= 60;
  return sum;
}

Time operator-(const Time & first, const Time & second)
{
  Time diff;
  int tot1, tot2;
  tot1 = second.minutes + 60 * second.hours;
  tot2 = first.minutes + 60 * first.hours;
  diff.minutes = (tot2 - tot1) % 60;
  diff.hours = (tot2 - tot1) / 60;
  return diff;
}

Time operator*(const Time & first, double mult)
{
  Time result;
  long totalminutes = first.hours * mult * 60 + first.minutes * mult;
  result.hours = totalminutes / 60;
  result.minutes = totalminutes % 60;
  return result;
}





Time operator+(const Time & first, int minutes)
{
  Time result;
  result.minutes = first.minutes + minutes;
  result.hours = first.hours + minutes / 60;
  result.minutes %= 60;
  return result;
}

Time operator-(const Time & first, int minutes)
{
  Time diff;
  int tot;
  tot = first.minutes + first.hours * 60;
  diff.minutes = (tot - minutes) % 60;
  diff.hours = (tot - minutes) / 60;
  return diff;
}

Time operator+(int minutes, const Time & first)
{
  Time result;
  result.minutes = first.minutes + minutes;
  result.hours = first.hours + minutes / 60;
  result.minutes %= 60;
  return result;
}

Time operator-(int minutes, const Time & first)
{
  Time diff;
  int tot;
  tot = first.minutes + first.hours * 60;
  diff.minutes = (tot - minutes) % 60;
  diff.hours = (tot - minutes) / 60;
  return diff;
}

Time operator*(double value, const Time & first)
{
  Time result;
  long totalminutes = first.hours * value * 60 + first.minutes * value;
  result.hours = totalminutes / 60;
  result.minutes = totalminutes % 60;
  return result;
}




std::ostream & operator<<(std::ostream & os, const Time & t)
{
  os << t.hours << " godzin, " << t.minutes << " minut." << std::endl;
  return os;
}
