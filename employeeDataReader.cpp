#include "employeeDataReader.h"
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