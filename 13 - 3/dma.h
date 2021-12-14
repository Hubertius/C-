#ifndef DMA_H_
#define DMA_H_

#include <iostream>

class DMA
{
    protected:
        char * label;
    public:
        DMA(const char * l); 
        DMA(const DMA & anotherDMA);
        DMA & operator=(const DMA & anotherDMA);
        virtual ~DMA();
        virtual void readInfo() const = 0;
        char * getLabel() const ;
};

class BaseDMA: public DMA
{
    private: 
        int rating;
    public:
        BaseDMA(const char * l,  int r = 0);
        BaseDMA(const BaseDMA & anotherBaseDMA);
        virtual ~BaseDMA();
        BaseDMA & operator=(const BaseDMA & anotherBaseDMA);
        virtual void readInfo() const override;
};

class LacksDMA: public BaseDMA
{
    private:
        enum { COL_LEN = 40 };
        char color[COL_LEN];
    public:
        LacksDMA(const char * c = "no color", const char * l = "no color", int r = 0);
        LacksDMA(const LacksDMA & anotherLacksDMA);
        LacksDMA & operator=(const LacksDMA & anotherLacksDMA);
        virtual void readInfo() const override;
};

class HasDMA: public BaseDMA
{
    private:
        char * style;
    public:
        HasDMA(const char * s = "lack", const char * l = "lack", int r = 0);
        HasDMA(const HasDMA & anotherHasDMA);
        ~HasDMA();
        HasDMA & operator=(const HasDMA & anotherHasDMA);
        virtual void readInfo() const override;
};

#endif DMA_H_