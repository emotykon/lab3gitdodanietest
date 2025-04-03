#include <iostream>
#include <memory>
#include <vector>
#include"tank.hpp"
#include"tankarmor.hpp"
#include "Country.hpp"
int main(){
    Tankarmor tank1a;
    Tankarmor tank2a(77);
    std::cout<< tank1a.get_formatted_armor() <<std::endl;
    std::cout<< tank2a.get_formatted_armor() <<std::endl;
    tank tank1;
    tank tank2("7tp","POLAND",120,23);
    tank tank3("GERMANY",500,123);
    tank tank4("PZIII","GERMANY",52300,12);
    tank1.print();
    tank2.print();
    tank3.print();
    tank4.print();
    Country germany;
    germany.add_tank(tank3);
    germany.add_tank(tank4);
    germany.print();
}