#include <iostream>
#include "Complex.cpp"
#include "Quad.cpp"
#include "Test.cpp"

using namespace std;

int main()
{

cout << "========AccountManager========" <<endl;

/*AccountManager m("John Doe", 2000, 5000);
AccountManager n("JohnDoe2", 2000, 5000);

AccountManager getAccount(4000);
*/
Account g{"John Doe", 2000, 5000};
          g.setcreditLimit(1000);
          g.queryAccount();
  
  
          g.purchase(500);
          g.queryAccount();
  
          g.payBill();
          g.queryAccount();
  
          g.setInterestRate(0.1);
                  g.addAnnualInterest(0);
                  g.queryAccount();
  
  
  
          g.addAnnualInterest(1);
          g.queryAccount();


cout << endl << "======== Complex Test ========" << endl;



Complex a(1, 7);
Complex b(9, 2);

//Addition
Complex c= a.add(b);
a.printCN();
cout << "+" ;
b.printCN();
cout << "=" ; 
c.printCN();
cout <<endl;

//Subtraction
Complex d =a.sub(b);
a.printCN();
cout << "-" ;
b.printCN();
cout << "=" ; 
d.printCN();
cout <<endl;

//Multiplication
Complex e= a.mul(b);
  a.printCN();
  cout << "*" ;
  b.printCN();
  cout << "=" ;
  e.printCN();
  cout <<endl;

//Set

//a.setComplexNumber(10,1);//reset
//b.setComplexNumber(11,5);




cout << "======== Quadratic ========" << endl;

 Quadratic q; 
 Complex r1, r2;
 
 cout << "x^2 + 2x + 4 = 0 "<< endl;

 q.setCoeff(1,2,4);
 q.solve();



cout << endl << "x^2+4x+2=0" <<endl;
  q.setCoeff(1,4,2);
  q.solve();
  
  cout<<endl;

return 0 ; 
}
