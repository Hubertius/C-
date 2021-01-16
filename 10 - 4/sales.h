
#ifndef SALES_H_
#define SALES_H_

class Sales
{
  private:
    struct data
    {
      double m_sales[4];
      double m_average;
      double m_max;
      double m_min;
    }m_structure;
  public:
    Sales(const double ar[], int n);
    Sales();
    void showSales();
};

#endif

