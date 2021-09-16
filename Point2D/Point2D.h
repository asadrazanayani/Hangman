//
// Created by asad on 9/15/21.
//

#ifndef HANGMAN_POINT2D_H
class Point2D{
private: //hidden to the interface users
    // data members are the internal representation of the class.
    // data members determine the size of the object
    int x_;
    int y_;
    static int numPoints; // static in class context owned by the class and all the objects.
public: //interface
    // methods are the how of the class
    //if we have defined any constructor, we do not have the compiler defined constructor
    void set(int x, int y);
    explicit Point2D(int x = 0, int y = 0); //initializer list is initialized before the body of the method
    //one use of initializer list is to call constructors from other constructors
    //another use of initializer list is when we are returning &reference to a data member, since we have to declare and initialize the reference member in one statement
    //explicit word before the constructor means that no implied conversion occurs while the constructor is being called.
    // explicit allows us to make sure that no bugs affect our code.
    void display();
    void setX(int x);
    void setY(int y);
    int getX(int x);
    int getY(int y);
    ~Point2D(); //The destruction order of class data is reverse than they are initialized.
    // we should only code destructor to free a resource that it might be using. A dynamic memory a file handle etc.
};

#define HANGMAN_POINT2D_H

#endif //HANGMAN_POINT2D_H
