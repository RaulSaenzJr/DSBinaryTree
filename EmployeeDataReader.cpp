//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    EmployeeDataReader.cpp
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
//  Description:  EmployeeDataReader.cpp contains the implementation of the EmployeeDataReader class.
//                This class is used to read employee data from a file and insert it into a Binary Search Tree.
//                The class also provides a method to read employee data from a file and insert it into a Binary Search Tree.
//****************************************************************************************************************************
#include "EmployeeDataReader.h"
#include <fstream>
#include <iostream>
#include <string>

bool EmployeeDataReader::readEmployeeData(std::string fileName, BinarySearchTree &bst)
{
    std::ifstream inputFile(fileName);
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file " << fileName << std::endl;
        return false;
    }

    int emp_id;
    std::string emp_name;

    // Read employee data from the file and insert it into the Binary Search Tree
    while (inputFile >> emp_id)
    {
        // Use std::ws to consume leading whitespaces (including the newline)
        std::getline(inputFile >> std::ws, emp_name);

        EmployeeInfo employee(emp_id, emp_name);
        bst.insert(employee);
    }

    inputFile.close();
    return true;
}