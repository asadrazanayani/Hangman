#include <iostream>
#include "/Users/asad/Desktop/PortFolio/Hangman/Point2D/Point2D.h"
#include "/Users/asad/Desktop/PortFolio/Hangman/MyString/MyString.h"
#include "Fractions/Fractions.h"

int main()
{
    /*
    std::cout<<"Hello, World!"<<std::endl;
    Point2D point;
    point.set(10, 5);
    Point2D point2;
    point2.set(7 , 11);
    point2.display();
    point.display();
    Point2D thisPoint {2, 5};
    Point2D myPointBeing = Point2D(0,0);
    thisPoint.display();
    myPointBeing.display();
    MyString name("asad");
    name.display();
    char *ame = name.getchars();
    std::cout << ame << std::endl;
    std::cout << name.getLength() << std::endl;
    std::cout << strlen(ame) << std::endl;
    MyString family[] = {"asad", "marzia"};
    char *family1 = family[0].getchars();
    family[1].display();
    std::cout << family1 << std::endl;
     */
    Fractions basic(3,5);
    Fractions basic1(5, 15);
    Fractions basic3 = basic1 + basic;
    Fractions basic4 = basic3 * basic;
    Fractions basic5 = basic4 / basic3;
    basic.Display();
    basic1.Display();
    basic3.Display();
    basic4.Display();
    basic5.Display();



    return 0;
}
