 #include <string>
 #include <iostream>
 #include <cmath>
 #include "Account.h" 
  
  void Account::deposit (int depositAmount)
  {
      if (depositAmount>0 )
          {
          balance= balance + depositAmount;
          }
  }
  
  int Account::getBalance() const
          {
          return balance;
          }
  
  
  void Account::setName( std::string accountName)
          {
          name = accountName;
          }
  
  
  string Account::getName() const
          {
          return name;
          }
  
  void Account::setAccNumber(int AccNumber)
      {
      num=AccNumber;
  
      }
  
  
  int Account::getAccNumber ()
      {
      return num;
      }
  
  void Account::withdraw (int withdrawamount)
  {
      if (withdrawamount <= balance )
      {
      balance = balance - withdrawamount ;
      }
  
          else
          {
          std::cout << " Error, not enough money to make this transaction" ;
          }
  }
  void Account::setcreditLimit (float amount)
      {
      credLimit= amount ;
      }
  
  void Account::purchase (float amount)
      {
      if (amount > credLimit)
          {
          std::cout << " Sorry, could not purchase. It exceedes your limit." ;
          }
  
      else if (credLimit > amount)
      {
      std::cout << " Thank You for your purchase !"<< std::endl;
      creditBalance= credLimit-amount;
      }
  }
  
  void Account::payBill()
  {
      if (creditBalance < balance)
          {
          balance= balance-creditBalance;
          creditBalance=0;
          }
         else
         {
         balance=0;
         creditBalance=creditBalance-balance;
         std::cout << "You have insufficient funds to complete your transaction! Your Credit balance is: " << creditBalance << std::endl;
         }
 }
 
 void Account::refund (float amount)
     {
     creditBalance= creditBalance + amount ;
     }
 
 void Account::setInterestRate (float rate)
     {
     IntRate = rate ;
     }
 
 float Account::getInterestRate()
     {
     return IntRate;
     }
 
 void Account::addAnnualInterest (int indicator)
 {
      if (indicator == 0)
      {
          balance = balance * pow(1+(IntRate/365),365) ;
      }
 
 
 
         else if (indicator == 1)
     {
         balance= balance * pow(1+(IntRate/12),12) ;
     }
 
 
 }
 
 
 void Account::queryAccount()
 {
     std::cout << "****Account for "<< getName() << "****ID:" << getAccNumber() <<std::endl;
     std::cout << " Account Balance: " << balance << std::endl;
     std::cout << "Credit Card Info:" << std::endl;
     std::cout << "Credit Card Limit: " << credLimit << std::endl;
     std::cout << "Credit Balance: " << creditBalance << std::endl;
     std::cout << "Available Credit " << credLimit - creditBalance << std::endl;
     std::cout << "*****************" << std::endl;
 }
 /*
    void AccountManager::getAccount(int AccNumber)
    {
    return intAccNumber
    }
*/                                                                  
