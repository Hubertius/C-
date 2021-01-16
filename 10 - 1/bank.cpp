#include <iostream>
#include "bank.h"

using std::cout;
using std::endl;
using std::cin;

Bank::Bank(std::string name, std::string number_of_account, double account_balance)
{
  m_name = name;
  m_number_of_account = number_of_account;
  m_account_balance = account_balance;
}

void Bank::show_account() const
{
  cout << "Name of the bank account: " << m_name << endl;
  cout << "Number of the bank account: " << m_number_of_account << endl;
  cout << "Balance of the bank account: " << m_account_balance << endl;
}
void Bank::pour_money(double money)
{
  cout << "State of your account before pouring additional money: " << m_account_balance << endl;
  if( money <= 0 )
  {
    cout << "Something went wrong (payment is eual or below zero). We couldn't pour money into your account. " << endl;
    cout << "Sorry." << endl;
    return;
  }
  m_account_balance += money;
  cout << "State of your bank account: " << m_account_balance << endl;
}
void Bank::take_money(double money)
{
  cout << "State of your bank account before taking money from it: " << m_account_balance << endl;
  if( money <= 0 )
  {
    cout << "Something went wrong (payment to take from the account is equal or below to zero). We couldn't pour money into your account. " << endl;
    cout << "Sorry." << endl;
    return;
  }
  m_account_balance -= money;
  cout << "State of you ban account now: " << m_account_balance << endl;
}

