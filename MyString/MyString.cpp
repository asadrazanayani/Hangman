//
// Created by asad on 9/15/21.
//

#include "MyString.h"


int MyString::getLength() const
{
    return length_;
}
void MyString::display()
{
    int i = 0;
    while ((this->letter_)[i] != '\0')
    {
        std::cout << this->letter_[i];
        i++;
    }
    std::cout << std::endl;
}
MyString::MyString(const MyString &obj)
{
    delete[] letter_;
    int size = obj.getLength();
    letter_ = new char[size + 1];
    letter_ = obj.getchars();
}
MyString::MyString(const char *letter)
{
    length_ = 0; int i = 0;
    while (letter[i] != '\0')
    {
        length_++; i++;
    }
    letter_ = new char[length_];
    for (int j = 0; j <= length_; j++)
    {
        letter_[j] = letter[j];
    }
}
MyString::MyString()
{
    length_ = 1;
    letter_[0] = '\0';
}

char* MyString::getchars() const
{
    return this->letter_;
}

MyString::~MyString()
{
    delete[] letter_;
    letter_ = nullptr;
}