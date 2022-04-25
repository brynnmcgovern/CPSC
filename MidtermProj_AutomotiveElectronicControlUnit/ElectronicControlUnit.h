#ifndef ELECTRONICCONTROLUNIT_H
#define ELECTRONICCONTROLUNIT_H

#include <iostream>
using namespace std;

class ElectronicControlUnit{

public:
  ElectronicControlUnit();
  ~ElectronicControlUnit();
  void handleCommand(char cCommand);
  void actuateHydraulicJacks();
  void activateBeltTires();
  void activateInfrared();
  void display();

private:
  bool m_bActivatedHydraulicJacks;
  bool m_bActivatedBeltTires;
  bool m_bActivatedIRIllunination;
};


#endif
