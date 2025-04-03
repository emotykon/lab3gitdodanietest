//
// Created by jakubmotyka on 03.04.25.
//

#ifndef TANKARMOR_HPP
#define TANKARMOR_HPP
#include<string>
class Tankarmor{
  private:
    unsigned int cm;
    unsigned int mm;
  public:
    Tankarmor(): cm(0),mm(0){}
    Tankarmor(unsigned int mm){
      this->cm=mm/10;
      this->mm=mm%10;
      }
    Tankarmor(unsigned int cm, unsigned int mm):cm(cm),mm(mm){}
    unsigned int get_total_armor(){
      return cm*10+mm;
      }
    std::string get_formatted_armor(){
      return +"[ "+ std::to_string(cm) + " cm ," + std::to_string(mm)+" mm ]";
      }
  };







#endif //TANKARMOR_HPP
