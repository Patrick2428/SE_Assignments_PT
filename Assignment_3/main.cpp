#include <iostream>
#include <array>
#include "rotationMotor.h"

int main(void)
{

// C++11 STL array template class, parameters between < and >
// Using C++11 uniform initialisation by an initializer_list {...}
  std::array<int, 3> ar{2, -2, 3};
  std::array<int, 3> ar2;
  rotationMotor rM[4];
// Range-based for loop, el is not the index of a specific
// element in the array!
// e1 is a reference to an array element in ar (we used &),
// now we can change the contents of the array.
// auto declaration: type will be deduced by the compiler.
ar2 = ar;
 std::cout<< "contents of array 2 are:" <<std::endl;
for(auto el: ar2)
  {
    std::cout << el << " ";
  }
 std::cout<<std::endl;
  std::cout<< "contents of array 2 are:" <<std::endl;
for (auto& el: ar)
{
  std::cout << el << " ";
el *= 10;
}
 std::cout << std::endl;
ar[0] = 10 * ar[1];
//std::cout << ar.at(4);
for (const auto el: ar)
{
  std::cout << el << " ";
}
 std::cout << "\n\n";
 std::cout << "The current RPM of all 4 rotationMotors:" << std::endl;
 for(auto rt: rM)
   {
     std::cout << rt.getRpm() <<" ";
   }
 std::cout<< std::endl;
std::cout << "The new  RPM of all 4 rotationMotors:" << std::endl;
 for(auto& crt:rM)
   {
     crt.setRpm(1500);
     std::cout << crt.getRpm() <<" ";
   }
 std::cout <<std::endl;
 return 0;
}

//B. What is the output of the code code block if we remove & in the second line? Why?
//Output: 2 -2 3 \n -20 -2 3
//-- This is the output because el is not a reference of the
//array anymore meaning the value is a copy of ar and does not change the array values
//outside the loop--

//C. Why should you use const in the second for loop?
//--The const insures that you can't change any values in this loop, insuring it is
//only used for printing the array--

//D. The second range-based for-loop does not contain an &.
//What will happen now for el?
//-- el will simply make copies of the content of the array ar. and not be
//passed as a reference. This means that whatever changes occur to el will not
//effect ar outside that function. the changes are not passed on from the loop.--

//E. We can also use ar.at(1) instead of ar[1]. What is the difference?
//See for a string example using at(), see [C++, p.1259].
//-- the at() method differs as it provides bound checking and throws an out
//of range exception if the postion mentioned is greater than the size
//of the array. As with the normal operator[] method it doesnt do bound
//checking and would perfom undefined behaviour if the position is greater
//than the size--.

//F. Show in the code that you can copy ar to a new array of the same type using an
//assignment. Could you do the same with a classic C-array?
//-- You are not able to copy the contents of one array to another in C by
//simply using the assignment operator(=). What you can do is assign one position at a
//time, meaning that you would have to construct a for loop which assigns the value a
//each postion of the one array to the other--
