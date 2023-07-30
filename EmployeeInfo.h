//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    EmployeeInfo.h
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
//  Description:  EmployeeInfo.h contains the definition of the EmployeeInfo class.
//                
//******************************************************************************************************************
#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <iostream>
#include <string>

class EmployeeInfo
{
private:
    int emp_id;
    std::string emp_name;

public:
    EmployeeInfo(int id, const std::string &name);
    int getEmployeeID() const;
    std::string getEmployeeName() const;
    void display() const;
};

#endif // EMPLOYEEINFO_H
