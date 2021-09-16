#include <iostream>
#include "/Users/asad/Desktop/PortFolio/Hangman/Point2D/Point2D.h"
#include "/Users/asad/Desktop/PortFolio/Hangman/MyString/MyString.h"
#include "Fractions/Fractions.h"

#include "Vector/Vec2D.h"

int main()
{
    Vec2D aVec(5,10);
    Vec2D bVec(10, 20);
    Vec2D cVec(3, 7);
    bool isTrue = aVec != bVec;
    std::cout << isTrue << std::endl;
    std::cout << sizeof(isTrue) << std::endl;
    std::cout << aVec << std::endl << bVec << std::endl;
    std::cout << -cVec << std::endl;
    std::cout << bVec*-2 << std::endl;
    Vec2D resultVec = aVec * 3;
    Vec2D rVec = 3 * bVec;
    std::cout << aVec.magnitude() << std::endl;

    return 0;
}
