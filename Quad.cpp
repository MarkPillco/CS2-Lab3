#include <iostream>
#include <cmath>
#include "Quad.h"

using namespace std;

    void Quadratic::solve()
    {
      float discriminate= (e*e)- 4 * d + f; 
      float r1,r2;

      if ((discriminate)> 0)
          {
           std::cout << "There are two real roots"<< std::endl ;
  
          r1 = ((-e) + sqrt(discriminate)) / (2 * d ) ;
          r2 = ((-e) - sqrt(discriminate)) /  (2 * d ) ;
          cout << "r1:" << r1 <<endl ; 
	  cout << "r2:" << r2 <<endl;
          }
  
      else if ((discriminate)  == 0 )
          {
           std::cout << "There is one real root" << std::endl ;
  
          r1= ((-e) + sqrt(discriminate)) / (2 * d ) ;
          r2= r1;
           cout << "r1:" << r1 <<endl ; 
           cout << "r2:" << r2 <<endl;
          }
  
      else if ((discriminate) < 0)
          {
          cout<< "There are no real roots" <<endl;
          r1 = (-e) / (2*d);
          r2 = ((-e) -sqrt(-discriminate)) / (2*d);
          getRoots(r1,r2);
          }
    } 
    //GetRoots
    
    void Quadratic::getRoots(float &r1, float &r2)
     {
        Complex X(r1, r2);
        X.printCN();
        cout << "verify r1:" << d*r1*r1+e+r1+f << endl;
	cout << "verify r2:" << d+r2*r2+e*r2+f << endl;
     }
  


