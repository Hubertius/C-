#include <iostream>
#include <cstdlib>
#include <ctime>
#include "customer.h"
#include "queue.h"

const int MIN_PER_HOUR = 60;

bool newCustomer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    srand(time(0));

    cout << "Studium przypadku: \"Bank Stu kas\"." << endl;
    cout << "Podaj maksymalną długość kolejki: ";
    int qs;
    cin >> qs;
    Queue lineOfCustomers(10);

    cout << "Podaj symulowany czas: ";
    int hours;
    cin >> hours;

    long cycle_limit = MIN_PER_HOUR * hours;

    cout << "Podaj srednią liczbę klientów na godzinę: ";
    double clientsForHour;
    cin >> clientsForHour;
    double min_interval_cust = MIN_PER_HOUR / clientsForHour;

    Item temp;
    long turn_aways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;

    for(int cycle = 0; cycle < cycle_limit; cycle++)
    {
        if(newCustomer(min_interval_cust))
        {
            if(lineOfCustomers.isFull())
                turn_aways++;
            else
            {
                customers++;
                temp.set(cycle);
                lineOfCustomers.addNodeToQueue(temp);
            }
        }
        if(wait_time <= 0 && !lineOfCustomers.isEmpty())
        {
            lineOfCustomers.removeNodeToQueue(temp);
            wait_time = temp.pTime();
            line_wait += cycle - temp.when();
            served++;
        }
        if(wait_time > 0)
            wait_time--;

        sum_line += lineOfCustomers.queueCount();
    }
    if(customers > 0)
    {
        cout << "Liczba klientów przyjętych: " << customers << endl;
        cout << "Liczba klientów obsłużonych: " << served << endl;
        cout << "Liczba klientów odesłanych: " << turn_aways << endl;
        cout << "    Średnia długość kolejki: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << static_cast<double>(sum_line) / cycle_limit << endl;
        cout << "    Średni czas oczekiwania: " << static_cast<double>(line_wait) / served << " minut." << endl;
    }
    else
        cout << "Brak klientów!" << endl;
    cout << "KONIEC!" << endl;
    return 0;
}

bool newCustomer(double x)
{
    return rand() * x / RAND_MAX < 1; // return true if customer will show up at current cycle
}