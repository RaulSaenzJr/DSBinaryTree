//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    EmployeeInfo.cpp
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
//  Description:  EmployeeInfo.cpp contains the implementation of the EmployeeInfo class.
//                This class is used to store employee data.
//                The class provides methods to get the employee ID and name.
//                The class also provides a method to display the employee data.
//******************************************************************************************************************
#include "EmployeeInfo.h"
#include <limits>

EmployeeInfo::EmployeeInfo(int id, const std::string &name)
    : emp_id(id), emp_name(name) {}

int EmployeeInfo::getEmployeeID() const
{
    return emp_id;
}

std::string EmployeeInfo::getEmployeeName() const
{
    return emp_name;
}

void EmployeeInfo::display() const
{
    std::cout << "Employee ID: " << emp_id << ", Employee Name: " << emp_name << std::endl;
}
