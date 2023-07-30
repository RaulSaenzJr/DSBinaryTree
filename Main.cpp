//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    Main.cpp
//
//  Course:       COSC 2436 Data Structures
//
//  Due Date:     7/30/2023
//  Submitted:    7/30/2023
//
//  Instructor:   Prof. Kathryn Rehfield
//
//  Chapter:      15 - 19
//
//  Description:  Main.cpp is the driver program for the Employee Data program.
//*******************************************************************************************************************
#include <iostream>
#include <fstream>
#include <string>
#include "MenuLoop.h"

int main()
{
    DisplayMenu displayMenu;
    BinarySearchTree bst;

    std::string fileName = getFileNameRetry();
    EmployeeDataReader::readEmployeeData(fileName, bst);

    menuLoop(bst);

    return 0;
}
