//
// Created by asad on 9/15/21.
//

#include "Fractions.h"

Fractions::Fractions(int deno, int nume)
{
    int GCD = gCDEuclid(nume,deno);
    if (deno != 0 || nume != 0)
    {
        deno_ = deno / GCD;
        nume_ = nume / GCD;
    }
    else
    {
        deno_=deno;
        nume_=nume;
    }
}

int Fractions::getDeno() const {
    return deno_;
}

void Fractions::setDeno(int n)
{
    this->deno_ = n;
}

int Fractions::getNume() const {
    return nume_;
}

void Fractions::setNume(int n)
{
    this->nume_ = n;
}

bool Fractions::operator==(const Fractions &rhs) const {
    return deno_ == rhs.deno_ &&
           nume_ == rhs.nume_;
}

bool Fractions::operator!=(const Fractions &rhs) const {
    return !(rhs == *this);
}

Fractions Fractions::operator+(const Fractions &rhs) const
{
    Fractions temp(this->deno_ * rhs.deno_, ((this->nume_ * rhs.deno_) + (this->deno_ * rhs.nume_)));
    return temp;
}

Fractions Fractions::operator-(const Fractions &rhs) const
{
    Fractions temp(this->deno_ * rhs.deno_, ((this->nume_ * rhs.deno_) - (this->deno_ * rhs.nume_)));
    return temp;
}
Fractions Fractions::operator*(const Fractions &rhs) const
{
    Fractions temp(this->deno_ * rhs.deno_ , this->nume_*rhs.nume_);
    return temp;
}
Fractions Fractions::operator/(const Fractions &rhs) const
{
    Fractions temp(this->deno_ * rhs.nume_ , this->nume_ * rhs.deno_);
    return temp;
}
void Fractions::Display()
{
    std::cout << std::endl;
    std::cout << this->nume_ << std::endl;
    std::cout << "_" << std::endl;
    std::cout << this->deno_ << std::endl;
}
