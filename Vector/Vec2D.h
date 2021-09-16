//
// Created by asad on 9/16/21.
//

#ifndef HANGMAN_VEC2D_H
#define HANGMAN_VEC2D_H
#include <iostream>
/*
 A vector is a representation of a magnitute and a direction.
 negating vector means changing the direction
 Multiply/division by a scalar
 addition and subtraction of 2 vectors
 magnitude of the vector, using the pythagoras theorem
 normalizing the vector means making the magnitude touch the unit circle radius
 distance between the head of two points. So essentially we have to find a vector that goes between them
 */

class Vec2D {
public:
    static const Vec2D zero; // x and y both set to 0. //origin
    Vec2D(int x = 0, int y = 0);
    float getX() const;
    void setX(int x);
    float getY() const;
    void setY(int y);
    friend std::ostream &operator << (std::ostream &consoleOut, const Vec2D &vec);
    bool operator==(const Vec2D &vec);
    bool operator != (const Vec2D &vec);
    Vec2D operator -() const; // const means that our calling Vec2D's internal will not change.
    Vec2D operator *(float const &scalar) const;
    Vec2D operator /(float const &scalar) const;
    Vec2D &operator *= (float const &scalar);
    Vec2D &operator /= (float const &scalar);
    friend Vec2D operator* (float scalar, const Vec2D& vec);
    friend Vec2D operator/ (float scalar, const Vec2D& vec);
    Vec2D operator- (const Vec2D &obj) const;
    Vec2D operator+ (const Vec2D &obj) const;
    Vec2D &operator+= (const Vec2D &obj);
    Vec2D &operator-= (const Vec2D &obj);
    float magnitude () const;
    Vec2D GetUnitVec() const;
    Vec2D &Normalize();
    float distance(const Vec2D &vec) const;


private:
    float x_;
    float y_;
};


#endif //HANGMAN_VEC2D_H
