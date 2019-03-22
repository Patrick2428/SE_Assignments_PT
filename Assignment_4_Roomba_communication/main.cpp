#include <iostream>
#include "dataFrame.h"

int main(void)
{
  DataFrame frame1;
  DataFrame frame2;
  DataFrame::dataframe_t someData {29,2,25,13,0};
  DataFrame::dataframe_t receivedData {55,21,2,0,1,22,5,4,0,0,10};
  //Testing frame1
  frame1.setData(someData, 5 );
  frame1.show();
  frame1.showAll();
  if(frame1.checksumIsCorrect())
  {
    std::cout<<"Checksum is correct!" << std::endl;
  }
  else
  {
    std::cout<<"Checksum is incorrect!" << std::endl;
  }

  frame1.clearFrame();
  frame1.show();
  frame1.showAll();

  std::cout<<std::endl;
  //Testing frame2
  frame2.setData(receivedData,11);
  frame2.show();
  frame2.showAll();

   if(frame2.checksumIsCorrect())
  {
    std::cout<<"Checksum is correct!" << std::endl;
  }
  else
  {
    std::cout<<"Checksum is incorrect!" << std::endl;
  }

  return 0;
}