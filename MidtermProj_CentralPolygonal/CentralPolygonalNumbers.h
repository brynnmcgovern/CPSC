#ifndef CENTRALPOLYGONALNUMBERS_H
#define CENTRALPOLYGONALNUMBERS_H

#include <iostream>
using namespace std;

class CentralPolygonalNumbers{
public:
  CentralPolygonalNumbers();
  CentralPolygonalNumbers(int nMax);
  ~CentralPolygonalNumbers();
  void display();
  bool save(string strFilename);
  

private:
  int m_nMax;
  int* mp_iNumbers;
};

#endif
