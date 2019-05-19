#include "dofxyrz.h"
#include <iostream>

DOFxyRz :: DOFxyRz()
{
    xyVector = {0.0,0.0};
    Rz = 0.0; 
}

std::ostream & operator<<(std::ostream &out, const DOFxyRz &obj)
{
    out << "xyz= [" << obj.xyVector << ", " << obj.Rz <<"]";
    return out;
}

void DOFxyRz::setRz(double z)
{
    Rz = z;
}

double DOFxyRz::getRz() const
{
    return Rz;
}

DOFxyRz operator+(DOFxyRz &lhs, DOFxyRz & rhs)
{
    DOFxyRz sum;
    sum.xyVector = lhs.xyVector + rhs.xyVector;
    sum.Rz = lhs.Rz;
    return sum;
}