#include <iostream>
#include "dataFrame.h"

//member functions of class DataFrame
DataFrame::DataFrame()
{
  clearFrame();
}

void DataFrame::setData(const DataFrame::dataframe_t &INdata, std::uint8_t INsize)
{
  //sets the data Array
  size = INsize;

  for(int x = 0; x < static_cast<int>(size); x++)
  {
    data[x] = INdata[x];
  }
  setChecksum();
  setDataframe();
}

void DataFrame::setChecksum()
{
uint8_t dataValue = 0;
uint8_t MaxValue = 255;
 for(int x = 0; x < static_cast<int>(size); x++)
 {
   dataValue += data[x];
 }
 
 if(dataValue >= MaxValue)
 {
    checksum = 0;
 }
 else
 {
    checksum = (MaxValue- (dataValue + size));
 }
 
}

void DataFrame::setDataframe()
{
  //sets the dataframe
  dataframe[0] = header;
  dataframe[1] = size;
  for(int y = 0; y < static_cast<int>(size); y++ )
  {
    dataframe[y + 2] = data[y];
  }
  dataframe[size + 2] = checksum;
}

DataFrame::dataframe_t DataFrame::getDataframe()
{
  return dataframe;
}

void DataFrame::show()const
{
  std::cout << "The data within the frames is: " << std::endl;
  for(int x = 0; x < static_cast<int>(size); x++)
    {
      std::cout<<"["<<static_cast<int>(data[x])<<"]"<< ", ";
      
    }	
    std::cout<<"["<<static_cast<int>(checksum)<<"]";
  std::cout<<std::endl;						    
}

void DataFrame::showAll()const
{
  std::cout<< "The contents of the frame: " << std::endl;
  for(auto x : dataframe)
    {
      std::cout<<"["<<static_cast<int>(x)<<"]"<<",";
    }
  std::cout<<std::endl;
  
}

void DataFrame::clearFrame()
{
  dataframe.fill(0);
  data.fill(0);
  checksum = 0;

  std::cout<<"The dataframe was cleared" <<std::endl;
}

bool DataFrame::checksumIsCorrect()const
{
  uint8_t CheckValue = 0;

  for(int x = 1; x < (size + 3); x++)
  {
    CheckValue += dataframe[x];
  }
  
  if( CheckValue == 0xFF)
  {
    return true;
  }
  else
  {
    return false;
  }
  


}
