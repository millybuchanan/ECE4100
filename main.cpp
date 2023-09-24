/*
* Author: Milly Buchanan (they/them)
* Last Modified: 11-Sep-2023
* Organization: ECE 4122/6122 - Lab 1
* 
* Description: Main file used to demonstrate proper outputs for calculating
* electric fields
*/

#pragma once

#include <iostream>
#include <chrono>
#include <string>
#include <vector>

#include "ECE_ElectricField.cpp"

int main()
{
    // generic placeholder to help with command line prompts
    string clInput;
    // n and m are for array size
    vector<int> nm;
    // q is the uniform charge in mC.
    double q;
    //x, y, z are used to get coordinates for both separation distances and
    // location in space. 
    // Ex, Ey, and Ez are used to store the calculated electric field
    vector<double> xyz, Exyz;
    // valid is a validity check to make sure the input from command line is a valid number
    bool valid = false;
    // numStart is a placeholder int to keep track of the starting point of another number from command line prompt
    int numStart = 0;

    
    cout << "Your computer supports " << thread::hardware_concurrency() << " threads.\n";

    /* Until vector 'nm' is filled with at least two valid numbers (greater
     * than 0), keep prompting user for rows/columns of N x M array. 
     * Since this do while loop goes through clInput on a character by
     * character basis, there is no need to check for negative inputs. 
     */
    do
    {
        valid = false;
        nm.clear();
        numStart = 0;
        cout << "Please enter the number of rows and columns in the N x M array: ";
        getline(cin, clInput);

        for (int i = 0; i < clInput.length(); i++)
        {
            // detecting a space means that a break between numbers is found
            if(isspace(clInput[i]))
            {
                nm.push_back(stoi(clInput.substr(numStart, i - numStart)));
                numStart = i + 1;
            }
            // detecting for character that is not a digit or space
            else if(!isdigit(clInput[i]))
            {
                break;
            }
            // edge case for getting to end of clInput with no issues
            // pushing last number to nm vector
            else if(i == (clInput.length() - 1))
            {
                nm.push_back(stoi(clInput.substr(numStart, i - numStart + 1)));
                valid = true;
            }
        }
    }
    while (!valid || (nm.size() < 2));


}