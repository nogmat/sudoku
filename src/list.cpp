#include "list.hpp"

/*!
 * \file list.cpp
 * \brief Implementation of class List
 * \author Matthieu Nogatchewsky
 * \version 1.0
 * \date April 2018
 */

List::List() : blank(true) {
  values = new SubList();
};

List::~List(){
  delete values;
}

void List::merge(List* l){
  if(blank){
    for(int i = 0 ; i < l->size() ; i++){
      values->push_back(l->at(i));
    }
    blank = false;
  } else {
    SubList* t = new SubList();
    Numerous m(0), n(0);
    while( m < size() && n < l->size() ){
      if(at(m) < l->at(n)){
	m++;
      } else if(at(m) > l->at(n)){
	n++;
      } else {
	t->push_back(at(m));
	m++; n++;
      }
    }
    delete values;
    values = t;
  }
  delete l;
}

void List::push(Numerous v){
  values->push_back(v);
}

Numerous List::at(Numerous i){
  return values->at(i);
}

Numerous List::size(){
  return values->size();
}

bool List::empty(){
  return (values->size() == 0);
}
