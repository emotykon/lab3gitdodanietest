//
// Created by jakubmotyka on 03.04.25.
//

#ifndef COUNTRY_HPP
#define COUNTRY_HPP
#include"tank.hpp"
#include <cstring>

class Country{
  private:
    tank* tanks;
    unsigned int capacity;
    unsigned int size;
  public:
    Country(unsigned int capacity = 10);
    void add_tank( tank tank);
    void print();
};

#endif //COUNTRY_HPP
