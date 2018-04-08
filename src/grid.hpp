#ifndef DEF_GRID
#define DEF_GRID

#include "entity.hpp"

/*!
 * \file grid.hpp
 * \brief Grid of standard sudoku game
 * \author Matthieu Nogatchewsky
 * \version 1.0
 * \date April 2018
 */

typedef int Board[9][9];

/*!
 * \class Grid
 * \brief Class of a grid
 */
class Grid{

public :

  /*!
   * Constructor
   */
  Grid();

  /*!
   * \brief Initialize the grid
   */
  void initGrid();

  /*!
   * \brief Load internal board from external board
   * \param extCells External board to load
   */
  bool load(Board extCells);

  /*!
   * \brief Save internal board into external board
   * \param extCells External Board in which to save
   */
  void save(Board &extCells);

  /*!
   * \brief Initialize the position in the grid
   */
  void initCell();

  /*!
   * \brief Increase the position
   */
  void nextCell();

  /*!
   * \brief Decrease the position
   */
  void prevCell();  

  /*!
   * \brief Move a step forward during the process
   * \param v Value to put inside the current cell
   */
  void nextStep(int v);

  /*!
   * \brief Move a step before during the process
   * \param v Value to remove from the current cell
   */
  void prevStep(int v);

  /*!
   * \brief Recursive helper for the solve method
   */
  void processing();

  /*!
   * \brief Solve the grid
   */
  void solve();

  /*!
   * \brief Get the square of the current cell
   * \return Number of the current square
   */
  int theSquare();

  /*!
   * \brief Get the column of the current cell
   * \return Number of the current column
   */
  int theColumn();

  /*!
   * \brief Get the row of the current cell
   * \return Number of the current row
   */
  int theRow();

private :

  int position; /*!< Position on the grid (from top to bottom and left to right)*/
  enum State {
    PROCESSING,
    SOLVED,
    UNSOLVABLE
  } state ; /*!< State of the grid */
  Board cells; /*!< Internal board of the grid */
  Entity row[9]; /*!< Rows of the grid */
  Entity column[9]; /*!< Columns of the grid */
  Entity square[9]; /*!< Squares of the grid */

};

#endif
