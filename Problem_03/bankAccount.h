//BankAccount.h
//This is my provided header file
// This program defines the BankAccount class with methods to set and get
// customer details, deposit, withdraw, and check balance. Private data 
//members include customerName and balance
#include<string>
using namespace std;

class BankAccount {
private:
  string customerName;
  float balance;
  
  void setName(string n);
  void setBalance(float bal);

public:
  BankAccount(string n, float bal);
  string getName();
  float getBalance();
  void deposit(float dep);
  void withdraw(float draw);
  ~BankAccount();
};







