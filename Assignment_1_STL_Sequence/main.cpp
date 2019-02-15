#include <iostream>
#include <string>
#include <vector>
#include <list>

int main(void)
{
  //Initialize two strings (S1 ,S2) with some text
  std::string S1("Working on SE lab!!");
  std::string S2("Lets do this!!");
  //S3 copy of S2
  std::string S3(S2);

  //Initialize a Vector
  std::vector<int> V1(3,44);

  //Initialize two lists (L1, L2)
  std ::list<int> L1(4,5);
  std ::list<int> L2(4,0);

  // Using the default constructor.
  std:: vector<std::string> vdata1;
  // Using an initialiser list for initialisation.
  std::vector<std::string> vdata2{"start", "setspeed 2", "stop"};
  std::vector<std::string> vdata3{"New content", "Acceleration", "setspeed 5", "velocity 3"};

  //TASK A
  
  std::cout<<"S1:\t"<< S1 << std::endl;
  std::cout<<"S2:\t"<< S2 << std::endl;
  std::cout<<"S3:\t"<< S3 << std::endl;
  std::cout<<std::endl;
  //Empty and Assign new contents to string S2
  S2.clear();
  S2.assign("Almost done");
  std::cout<< S2 << std::endl;
  
  //Insert new content into S1
  S1.insert(19, " This is so much fun");
  std::cout << S1 << std::endl;

  if(S2.compare(S3) != 0)
    {
      std::cout<< "S2 is not the same as S3 anymore" << std::endl;
    }
  std::cout<<std::endl;

  //TASK B

  //Show the results of V1 using a range based for loop

  std::cout<<"V1 contains: ";
  for( auto x : V1)
    {
      std::cout<< x << " ";
    }
  std::cout<<std::endl;

  //TASK C

  //Show the Initialised lists
  std::cout<<std::endl;
  std::cout<<"List 1 contents:\t";
  for(auto x : L1)
    {
      std::cout << x << " ";
    }
  std::cout<<std::endl;
  std::cout<<"List 2 contents:\t";
  for(auto x : L2)
    {
      std::cout << x << " ";
    }

  std::cout<<std::endl;

  //Change the contents of List 2
  L2.assign(4,5 );
  std::cout<<"List 2 new contents:\t";
  for(auto x : L2)
    {
      std::cout<< x << " ";
    }
  
  std::cout<<std::endl;

  //Compare L1 with L2

  if(L1 == L2)
    {
      std::cout << "L1 and L2 are the same"<< std::endl;
    }
  else
    {
      std::cout << "L1 and L2 are not the same"<< std::endl;
    }

  std::cout<<std::endl;

  //TASK D

  vdata1 = vdata2;
  
  std::cout <<"The size of vdata1: " << vdata1.size() << std::endl;
  std::cout << "The contents of vdata1[1]:\t"<< vdata1[1] << std::endl;

  std::cout << "The contents of vdata2:\t\t";
  for(auto x : vdata2)
    {
      std::cout<< x << "; ";
    }
  std::cout<<std::endl;

  //Change the contents of vdata1

  vdata1.clear();
  vdata1 = vdata3;
  std::cout << "The new contents of vdata1:\t";
  for(auto x : vdata1)
    {
      std::cout<< x << "; ";
    }
  std::cout<<std::endl;

  //Compare the contents of vdata1 and vdata2
  bool data = false;
  
  for (auto y : vdata1)
    {
      for(auto z : vdata2)
	{
	  if ( y == z)
	    {
	       data = true;
	    }
	  
	}

    }
  if( data == true)
    {
      std::cout << "Some of the data of vdata1 and vdata2 is the same" << std::endl;
    }
  else
    {
      std::cout << "None of the data of vdata1 and vdata2 is the same" << std::endl;
    }

  return 0;  
}
