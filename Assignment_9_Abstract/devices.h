#ifndef DEVICES_H
#define DEVICES_H

#include <string>


class Device
{
 public:
  
 Device(const std::string &id) : ID_(id){};
  virtual ~Device() = default;

  const std::string &getID() const;
  //abstract functions must be implemented in every derived class

  virtual void initialise() = 0;
  virtual void reset() = 0;
  virtual void shutdown() = 0;

 private:
  const std::string ID_;
  

};

class Motor: public Device
{
 public:
 Motor(const std::string &id) : Device(id) {};
  Motor(const Motor&) = delete; // Makes device not copy-able
  virtual ~Motor();

  void initialise() override;
  void reset() override;
  void shutdown() override;

  void setSpeed(double speed);
  double getSpeed() const;

 private:
  double speed_;

};

#endif
