#include "ElectronicControlUnit.h"
#include <iostream>

using namespace std;

ElectronicControlUnit::ElectronicControlUnit(){
  m_bActivatedHydraulicJacks = false;
  m_bActivatedBeltTires = false;
  m_bActivatedIRIllunination = false;
}

ElectronicControlUnit::~ElectronicControlUnit(){

}

void ElectronicControlUnit::handleCommand(char cCommand){
  switch(cCommand){
    case 'A':
      actuateHydraulicJacks();
      break;
    case 'B':
      activateBeltTires();
      break;
    case 'E':
      activateInfrared();
      break;
    case 'X':
      break;

  }
}

void ElectronicControlUnit::actuateHydraulicJacks(){
  if(m_bActivatedHydraulicJacks == false){
    if(m_bActivatedBeltTires == true){
      activateBeltTires();
    }
    m_bActivatedHydraulicJacks = true;
    cout << "Hydraulic Jacks activated" << endl;
  }
  else{
    m_bActivatedHydraulicJacks = false;
    cout << "Hydraulic Jacks deactivated" << endl;
  }
}

void ElectronicControlUnit::activateInfrared(){
  if(m_bActivatedIRIllunination == false){
    m_bActivatedIRIllunination = true;
    cout << "Infrared Illumination activated" << endl;
  }
  else{
    m_bActivatedIRIllunination = false;
    cout << "Infrared Illumination deactivated" << endl;
  }
}

void ElectronicControlUnit::activateBeltTires(){
  if(m_bActivatedBeltTires == false){
    m_bActivatedBeltTires = true;
    cout << "Belt Tires activated" << endl;
  }
  else{
    m_bActivatedBeltTires = false;
    cout << "Belt Tires deactivated" << endl;
  }
}

void ElectronicControlUnit::display(){
  cout << "    (A)" << endl;
  cout << "(F) (G) (B)" << endl;
  cout << "(E)     (C)" << endl;
  cout << "    (D)" << endl;
}
