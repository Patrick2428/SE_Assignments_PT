#include <iostream>
#include "rotationMotor.h"

int rotationMotor :: getRpm()
{
  return currentRpm;
}

void rotationMotor :: incRpm()
{
  currentRpm += changeRpm;

  if(currentRpm >= maxPosRpm)
    {
      currentRpm = maxPosRpm;
      std::cout << "RPM is at its positive Max!" << std::endl;
	
    }
    else
    {
      std::cout << "RPM increased by 1000" << std::endl;
      
    }
}

void rotationMotor :: decRpm()
{
  currentRpm -= changeRpm;

  if(currentRpm <= maxNegRpm)
    {
      currentRpm = maxNegRpm;
      std::cout << "RPM is at its negative Max!" << std::endl;
	
    }
    else
    {
      std::cout << "RPM decrease by 1000" << std::endl;

    }
    
}

int rotationMotor :: getMPRpm() const
{
  return maxPosRpm;
}

int rotationMotor :: getMNRpm() const
{
  return maxNegRpm;
}

void rotationMotor :: resetRpm()
{
  currentRpm = 0;
  std::cout << "RPM reset to 0" << std::endl;
}
