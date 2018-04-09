#ifndef DEF_LIST
#define DEF_LIST

/*!
 * \file list.hpp
 * \brief List of values with specifics methods
 * \author Matthieu Nogatchewsky
 * \version 1.0
 * \date April 2018
 */
#include <vector>

typedef short int Numerous;
typedef std::vector<short int> SubList;

/*!
 * \class List
 * \brief Class for list implementation
 */
class List{
  
public :

  /*!
   * \brief Constructor
   */
  List();

  /*!
   * \brief Destructor
   */
  ~List();

  /*!
   * \brief Find commons values with another list
   * \param l Another list to merge
   */
  void merge(List* l);

  /*!
   * \brief Push a value in the list
   * \param v Value to push
   */
  void push(Numerous v);

  /*!
   * \brief Get value in list
   * \param i Index of value to get
   */
  Numerous at(Numerous i);

  /*!
   * \brief Get size of list
   * \return Size of list
   */
  Numerous size();

  /*!
   * \brief Test if list is empty
   * \return Result of test
   */
  bool empty();

private :

  SubList* values; /*!< Values of list */
  bool blank; /*!< Test if list has not been initialized */

};


#endif
