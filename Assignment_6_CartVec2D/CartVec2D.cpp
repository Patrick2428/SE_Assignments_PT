#include "CartVec2D.h"
#include <iostream>

double CartVec2D::get_x()
{
    return x_;
}

double CartVec2D::get_y()
{
    return y_;
}

std::ostream& operator<<(std::ostream &os, const CartVec2D &rhs)
{
    os << "[" << rhs.x_<<", "<<rhs.y_<<"]";
    return os;
}

CartVec2D &CartVec2D::operator+=(const CartVec2D &rhs)
{
    x_ += rhs.x_;
    y_ += rhs.y_;
    return *this;
}

CartVec2D &CartVec2D::operator-=(const CartVec2D &rhs)
{
    x_ -= rhs.x_;
    y_ -= rhs.y_;

    return *this;

}

CartVec2D operator+(const CartVec2D &lhs, const CartVec2D &rhs)
{
CartVec2D result;
result += lhs;
result += rhs;
return result;
}

CartVec2D operator-(const CartVec2D &lhs, const CartVec2D &rhs)
{
    CartVec2D result;
    result -= lhs;
    result -= rhs;
    return result;
}

 CartVec2D operator-(CartVec2D &rhs)
{
    rhs.x_ = - rhs.x_;
    rhs.y_ = - rhs.y_;
    return rhs;
}

CartVec2D operator*(const CartVec2D &lhs, const int Scalar)
{
    CartVec2D result;
    result.x_ = lhs.x_ * Scalar;
    result.y_ = lhs.y_ * Scalar;

    return result;
}
CartVec2D operator*(const int scalar, const CartVec2D &rhs)
{
    CartVec2D result;
    result.x_ = rhs.x_ * scalar;
    result.y_ = rhs.y_ * scalar;
    return result;
}

double CartVec2D::length() const
{
    double magnitude = sqrt(pow(x_,2) + pow(y_,2));
    return magnitude;
}