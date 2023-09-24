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

#include <cmath>

#include "ECE_ElectricField.h"

using namespace std;

ElectricField::ElectricField(double a, double b, double c, double d)
{
    setLocation(a, b, c);
    setCharge(d);

    Ex = 0;
    Ey = 0;
    Ez = 0;    
}

void ElectricField::computeFieldAt(double x, double y, double z)
{
    double r_mag = sqrt((x * x) + (y * y) + (z * z));
    double r_hatX = x / r_mag;
    double r_hatY = y / r_mag;
    double r_hatZ = z / r_mag;

    Ex = (k * q * r_hatX) / pow(r_mag, 2);
    Ey = (k * q * r_hatY) / pow(r_mag, 2);
    Ez = (k * q * r_hatZ) / pow(r_mag, 2);
}

void ElectricField::getElectricField(double &x, double &y, double &z)
{
    x = Ex;
    y = Ey;
    z = Ez;
}
