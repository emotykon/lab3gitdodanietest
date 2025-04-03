//
// Created by jakubmotyka on 03.04.25.
//
#include "tank.hpp"
#include<iostream>
tank::tank(): nazwa("UO"),kraj("UC"), ilosc(0), armor(0){}
tank::tank(std::string nazwa,std::string kraj,unsigned int ilosc, Tankarmor armor):nazwa(nazwa),kraj(kraj),ilosc(ilosc),armor(armor){}
void tank::print(){
  std::cout<<"Name: "<<nazwa<<" Country: "<<kraj<<" Count: "<<ilosc<<" Armor: "<<armor.get_formatted_armor()<<std::endl;
  }
tank::tank(std::string kraj,unsigned int ilosc, Tankarmor armor):nazwa("UO"),kraj(kraj),ilosc(ilosc),armor(armor){}