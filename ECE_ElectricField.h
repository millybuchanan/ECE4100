/*
* Author: Milly Buchanan (they/them)
* Last Modified: 24-Sep-2023
* Organization: ECE 4122/6122 - Lab 1
* 
* Description: Header file for ECE_ElectrifField.cpp
* Contains class definition for ElectricCharge objects.
* 
*/

#pragma once

#include "ECE_PointCharge.cpp"

class ElectricField : public PointCharge
{
    public:
        ElectricField(double, double, double , double);
        void computeFieldAt(double, double, double);
        void getElectricField(double, double, double);
    protected:
        double Ex, Ey, Ez;

};