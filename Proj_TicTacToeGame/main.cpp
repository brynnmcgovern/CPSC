#include <iostream>
#include "TicTacToeGame.h"
using namespace std;

int main(){
  TicTacToeGame *Game = new TicTacToeGame();
  Game->play();

  delete Game;
}
