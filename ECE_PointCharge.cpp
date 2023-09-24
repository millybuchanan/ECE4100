/*
* Author: Milly Buchanan (they/them)
* Last Modified: 24-Sep-2023
* Organization: ECE 4122/6122 - Lab 1
* 
* Description: Header file for ECE_PointCharge.cpp
* Contains class definition for PointCharge objects.
* 
*/
#include "ECE_PointCharge.h"

PointCharge::PointCharge()
{
    // nothing happens here
}

void PointCharge::setLocation(double a, double b, double c)
{
    x = a;
    y = b;
    z = c;
}

void PointCharge::setCharge(double d)
{
    q = d / 1000; // convert from mC to C
}