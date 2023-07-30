//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    MenuHandler.h
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
//  Description:  MenuHandler.h contains the definition of the MenuHandler class.
//******************************************************************************************************************
#ifndef MENUHANDLER_H
#define MENUHANDLER_H

#include "BinarySearchTree.h"

class MenuHandler
{
    public:
    MenuHandler(BinarySearchTree &bst);
    bool handleMenuOption(int choice);

    private:
    BinarySearchTree &bst;
};
#endif // MENUHANDLER_H