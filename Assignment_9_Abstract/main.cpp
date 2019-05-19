#include "devices.h"
#include <iostream>
#include <string>

int main(void)
{
  Motor m1("m001"),m2("m002"),m3("m003");

  m1.setSpeed(150.5);
  m2.setSpeed(111.11);
  m3.setSpeed(-200);

  m2.initialise();
  std::cout<< "The speed of the motors:\n";
  std::cout<<"m1: " << m1.getSpeed() << std::endl;
  std::cout<<"m2: " << m2.getSpeed() << std::endl;
  std::cout<<"m3: " << m3.getSpeed() << std::endl;
  m1.shutdown(); 
  m3.reset();
  return 0;
}
