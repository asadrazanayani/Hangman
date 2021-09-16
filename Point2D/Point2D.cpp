//
// Created by asad on 9/15/21.
//

#include "Point2D.h"
#include <iostream>
// we like encapsulation cause it allows us to change the implementation without messing with the interface
// one downside is that we actually do not know the internal working. It can be very inefficient for something basic.
void Point2D::set(int x, int y) //implementation
{
    x_ = x;
    y_ = y;
}
void Point2D::display()
{
    std::cout << "X: " << x_ << ", Y: " << y_ << std::endl;
}
void Point2D::setX(int x)
{
    x_ = x;
}
void Point2D::setY(int y)
{
    y_ = y;
}
int Point2D::getX(int x)
{
    return x_;
}

int Point2D::getY(int y)
{
    return y_;
}

Point2D::Point2D(int x, int y)
{
    x_ = x;
    y_ = y;
}
Point2D::~Point2D() {}
