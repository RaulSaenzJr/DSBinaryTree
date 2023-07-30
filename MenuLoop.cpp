//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    MenuLoop.cpp
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
//  Description:  MenuLoop.cpp contains the implementation of the menuLoop function.
//                This function is used to display the menu and handle the menu option.
//                The function also calls the appropriate function to handle the menu option.
//                The function also loops until the user exits the program.
//******************************************************************************************************************
#include "DisplayMenu.h"
#include "MenuHandler.h"

void menuLoop(BinarySearchTree &bst)
{
    int choice;
    while (true)
    {
        DisplayMenu DisplayMenu;
        DisplayMenu.displayMenu();
        std::cin >> choice;

        MenuHandler menuHandler(bst);
        menuHandler.handleMenuOption(choice);
    }
}