#include <iostream>
#include <math.h>
using namespace std;

int main(){
  double fR = 16.35;
  double dTwelfthRootOfTwo = 1.059463094359;
  int iTwoRaisedToPowerNu;
  int speedOfSound = 345;

  double C0Frequency;
  double C_sharp_0Frequency;
  double D0Frequency;
  double C4Frequency;
  double D_sharp_7Frequency;
  double C8Frequency;

  double C0Wavelength;
  double C_sharp_0Wavelength;
  double D0Wavelength;
  double C4Wavelength;
  double D_sharp_7Wavelength;
  double C8Wavelength;

  double C0Nu = 0.0;
  double C_sharp_0Nu = 0.0;
  double D0Nu = 0.0;
  double C4Nu = 4.0;
  double D_sharp_7Nu = 7.0;
  double C8Nu = 8.0;

  int C0k = 0;
  int C_sharp_0k = 1;
  int D0k = 2;
  int C4k = 0;
  int D_sharp_7k = 3;
  int C8k = 0;

  iTwoRaisedToPowerNu = pow(2.0, C0Nu);
  C0Frequency = fR * iTwoRaisedToPowerNu * pow(dTwelfthRootOfTwo, C0k);
  iTwoRaisedToPowerNu = pow(2.0, C_sharp_0Nu);
  C_sharp_0Frequency = fR * iTwoRaisedToPowerNu * pow(dTwelfthRootOfTwo, C_sharp_0k);
  iTwoRaisedToPowerNu = pow(2.0, D0Nu);
  D0Frequency = fR * iTwoRaisedToPowerNu * pow(dTwelfthRootOfTwo, D0k);
  iTwoRaisedToPowerNu = pow(2.0, C4Nu);
  C4Frequency = fR * iTwoRaisedToPowerNu * pow(dTwelfthRootOfTwo, C4k);
  iTwoRaisedToPowerNu = pow(2.0, D_sharp_7Nu);
  D_sharp_7Frequency = fR * iTwoRaisedToPowerNu * pow(dTwelfthRootOfTwo, D_sharp_7k);
  iTwoRaisedToPowerNu = pow(2.0, C8Nu);
  C8Frequency = fR * iTwoRaisedToPowerNu * pow(dTwelfthRootOfTwo, C8k);

  C0Wavelength = (speedOfSound / C0Frequency) * 100;
  C_sharp_0Wavelength = (speedOfSound / C_sharp_0Frequency) * 100;
  D0Wavelength = (speedOfSound / D0Frequency) * 100;
  C4Wavelength = (speedOfSound / C4Frequency) * 100;
  D_sharp_7Wavelength = (speedOfSound / D_sharp_7Frequency) * 100;
  C8Wavelength = (speedOfSound / C8Frequency) * 100;

  cout << "Reference Frequency: " << fR << "Hz" << endl;
  cout << "Speed of Sound: " << speedOfSound << " m/s" << endl;
  cout << "Note: C0; nu: " << C0Nu << "; k: " << C0k << "; frequency: " << C0Frequency << " Hz; wavelength: " << C0Wavelength << " cm" << endl;
  cout << "Note: C#0; nu: " << C_sharp_0Nu << "; k: " << C_sharp_0k << "; frequency: " << C_sharp_0Frequency << " Hz; wavelength: " << C_sharp_0Wavelength << " cm" << endl;
  cout << "Note: D0; nu: " << D0Nu << "; k: " << D0k << "; frequency: " << D0Frequency << " Hz; wavelength: " << D0Wavelength << " cm" << endl;
  cout << "Note: C4; nu: " << C4Nu << "; k: " << C4k << "; frequency: " << C4Frequency << " Hz; wavelength: " << C4Wavelength << " cm" << endl;
  cout << "Note: D#7; nu: " << D_sharp_7Nu << "; k: " << D_sharp_7k << "; frequency: " << D_sharp_7Frequency << " Hz; wavelength: " << D_sharp_7Wavelength << " cm" << endl;
  cout << "Note: C8; nu: " << C8Nu << "; k: " << C8k << "; frequency: " << C8Frequency << " Hz; wavelength: " << C8Wavelength << " cm" << endl;
}
