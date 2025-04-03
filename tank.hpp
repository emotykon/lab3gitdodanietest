//
// Created by jakubmotyka on 03.04.25.
//

#ifndef TANK_HPP
#define TANK_HPP

#include <string>
#include "tankarmor.hpp"

class tank{
  private:
    std::string nazwa;
    std::string kraj;
    unsigned int ilosc;
    Tankarmor armor;
  public:
    tank();
    tank(std::string nazwa, std::string kraj ,unsigned int ilosc, Tankarmor armor);
    tank(std::string kraj,unsigned int ilosc, Tankarmor armor);
    void print();


  };






















#endif //TANK_HPP
