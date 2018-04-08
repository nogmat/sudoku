#ifndef DEF_ENTITY
#define DEF_ENTITY

/*!
 * \file entity.hpp
 * \brief Entity class is used to check the constraints of sudoku game
 *
 * It can be used to represent rows, columns or squares
 * \author Matthieu Nogatchewsky
 * \version 1.0
 * \date April 2018
 */

#include "list.hpp"

/*!
 * \class Entity
 * \brief Class which represents an entity
 */
class Entity{
  
public :

  /*!
   * \brief Constructor
   */
  Entity();

  /*!
   * \brief Initialize the entity
   */
  void initEntity();

  /*!
   * \brief Set a value as used
   * \param v Value to set as used
   * \return Test if the value has not been set before
   */
  bool addValue(int v);

  /*!
   * \brief Get the free values
   * \return List which contains the free values
   */
  List* getList();

  /*!
   * \brief Set a value as unused
   * \param v Value to set as unused
   */
  void remValue(int v);

private :

  bool values[9]; /*!< Indicates if each value is used */

};
  
  

#endif
