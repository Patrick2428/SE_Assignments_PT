#ifndef CARTVEC2D_H_
#define CARTVEC2D_H_

#include <iostream>
#include <math.h>

class CartVec2D
{
    friend std::ostream& operator<<(std::ostream &os, const CartVec2D &rhs);
    friend CartVec2D operator+(const CartVec2D &lhs, const CartVec2D &rhs);
    friend CartVec2D operator-(const CartVec2D &lhs, const CartVec2D &rhs);
    friend CartVec2D operator*(const CartVec2D &lhs, const int Scalar);
    friend CartVec2D operator*(const int scalar, const CartVec2D &rhs);
    //Unary operators 
    friend CartVec2D operator-(CartVec2D &rhs);
public:
    CartVec2D(double x, double y): x_(x), y_(y) {}
    /// Using C++11 ctor delegation for the default ctor.
    CartVec2D(): CartVec2D(0.0, 0.0){}
    /// Default copy ctor.
    CartVec2D(const CartVec2D &other) = default;
    /// Default assignment operator.
    CartVec2D& operator=(const CartVec2D &other) = default;
    /// Default dtor.
    ~CartVec2D() = default;

    // += and -= operators are class member functions.
    CartVec2D &operator+=(const CartVec2D &rhs);
    CartVec2D &operator-=(const CartVec2D &rhs);

    /// Magnitude of vector.
    double length() const;

    double get_x();
    double get_y();

private:
    double x_;
    double y_;
// Naming convention class data members, use _ suffix.
};


#endif 