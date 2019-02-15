#include <iostream>
#include <array>

int main(void)
{

// C++11 STL array template class, parameters between < and >
// Using C++11 uniform initialisation by an initializer_list {...}
  std::array<int, 3> ar{2, -2, 3};
// Range-based for loop, el is not the index of a specific
// element in the array!
// e1 is a reference to an array element in ar (we used &),
// now we can change the contents of the array.
// auto declaration: type will be deduced by the compiler.
for (auto& el: ar)
{
  std::cout << el << " ";
el *= 10;
}
 std::cout << std::endl;
ar[0] = 10 * ar[1];
for (const auto el: ar)
{
  std::cout << el << " ";
}
 return 0;
}

//b. What is the output of the code code block if we remove & in the second line? Why?
//Output: 2 -2 3 \n -20 -2 3
//-- This is the output because el is not a reference of the
//array anymore meaning the value is a copy of ar and does not change the array values
//outside the loop--

//c.Why should you use const in the second for loop?
//--The const insures that you can't change any values in this loop, insuring it is
//only used for printing the array--
