/*
* Author: Milly Buchanan (they/them)
* Last Modified: 24-Sep-2023
* Organization: ECE 4122/6122 - Lab 1
* 
* Description: Header file for ECE_PointCharge.cpp
* Contains class definition for PointCharge objects.
* 
*/
#pragma once

class PointCharge
{
    public:
        PointCharge();
        void setLocation(double, double, double);
        void setCharge(double);

    protected:
        double x, y, z, q;
        const static uint64_t k = 9000000000;
};
