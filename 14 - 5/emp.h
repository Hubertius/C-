#ifndef EMP
#define EMP

#include <iostream>
#include <string>

class AbstrEmp
{
    private:
        std::string fname; // "name" of object of class AbstrEmp
        std::string lname; // "surname" of object of class AbstrEmp
        std::string job; // "job" of object of class AbstrEmp
    public:
        AbstrEmp();
        AbstrEmp(const std::string & fn, const std::string & ln, const std::string & j);
        AbstrEmp(const AbstrEmp & anotherAbstrEmp);
        virtual void showAll() const;
        virtual void setAll(); // set all of three string objects with AbstrEmp data
        friend std::ostream & operator<<(std::ostream & os, const AbstrEmp & abstrEmpObj);
        virtual ~AbstrEmp() = 0;
};

class Employee : public AbstrEmp
{
    public:
        Employee();
        Employee(const std::string & fn, const std::string & ln, const std::string & j);
        void showAll() const override;
        void setAll() override;
};

class Manager: public virtual AbstrEmp
{    
    private:
        int inChargeOf; // for how many Employees he is the boss
    protected:
        int getInChargeOf() const { return this->inChargeOf; };
        int & getInChargeOf() { return this->inChargeOf; }
    public:
        Manager();
        Manager(const std::string & fn, const std::string & ln, const std::string & j);
        Manager(const AbstrEmp & anotherEmpObj, int ico);
        Manager(const Manager & anotherManager);
        void showAll() const override;
        void setAll() override;
        
};

class Fink: public virtual AbstrEmp
{
    private:
        std::string reportsTo;
    protected:
        const std::string getReportsTo() const { return this->reportsTo; } 
        std::string & getReportsTo() { return this->reportsTo; }
    public:
        Fink();
        Fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo);
        Fink(const AbstrEmp & e, const std::string & rpo);
        Fink(const Fink & anotherFinkObj);
        void showAll() const override;
        void setAll() override;

};

class HighFink: public Manager, public Fink
{
    
    public:
        HighFink();
        HighFink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo);
        HighFink(const AbstrEmp & e, const std::string & rpo, int ico);
        HighFink(const Manager & m, const std::string & rpo);
        HighFink(const Fink & f, int ico);
        HighFink(const HighFink & anotherHighFinkObj);
        void showAll() const override;
        void setAll() override;
};


#endif 