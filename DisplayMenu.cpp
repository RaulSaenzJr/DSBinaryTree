//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    DisplayMenu.cpp
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
//  Description:  DisplayMenu.cpp contains the implementation of the DisplayMenu class.
//******************************************************************************************************************
#include "DisplayMenu.h"

void DisplayMenu::displayMenu() {
    std::cout << "************** Employee Management System **************" << std::endl;
    std::cout << "1. Search for an ID" << std::endl;
    std::cout << "2. Display the tree" << std::endl;
    std::cout << "3. Add a new employee" << std::endl;
    std::cout << "4. Remove an employee" << std::endl;
    std::cout << "5. Save the data to a file" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "********************************************************" << std::endl;   
    std::cout << "Enter your choice (1-6): ";
}
