#include "entity.hpp"

/*!
 * \file entity.cpp
 * \brief Implementation of class Entity
 * \author Matthieu Nogatchewsky
 * \version 1.0
 * \date April 2018
 */

Entity::Entity(){
  initEntity();
}

void Entity::initEntity(){
  for(int i = 0 ; i < 9 ; i++){
    values[i] = true;
  }
}  

bool Entity::addValue(int v){
  if(v>=1 && v<=9){
    if(values[v-1]){
      values[v-1] = false;
      return true;
    }
  }
  return false;
}

List* Entity::getList(){
  List* l = new List();
  for(int i = 0 ; i < 9 ; i++){
    if(values[i]){
      l->push(i+1);
    }
  }
  return l;
}

void Entity::remValue(int v){
  values[v-1] = true;
}
