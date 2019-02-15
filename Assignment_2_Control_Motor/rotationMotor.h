#ifndef ROTATIONMOTOR_H_
#define ROTATIONMOTOR_H_

#include <iostream>

class rotationMotor
{
 public:
 rotationMotor(int CRpm = 0): currentRpm(CRpm){}
  int getRpm();
  int getMPRpm() const;
  int getMNRpm() const;
  void resetRpm();
  void incRpm();
  void decRpm();

 private:
  int currentRpm;
  static const int maxPosRpm = 3000;
  static const int maxNegRpm = -1500;
  static const int changeRpm = 1000;

};

#endif 
