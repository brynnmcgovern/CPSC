#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>
using namespace std;


int main(){


cout << fixed << showpoint;
cout << setprecision(15);
for(int n = 2; n <= 1048576; n*=2){
  double pi = 0.0;
  for(int k = 0; k <= n; ++k){
    pi += (pow(-1, k)) / ((2*k) +1);
  }
  pi *= 4;
  cout << "PI: " << pi << "; n: " << setw(7) << n << endl;
}
}
