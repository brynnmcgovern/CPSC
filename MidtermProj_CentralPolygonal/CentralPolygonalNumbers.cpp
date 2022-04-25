#include "CentralPolygonalNumbers.h"
#include <iostream>
#include <fstream>

using namespace std;

CentralPolygonalNumbers::CentralPolygonalNumbers(){
  m_nMax = 0;
  mp_iNumbers = new int[m_nMax + 1];
  for(int i = 0; i <= m_nMax; ++i){
    mp_iNumbers[i] = ((i * i) + i + 2) / 2;
  }
}

CentralPolygonalNumbers::CentralPolygonalNumbers(int nMax){
  m_nMax = nMax;
  mp_iNumbers = new int[m_nMax + 1];
  for(int i = 0; i <= m_nMax; ++i){
    mp_iNumbers[i] = ((i * i) + i + 2) / 2;
  }
}

CentralPolygonalNumbers::~CentralPolygonalNumbers(){
  delete[] mp_iNumbers;
  cout << "~CentralPolygonalNumbers called" << endl;
}

void CentralPolygonalNumbers::display(){
  int p;
  for(int i = 0; i <= m_nMax; ++i){
    cout << "n: " << i << ", maximum number of pieces: " << mp_iNumbers[i] << endl;
  }
}

bool CentralPolygonalNumbers::save(string strFilename){
  ofstream ofsNumbers;
  bool hasSaved;
  ofsNumbers.open(strFilename);
  int p;


    for(int i = 0; i <= m_nMax; ++i){
      ofsNumbers << mp_iNumbers[i] << endl;
    }
    hasSaved = true;


  ofsNumbers.close();
  return hasSaved;

}
