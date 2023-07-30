//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    EmployeeDataReader.h
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
//  Description:  EmployeeDataReader.h contains the definition of the EmployeeDataReader class.
//******************************************************************************************************************
#ifndef EMPLOYEE_DATA_READER_h
#define EMPLOYEE_DATA_READER_h

#include <string>
#include "BinarySearchTree.h"

class EmployeeDataReader
{
public:
    static bool readEmployeeData(std::string fileName, BinarySearchTree &bst);
};

#endif // EMPLOYEE_DATA_READER_h