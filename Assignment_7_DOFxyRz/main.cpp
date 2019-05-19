#include <iostream>
#include "dofxyrz.h"


int main(void)
{
    CartVec2D* cV1 = new CartVec2D(2.5, 5.5);
    DOFxyRz roomba(*cV1, 3.5), roomba2(*cV1, 5.5), roomba3;

    std::cout << "roomba1 and roomba2 : " <<std::endl;
    std::cout << roomba << "\t";
    std::cout << roomba2 <<std::endl;
    roomba3 = roomba + roomba2;
    std::cout<<"roomba1 + roomba2 = "<<std::endl;
    std::cout << roomba3 << std::endl;

    return 0;
}