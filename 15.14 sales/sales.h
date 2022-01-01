#include <stdexcept>
#include <string>

class Sales
{

    public:
        enum {MONTHS = 12};
        class bad_index : public std::logic_error
        {
            private:
                int bi;
            public:
                explicit bad_index(int ix, const std::string & s = "Not correct index in object of Sales class\n");
                int getBiVal() {return this->bi;}
                virtual ~bad_index() {}
        };
        explicit Sales(int yy = 0);
        Sales(int yy, const double *gr, int n);
        virtual ~Sales() {}
        int getYear() { return this->year; }
        virtual double operator[](int i) const;
        virtual double & operator[](int i);
    private:
        double gross[MONTHS];
        int year;


};

class LabeledSales : public  Sales
{
    public:
        class nbad_index: public Sales::bad_index
        {
            private:
                std::string lbl;
            public:
                nbad_index(const std::string & lb, int ix, const std::string & s = "Not correct index in object of class LabeledSales\n");
                const std::string & label_val() { return this->lbl; }
                //virtual ~nbad_index() {}
        };
        explicit LabeledSales(const std::string & lb = "lack", int yy = 0);
        LabeledSales(const std::string & lb, int yy, const double * gr, int n);
        const std::string & getLabel() const {return this->label;}
        double operator[](int i) const override;
        double & operator[](int i) override;
    private:
        std::string label;



};