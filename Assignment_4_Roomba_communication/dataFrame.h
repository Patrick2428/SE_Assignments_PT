#include <array>
#include <iostream>
#include <cstdint>

#ifndef DATAFRAME_h
#define DATAFRAME_h


class DataFrame
{
 public:
  //Constructor
  DataFrame();
  //Typedef of dataframe_t to be an array of value uint8_t
  using dataframe_t = std::array<std::uint8_t,255>;
  //Membership Functions
  DataFrame::dataframe_t getDataframe();
  void setData (const DataFrame::dataframe_t &INdata, std::uint8_t INsize);
  void setChecksum ();
  void setDataframe ();
  void show()const;
  void showAll()const;
  bool checksumIsCorrect() const;
  void clearFrame();
 

 private:
  DataFrame::dataframe_t dataframe;
  DataFrame::dataframe_t data;
  std::uint8_t size;
  std::uint8_t checksum;
  std::uint8_t header;

};

#endif //DATAFRAME_h
