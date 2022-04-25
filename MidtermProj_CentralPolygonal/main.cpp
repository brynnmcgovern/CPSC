#include "CentralPolygonalNumbers.h"
#include <iostream>

using namespace std;

int main(){
  CentralPolygonalNumbers cpn(10);
  cpn.display();
  cpn.save("CPN");
}
