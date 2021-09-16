//
// Created by asad on 9/15/21.
//

#ifndef HANGMAN_MYSTRING_H
#include <iostream>

class MyString{
private:
    char *letter_;
    int length_;
public:
    MyString(const char *letter);
    MyString();
    MyString(const MyString &obj);
    void display();
    int getLength() const;
    char* getchars() const;
    ~MyString();
};
#define HANGMAN_MYSTRING_H

#endif //HANGMAN_MYSTRING_H
