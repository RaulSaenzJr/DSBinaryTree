//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    UserInput.cpp
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
//  Description:  UserInput.cpp contains the implementation of the getFileNameRetry function.
//                This function is used to get the file name from the user.
//                The function also checks if the file exists.
//                The function also prompts the user to try again if the file does not exist.
//                The function also returns the file name.
//******************************************************************************************************************
#include "UserInput.h"
#include <iostream>
#include <fstream>

std::string getFileNameRetry()
{
    while (true)
    {
        std::string fileName;
        std::cout << "Enter the file name: ";
        std::cin >> fileName;
        std::ifstream inputFile(fileName);
        if (inputFile.is_open())
        {
            inputFile.close();
            return fileName;
        }
        else
        {
            std::cout << "Error opening file " << fileName << std::endl;
            std::cout << "Please try again." << std::endl;
        }
    }
}