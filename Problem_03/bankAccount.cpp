// bankAccount.cpp
// This program implements the BankAccount class with methods to manage a
// customers name and corresponding balance. Additionally, it performs deposit
// and withdrawal opertations
#include "bankAccount.h"
#include<iostream>
using namespace std;

//Constructor: initializes the bank account with a name and a balance
BankAccount::BankAccount(string n, float bal){
  setName(n);
  setBalance(bal);
}

//Setter to set the customers name to string n
void BankAccount::setName(string n){
  customerName = n;
  }

//Setter to set account balance to float bal
void BankAccount::setBalance(float bal){
  balance = bal;
  }

//Returns the name of the account holder
string BankAccount::getName(){
  return customerName;
  }

//This returns the current balance of the account in question
float BankAccount::getBalance(){
  return balance;

  }
//This adds a deposit amount to the account balance
void BankAccount::deposit(float dep){
  balance += dep;
  }

//This withdraws a specifiec amount of money and checks to see if there is a
//sufficient amount of funds within the account to avoid "over draft"
void BankAccount::withdraw(float draw){
  if(balance >= draw){
    balance -= draw;
    }
  else{
  //If an overdraft occurs for a user, for example prints 'Insufficient funds
  //for Ed Norton" 
    cout << "Insufficient funds for " << customerName << endl;
  }
}

BankAccount::~BankAccount(){} // this is the destructor

