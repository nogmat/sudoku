#include <iostream>
#include <fstream>
#include "grid.hpp"

using namespace std;

/*!
 * \file main.cpp
 * \brief Standard Sudoku Game Solver
 *
 * Little program which solves a grid of standard sudoku game 
 * from a formatted text file which contains the grid's values.
 *
 * \author Matthieu Nogatchewsky
 * \version 1.0
 * \date April 2018
 */

/*!
 * \fn void display(Board cells)
 * \brief Display a board on terminal
 * \param cells Board to display
 */
void display(Board cells);

/*!
 * \fn void loadFile(Board &cells)
 * \bried Loads a board from a formatted text file
 * \param cells Board to load
 */
void loadFile(Board &cells);

/*!
 * \fn int main()
 * \brief Program's entry
 */
int main(){
  Board cells4;
  loadFile(cells4);
  display(cells4);
  Grid g = Grid();
  g.load(cells4);
  g.solve();
  g.save(cells4);
  display(cells4);

  return 0;
}

void display(Board cells){
  for(int i = 0 ; i < 9 ; i++){
    cout << "\n";
    for(int j = 0 ; j < 9 ; j++){
      cout << cells[i][j];
    }
  }
  cout << endl;
}

void loadFile(Board &cells){
  string chain;
  cout << "Fichier contenant la grille : ";
  cin >> chain;
  ifstream file(chain.c_str());
  int i(0);
  while(getline(file, chain) && i < 9){
    for(int j = 0 ; j < 9 ; j++){
      cells[i][j] = (chain[j]-48);
    }
    i++;
  }
  file.close();
}
