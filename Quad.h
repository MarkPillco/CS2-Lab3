#include <iostream>
#include <cmath>

using namespace std;



class  Quadratic
     {
     public:
  
      friend class Complex;
  
      float setCoeff(float a, float b, float c)
      {
      this->d=a;
      this->e=b;
      this->f=c;
      }

	//Functions
	
	void solve();
        void getRoots(float &r1, float &r2) ;


      private:
      
      float d, e, f;
  
  };
  

