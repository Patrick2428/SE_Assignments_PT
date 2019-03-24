#include <iostream>
#include "CartVec2D.h"

int main(void)
{
    CartVec2D cV1{-12.0,6.5}, cV2{5.5, 2.0};

    // Scalar multiplication
    std::cout << cV1 * 3.0 << std::endl;
    std::cout << 3.5 * cV2 << std::endl;

    //Adding two vectors
    std::cout << cV1 + cV2 << std::endl;

    // Unary – operator.
    std::cout << -cV1 << std::endl;

    //Calculating magnitude
    std::cout << cV1.length() <<std::endl;

    //+= operator
    std::cout << cV1.operator+=(cV1) <<std::endl;
    std::cout << cV1.operator-=(cV1) <<std::endl;



    return 0;

}