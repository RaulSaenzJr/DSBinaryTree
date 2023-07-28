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
