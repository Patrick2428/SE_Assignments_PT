#include <iostream>
#include "Event_Selection.h"
#include "rotationMotor.h"

void selectEvent (rotationMotor *rm , std::string selection)
{
  bool shutdown = false;

  while (shutdown == false)
  {
  std::cout <<"/*************************************************************/\n";
  std::cout << "Current RPM:\t\t " << rm->getRpm() <<std::endl;
  std::cout << "Max Positive RPM:\t " << rm->getMPRpm() <<std::endl;
  std::cout << "Max Negative RPM:\t" << rm->getMNRpm() <<std::endl;
  std::cout <<"\n";
  std::cout << "To increase RPM   : -incRPM-" << std::endl;
  std::cout << "To decrease RPM   : -decRPM-" << std::endl;
  std::cout << "To restart        : -restart-" << std::endl; 
  std::cout << "To shutdown       : -shutdown-" << std::endl;
  std::cout <<"/*************************************************************/\n";
  std::cout << std::endl;
    std::cin >> selection;
    if(selection == "incRPM")
    {
      rm->incRpm();
    }
    else if(selection == "decRPM")
    {
      rm->decRpm();
    }

    else if(selection == "restart")
    {
      rm->resetRpm();
    }

    else if(selection == "shutdown")
    {
      rm->resetRpm();
      std::cout<<"..." <<std::endl;
      std::cout <<"Device will now shutdown"<<std::endl;
      shutdown = true;
    }
    else
    {
      std::cerr <<"Error: Unkown input, try again"<<std::endl;
    }

  }

}