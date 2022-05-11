#include <iostream>
#include "ToeGame.h"
using namespace std;

int main(){
  ToeGame *Game = new ToeGame();
  Game->play();

  delete Game;
}
