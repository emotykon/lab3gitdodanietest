#include <iostream>
#include"tank.hpp"
#include"tankarmor.hpp"
int main(){
    Tankarmor tank1a;
    Tankarmor tank2a(77);
    std::cout<< tank1a.get_formatted_armor() <<std::endl;
    std::cout<< tank2a.get_formatted_armor() <<std::endl;
    tank tank1;
    tank tank2("7tp","POLAND",120,23);
    tank tank3("GERMANY",500,123);
    tank1.print();
    tank2.print();
    tank3.print();
}