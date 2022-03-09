
#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>
using namespace std;


int main(){
  double pi = 0.0;
  int n;



  cout << "Please enter a non-negative integer upper limit of summation for the Leibnitz formula for computing pi: " << endl;
  cin >> n;
  cout << fixed << showpoint;
  cout << setprecision(DBL_DIG);

  for(int k = 0; k <= n; ++k){
    pi += (pow(-1, k)) / ((2*k) +1);
  }
  pi *= 4;





  cout << "PI (approx): " << pi << "; n: " << setw(7) << n << endl;
  cout << "PI (actual): " << "3.141592653589793" << endl;
  cout << "Decimal digits of precision: " << DBL_DIG << endl;
  cout << "Number of base 2 mantissa digits of double precision floating point value: " <<  DBL_MANT_DIG << endl;
  cout << "Next representable number from 3.141592653589793: " << nextafter(3.141592653589793, 3.14) << endl;

}
