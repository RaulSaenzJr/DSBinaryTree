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
