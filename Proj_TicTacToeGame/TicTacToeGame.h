#include <iostream>
using namespace std;

class TicTacToeGame{
public:
  TicTacToeGame();
  ~TicTacToeGame();
  void play();
  void InitializeGrid();
  void DisplayGrid();
  void PlaceMarker(int row, int column);
  void CheckForWinner();
  bool IsPlayerMarkerInThreeSpots();
  bool IsComputerMarkerInThreeSpots();
  void PlayComputerMove();
  bool AllSlotsAreFull();




private:
  char** pp_cGrid;
  bool isGameOver;





};
