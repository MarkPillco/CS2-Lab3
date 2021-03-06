#include <iostream>
#include <string>
#ifndef Complex_h
#define Complex_h

class Complex
{
    public:
  //Default
    Complex(double realpart=0.0, double imaginarypart=0.0)
    {   
    this-> realpart=realpart;
    this->imaginarypart=imaginarypart;
    }
  
    //Member Func
    Complex add(Complex &newnum);
    Complex sub(Complex &newnum);
    Complex mul(Complex &newnum);
    void setComplexNumber(double realpart, double imaginarypart);
    void printCN();
    

    private:
    double realpart;
    double imaginarypart;
};
#endif
