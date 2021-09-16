//
// Created by asad on 9/15/21.
//

#ifndef HANGMAN_FRACTIONS_H
#define HANGMAN_FRACTIONS_H
#include <iostream>

class Fractions {
public:
    Fractions(int deno = 0, int nume = 0);
    int getDeno() const;
    void setDeno(int n);
    int getNume() const;
    void setNume(int d);
    bool operator==(const Fractions &rhs) const;
    bool operator!=(const Fractions &rhs) const;
    Fractions operator+ (const Fractions &rhs) const;
    Fractions operator- (const Fractions &rhs) const;
    Fractions operator* (const Fractions &rhs) const;
    Fractions operator/ (const Fractions &rhs) const;
    void Display();

private:

    int lowerNumber(int x, int y)
    {
        int lower = x;
        if (x > y)
        {
            lower = y;
        }
        return lower;
    }


    int gCDEuclid(int x, int y)
    {
        if (x == 0 || y == 0)
        {
            return 0;
        }
        else if (x < 0)
        {
            x*=-1;
        }
        else if (y < 0)
        {
            y*=-1;
        }
        int lowNum = x;
        int highNum = y;
        if (x > y)
        {
            highNum = x;
            lowNum = y;
        }
        int remainder = 0;
        do
        {
            int quotient = highNum / lowNum;
            remainder = highNum - (lowNum * quotient);
            if (remainder == 0)
            {
                return lowNum;
            }
            highNum = lowNum;
            lowNum = remainder;
        } while (remainder > 0);
        if (remainder == 0)
        {
            return 1 ;
        }
        else
        {
            return remainder;
        }
    }
    int deno_;
    int nume_;

};


#endif //HANGMAN_FRACTIONS_H
