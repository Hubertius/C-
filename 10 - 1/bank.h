#ifndef BANK_H_
#define BANK_H_
#include <string>

class Bank
{
  private:
    std::string m_name;
    std::string m_number_of_account;
    double m_account_balance;
  public:
    Bank(std::string name = "Unknown", std::string number_of_account = "Unknown", double m_account_balance = 0.0);
    void show_account() const;
    void pour_money(double money);
    void take_money(double money);
};

#endif
