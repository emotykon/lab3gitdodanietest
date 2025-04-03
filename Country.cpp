//
// Created by jakubmotyka on 03.04.25.
//
#include"Country.hpp"
#include<iostream>

Country::Country(unsigned int capacity):capacity(capacity) ,size(0){
  tanks = new tank[capacity];
}
void Country::add_tank( tank tank){
  size++;
  tanks[size-1]= tank;
}
void Country::print(){
  std::cout<<"Germany: "<<std::endl;
  for (int i=0;i<size;i++){
    std::cout<<i+1<<". ";
    tanks[i].print();
}
}
