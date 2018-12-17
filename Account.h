#include <iostream>
#include <vector>

using namespace std;

/*class AccountManager{
   
        public:
   
  
        void createAccount(std::string name, int initialBalance, int AccNumber)
          {
  
         //Variables
          const int size =5 ;
          vector<int>Acc(size);
          int i, x, a, DuplicateNumber;
  
  
           for ( i=0; i < size ; i++)
           {
  
            DuplicateNumber=0;
  
                for( a=0;a < x ; a++)
                {
                 if(AccNumber ==Acc.at(x))
                  {
                          DuplicateNumber=1;
                          cout << "Error, Duplicate ID Number" << endl;
                          Acc.pop_back();
                  }
              }
             if(!DuplicateNumber)
              {
                  Acc.at(x++) = AccNumber;
                  Acc.push_back(AccNumber);
                   createAccount(name, initialBalance, AccNumber);
              }
            }
           }
        private:
  
        std::string name;
        int AccNumber{0};
        double balance{0};
 
};
*/

class Account
{
    
   public:
   
    Account(std::string accountName, int initialBalance,int AccNumber)
    :name{accountName}
    {
  
         if (initialBalance > 0)
         {
             balance= initialBalance;
         }
  
         if (AccNumber > 0)
         {
             num = AccNumber;
         }
  
    }
   	void deposit(int depositAmount);
	int  getBalance() const;
	void setName(std::string accountName);
	string getName() const;
	void setAccNumber(int AccNumber);
	int getAccNumber();
	void withdraw(int withdrawamount);
	void setcreditLimit(float amount);
	void purchase(float amount);
	void setInterestRate(float rate);
	float getInterestRate();
	void payBill();
	void refund(float);
	void addAnnualInterest(int indicator);
	void queryAccount();

	private:
 
          std::string name;
          double balance {0} ;
          int AccNumber{0};
          int credLimit;
          int withdrawamount;
          int creditBalance{0};
          int creditleftover;
          float IntRate{0};
          float num{0};
};

