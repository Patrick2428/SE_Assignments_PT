#ifndef DOFXYRZ_H_
#define DOFXYRZ_H_

#include "CartVec2D.h"

class DOFxyRz
{
    friend std::ostream & operator<<(std::ostream &out, const DOFxyRz &obj);
    friend DOFxyRz operator +(DOFxyRz &lhs, DOFxyRz & rhs);
public:
    //constructor
    DOFxyRz();
    DOFxyRz (CartVec2D & vec, double z = 0.0) : xyVector(vec), Rz(z){}

    void setRz (double z);
    double getRz () const;


private:
    CartVec2D xyVector;
    double Rz;

};

#endif