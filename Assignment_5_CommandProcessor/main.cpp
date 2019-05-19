#include <iostream>
#include "rotationMotor.h"
#include <string>
#include "CommandProcessor.h"

int main(void)
{
  std::string selection;
  rotationMotor rotMotor;
  CommandProcessor cmdp;
  bool start = false;

  cmdp.addCommand("start", [&rotMotor, &start]() { start = rotMotor.start(); });

  while (start == false)
  {
    std::cout << "Enter start to initiate the motors" << std::endl;
    std::cin >> selection;
    cmdp.executeCommand(selection);
  }

  cmdp.addCommand("shutdown", std::bind(&rotationMotor::shutdown, &rotMotor));
  cmdp.addCommand("incrementRPM", std::bind(&rotationMotor::incRpm, &rotMotor));
  cmdp.addCommand("decrementRPM", std::bind(&rotationMotor::decRpm, &rotMotor));
  cmdp.addCommand("getRPM", [&rotMotor]() { std::cout << "The current RPM is: " << rotMotor.getRpm() << std::endl; });
  cmdp.addCommand("reset", std::bind(&rotationMotor::resetRpm, &rotMotor));

  selection.clear();
  while (1)
  {
    std::cout << "Motor options: 'incrementRPM' 'decrementRPM' 'shutdown' 'getRPM' 'reset'" << std::endl;
    std::cin >> selection;
    cmdp.executeCommand(selection);
  }
}
