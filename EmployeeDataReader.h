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