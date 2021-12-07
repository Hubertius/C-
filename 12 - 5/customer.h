#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer
{
    private:
        long arrive;
        int processTime;
    public:
        Customer() { this->arrive = this->processTime = 0;}
        void set(long when);
        long when() const { return this->arrive; }
        int pTime() const { return this->processTime; }
};


#endif CUSTOMER_H_