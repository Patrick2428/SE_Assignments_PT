#include <iostream>
#include "rotationMotor.h"
#include <string>
#include "Event_Selection.h"


int main (void)
{
  std::string select;
  rotationMotor rm1;
  
  std::cout << "To start the motors   : -start-" << std::endl;
  std::cout << "To exit the software  : -shutdown-" << std::endl;

while(1)
{
  std::cin >> select;

  if(select == "start")
  {
    std::cout << "The motors are now running" << std::endl;
    std::cout << std::endl;
    selectEvent (&rm1, select);
    break;
  }
  else if(select == "shutdown")
  {
    std::cout <<"The program will now shutdown!" << std::endl;
    break;
  }
  else
  {
    std::cerr<<"Error:Wrong start command, try again" <<std::endl;
  }
}
  return 0;
}


