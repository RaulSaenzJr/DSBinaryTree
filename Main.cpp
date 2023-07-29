#include <iostream>
#include <fstream>
#include <string>
#include "MenuLoop.h"

int main()
{
    DisplayMenu displayMenu;
    BinarySearchTree bst;

    std::string fileName = getFileNameRetry();
    EmployeeDataReader::readEmployeeData(fileName, bst);

    menuLoop(bst);

    return 0;
}
