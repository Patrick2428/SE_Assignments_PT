#include "devices.h"
#include <iostream>
#include <stdlib.h>

Motor :: ~Motor()
{
  setSpeed(0);
  std::cout<<"--Destructor--"<<std::endl;
  std::cout << "Motors speed = " <<  speed_ << " -shutdown " << std::endl; 
}
void Motor :: initialise()
{
  std::cout<<"--initialise--"<<std::endl;
  speed_ = 0;
  std::cout<<"initialising motor - speed: 0"<<std::endl;
}

void Motor :: reset()
{
  std::cout<<"--reset--"<<std::endl;
  speed_ = 0;
  std::cout<<"resetting motor - speed: 0"<<std::endl;
}

void Motor :: shutdown()
{
  std::cout<<"--shutdown--"<<std::endl;
  speed_ = 0;
  std::cout<<"motor turned off - speed: 0"<<std::endl;
  
}

void Motor :: setSpeed(double speed)
{
  speed_ = speed;

}

double Motor :: getSpeed() const
{
  return speed_;
}

