cmake_minimum_required(VERSION 3.20)
project (Hangman)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hangman main.cpp MyString/MyString.h MyString/MyString.cpp Point2D/Point2D.h Point2D/Point2D.cpp Fractions/Fractions.cpp Fractions/Fractions.h)
