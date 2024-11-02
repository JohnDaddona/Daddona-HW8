// BankApp.cpp
// This program BankApp.cpp creates and manages multiple BankAccount objects to demonstrate deposit, 
// withdrawal, and balance display operations for individual and grouped accounts.
// Example invocation: ./bankApp
#include<iostream>
#include "bankAccount.h"

int main(){
  //Part A making individual BankAccount objects with initial balances
  BankAccount jackAccount("Jack Smith", 50);
  BankAccount jillAccount("Jill Smith", 100);
  
  //Part B Creating an array of BankAccount objects with different initial
  //balances
  BankAccount bankArray[3] = {
    BankAccount("Ralph Kramden", 10),
    BankAccount("Alice Kramden", 20),
    BankAccount("Ed Norton", 30)
    };

  //Part C deposit $30 into each of the individual accounts as well as the
  //array accounts
  jackAccount.deposit(30);
  jillAccount.deposit(30);
  for(int i = 0; i<3; i++){
    bankArray[i].deposit(30);
    }

  //Part D Withdrawing 20 bucks from each of the individual accounts and array
  //accounts
  jackAccount.withdraw(20);
  jillAccount.withdraw(20);
  for(int i=0; i<3; i++){
    bankArray[i].withdraw(20);
    }

  //Part E: Display the account names and current balances for all accounts
  cout << "Account Balances: " << endl;
  cout << jackAccount.getName() << ": $" << jackAccount.getBalance() << endl;
  cout << jillAccount.getName() << ": $" << jillAccount.getBalance() << endl;
  for(int i=0;i<3;i++){
    cout << bankArray[i].getName()  << ": $" << bankArray[i].getBalance() << endl;
    }
  return 0;
}



