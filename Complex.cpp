#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;
    
  
    //Addition
     Complex Complex::add(Complex &newnum)
    {
    return Complex(realpart+newnum.realpart, imaginarypart+newnum.imaginarypart);
    }

    //Subtraction
     Complex Complex::sub(Complex &newnum)
      {
      return Complex(realpart-newnum.realpart, imaginarypart-newnum.imaginarypart);
      }

   //Multiplication
    Complex Complex::mul(Complex &newnum)
     {
     return Complex(realpart*newnum.realpart, imaginarypart*newnum.imaginarypart);
     }
   
  
  //Display
     void Complex::printCN()
     {
        cout << "(" << realpart << " , " << imaginarypart << ")" ; 
     } 
