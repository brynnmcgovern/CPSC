#include "ElectronicControlUnit.h"
#include <iostream>

using namespace std;

int main(){
  char command;
  bool stillOn = true;
  ElectronicControlUnit ECU;
  cout << "Press X to turn off ignition or enter a steering wheel button (A, B or E)" << endl;
  ECU.display();
  cin >> command;
  while(stillOn){
    ECU.handleCommand(command);
    ECU.display();
    cin >> command;
    if(command == 'X'){
      stillOn = false;
    }
  }
}
