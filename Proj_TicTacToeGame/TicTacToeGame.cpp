#include <iostream>

#include "TicTacToeGame.h"
using namespace std;

TicTacToeGame::TicTacToeGame(){
  pp_cGrid = new char* [3];
  pp_cGrid[0] = new char[3];
  pp_cGrid[1] = new char[3];
  pp_cGrid[2] = new char[3];
  isGameOver = false;

}

TicTacToeGame::~TicTacToeGame(){
    cout << "Destructor called" << endl;
    for(int i = 0; i < 3; ++i){
        delete[] pp_cGrid[i];
    }
    delete[] pp_cGrid;
}

void TicTacToeGame::play(){
  int row;
  int column;
  cout << "Tic Tac Toe" << endl;
  cout << "The top row is row number 0, the middle row number 1, and the bottom row is number 2." << endl;
  cout << "The left column is column number 0, the middle column number 1, and the bottom column is number 2." << endl;
  InitializeGrid();
  DisplayGrid();
  cout << "Please enter grid row number: " << endl;
  cin >> row;
  cout << "Please enter grid column number: " << endl;
  cin >> column;
  PlaceMarker(row, column);
  DisplayGrid();
  CheckForWinner();
  while(isGameOver == false){
    PlayComputerMove();
    DisplayGrid();
    CheckForWinner();
    cout << "Please enter grid row number: " << endl;
    cin >> row;
    cout << "Please enter grid column number: " << endl;
    cin >> column;
    PlaceMarker(row, column);
    DisplayGrid();
    CheckForWinner();

  }
}

bool TicTacToeGame::AllSlotsAreFull(){
  int numOfEmptySlots = 9;
  bool areFull;
  for(int row = 0; row < 3; ++row){
    for(int column = 0; column < 3; ++column){
      if(pp_cGrid[row][column] != '~'){
        --numOfEmptySlots;
      }
      if(numOfEmptySlots != 0){
        areFull = false;
      }
      else{
        areFull = true;
      }
    }
  }
  return areFull;
}

void TicTacToeGame::CheckForWinner(){

  if(IsPlayerMarkerInThreeSpots() == true && IsComputerMarkerInThreeSpots() == false){
    cout << "WINNER: X" << endl;
    cout << "Game over" << endl;
    isGameOver = true;
  }

  if(IsPlayerMarkerInThreeSpots() == false && IsComputerMarkerInThreeSpots() == true){
    cout << "WINNER: O" << endl;
    cout << "Game over" << endl;
    isGameOver = true;
  }

  if(AllSlotsAreFull() == true && IsPlayerMarkerInThreeSpots() == false && IsComputerMarkerInThreeSpots() == false){
      cout << "DRAW" << endl;
      cout << "Game over" << endl;
      isGameOver = true;


  }
  else{
    isGameOver = false;
  }



}

void TicTacToeGame::PlayComputerMove(){
  bool isComputerTurn = true;
  int winningCombinations [8][3][2] = {{{0, 0}, {1,1}, {2, 2}},
                                      {{0, 0}, {0, 1}, {0, 2}},
                                      {{1, 0}, {1, 1}, {1, 2}},
                                      {{2, 0}, {2, 1}, {2, 2}},
                                      {{0, 0}, {1, 0}, {2, 0}},
                                      {{0, 1}, {1, 1}, {2, 1}},
                                      {{0, 2}, {1, 2}, {2, 2}},
                                      {{0, 2}, {1, 1}, {2, 0}}};


  for(int i = 0; i < 8; ++i){
    for(int j = 0; j < 3; ++j){
      if(pp_cGrid[winningCombinations[i][j][0]][winningCombinations[i][j][1]] == '~'){
        pp_cGrid[winningCombinations[i][j][0]][winningCombinations[i][j][1]] = 'O';
        isComputerTurn = false;
        break;
      }



    }
    if(isComputerTurn == false){
      break;
    }
  }

}

bool TicTacToeGame::IsPlayerMarkerInThreeSpots(){
  bool isSame = false;

    if(pp_cGrid[0][0] == 'X' && pp_cGrid[0][1] == 'X' && pp_cGrid[0][2] == 'X'){
      isSame = true;
    }
    if(pp_cGrid[0][0] == 'X' && pp_cGrid[1][0] == 'X' && pp_cGrid[2][0] == 'X'){
      isSame = true;
    }

  if(pp_cGrid[0][0] == 'X' && pp_cGrid[1][1] == 'X' && pp_cGrid[2][2] == 'X'){
    isSame = true;
  }
   if(pp_cGrid[0][2] == 'X' && pp_cGrid[1][1] == 'X' && pp_cGrid[2][0] == 'X'){
    isSame = true;
  }

   if(pp_cGrid[1][0] == 'X' && pp_cGrid[1][1] == 'X' && pp_cGrid[1][2] == 'X'){
    isSame = true;
  }

   if(pp_cGrid[2][0] == 'X' && pp_cGrid[2][1] == 'X' && pp_cGrid[2][2] == 'X'){
    isSame = true;
  }

   if(pp_cGrid[0][1] == 'X' && pp_cGrid[1][1] == 'X' && pp_cGrid[2][1] == 'X'){
    isSame = true;
  }

   if(pp_cGrid[0][2] == 'X' && pp_cGrid[1][2] == 'X' && pp_cGrid[2][2] == 'X'){
    isSame = true;
  }

  return isSame;


}

bool TicTacToeGame::IsComputerMarkerInThreeSpots(){
  bool isSame = false;

    if(pp_cGrid[0][0] == 'O' && pp_cGrid[0][1] == 'O' && pp_cGrid[0][2] == 'O'){
      isSame = true;
    }
    if(pp_cGrid[0][0] == 'O' && pp_cGrid[1][0] == 'O' && pp_cGrid[2][0] == 'O'){
      isSame = true;
    }

  if(pp_cGrid[0][0] == 'O' && pp_cGrid[1][1] == 'O' && pp_cGrid[2][2] == 'O'){
    isSame = true;
  }
   if(pp_cGrid[0][2] == 'O' && pp_cGrid[1][1] == 'O' && pp_cGrid[2][0] == 'O'){
    isSame = true;
  }

   if(pp_cGrid[1][0] == 'O' && pp_cGrid[1][1] == 'O' && pp_cGrid[1][2] == 'O'){
    isSame = true;
  }

   if(pp_cGrid[2][0] == 'O' && pp_cGrid[2][1] == 'O' && pp_cGrid[2][2] == 'O'){
    isSame = true;
  }

   if(pp_cGrid[0][1] == 'O' && pp_cGrid[1][1] == 'O' && pp_cGrid[2][1] == 'O'){
    isSame = true;
  }

   if(pp_cGrid[0][2] == 'O' && pp_cGrid[1][2] == 'O' && pp_cGrid[2][2] == 'O'){
    isSame = true;
  }

  return isSame;


}




void TicTacToeGame::PlaceMarker(int row, int column){
  if(row > 2 ){
    cout << "The grid row number should be 0, 1, or 2." << endl;
    cout << "Please enter grid row number: " << endl;
    cin >> row;
  }
  if(column > 2){
    cout << "The grid column number should be 0, 1, or 2." << endl;
    cout << "Please enter grid column number: " << endl;
    cin >> column;
  }
  if(pp_cGrid[row][column] != '~'){
    cout << "The grid square [" << row << "][ " << column << "] is already taken." << endl;
    cout << "Please enter grid row number: " << endl;
    cin >> row;
    cout << "Please enter grid column number: " << endl;
    cin >> column;
  }
  pp_cGrid[row][column] = 'X';
}

void TicTacToeGame::InitializeGrid(){
  for(int row = 0; row < 3; ++row){
    for(int column = 0; column < 3; ++column){
      pp_cGrid[row][column] = '~';
    }
  }
}

void TicTacToeGame::DisplayGrid(){
  for(int row = 0; row < 3; ++row){
    for(int column = 0; column < 3; ++column){
      cout << pp_cGrid[row][column] << " ";
    }
    cout << endl;

  }
  cout << endl;
}
