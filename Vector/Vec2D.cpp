//
// Created by asad on 9/16/21.
//

#include "Vec2D.h"
#include "/Users/asad/Desktop/PortFolio/Hangman/Utils/Utils.h"
#include <cassert>
#include <cmath>

const Vec2D Vec2D::zero;
Vec2D::Vec2D(int x, int y)
{
    x_ = x;
    y_ = y;
}

float Vec2D::getX() const {
    return x_;
}

void Vec2D::setX(int x) {
    x_ = x;
}

float Vec2D::getY() const {
    return y_;
}

void Vec2D::setY(int y) {
    y_ = y;
}

std::ostream& operator<< (std::ostream &consoleOut, const Vec2D &vec)
{
    consoleOut << "X: " << vec.x_ << ", Y: " << vec.y_ << std::endl;
    return consoleOut;
}
bool Vec2D::operator==(const Vec2D &vec)
{
    return isEqual(x_, vec.x_) && isEqual(y_, vec.y_);
}
bool Vec2D::operator!=(const Vec2D &vec)
{
    return !((*this) == vec);
}
Vec2D Vec2D::operator-() const
{
    return Vec2D(-x_, -y_);
}
Vec2D Vec2D::operator*(float const &scalar) const
{
    return Vec2D(x_*scalar, y_*scalar);
}
Vec2D Vec2D::operator/(const float &scalar) const
{
    assert(fabsf(scalar) > EPSILON);
    return Vec2D(x_*1/scalar, y_*1/scalar);
}
Vec2D &Vec2D::operator*=(const float &scalar)
{
    this->x_*=scalar;
    this->y_*=scalar;
    return *this;
}
Vec2D &Vec2D::operator/=(const float &scalar)
{
    assert(fabsf(scalar) > EPSILON);
    this->x_/=scalar;
    this->y_/=scalar;
    return *this;
}
Vec2D operator*(float scalar, const Vec2D& vec)
{
    return Vec2D(vec.x_*scalar, vec.y_*scalar);
}
Vec2D operator/(float scalar, const Vec2D& vec)
{
    return Vec2D(vec.x_*1/scalar, vec.y_*1/scalar);
}

Vec2D Vec2D::operator+(const Vec2D &obj) const
{
    Vec2D temp(this->x_ + obj.x_ , this->y_ + obj.y_);
    return temp;
}

Vec2D Vec2D::operator-(const Vec2D &obj) const
{
    Vec2D temp(this->x_ - obj.x_ , this->y_ - obj.y_);
    return temp;
}

Vec2D &Vec2D::operator+=(const Vec2D &obj)
{
    this->x_+obj.x_; this->y_+obj.y_;
    return *this;
}

Vec2D &Vec2D::operator-=(const Vec2D &obj)
{
    this->x_-obj.x_; this->y_-obj.y_;
    return *this;
}
float Vec2D::magnitude() const
{
    float mag = sqrt((x_ * x_) + (y_ * y_));
    return mag;
}

Vec2D Vec2D::getUnitVec() const
{
    float mag = this->magnitude();
    if (mag > EPSILON)
    {
        Vec2D temp(this->x_ / mag, this->y_ / mag);
        return temp;
    }
    return Vec2D::zero;
}

Vec2D &Vec2D::normalize()
{
    float mag = this->magnitude();
    if (mag > EPSILON)
    {
        *this /= mag;
    }
    return *this;
}
float Vec2D::distance(const Vec2D &vec) const
{
    return (vec - *this).magnitude();
}
float Vec2D::dotProduct(const Vec2D &vec) const
{
    float dot = this->x_*vec.x_ + this->y_ *vec.y_;
    return dot;
}

Vec2D Vec2D::projectOnto(const Vec2D &vec2) const
{
    Vec2D unitVec2 = vec2.GetUnitVec();
    float dot = dotProduct(unitVec2);
    return unitVec2 * dot;
}
float Vec2D::angleBetween(const Vec2D &vec2) const
{
    return acosf(GetUnitVec().dotProduct(vec2.GetUnitVec()));
}

