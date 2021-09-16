//
// Created by asad on 9/16/21.
//

#include "Utils.h"
#include <cmath>

bool isEqual (float x, float y)
{
    return fabs(x - y) < EPSILON;
}
bool isGreaterThanOrEqual(float x, float y)
{
    return x > y || isEqual(x, y);
}
bool IsLessThanOrEqual(float x, float y)
{
    return x < y || isEqual(x, y);
}