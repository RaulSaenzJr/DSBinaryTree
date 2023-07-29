#include "UserInput.h"
#include <iostream>
#include <fstream>

std::string getFileNameRetry()
{
    while (true)
    {
        std::string fileName;
        std::cout << "Enter the file name: ";
        std::cin >> fileName;
        std::ifstream inputFile(fileName);
        if (inputFile.is_open())
        {
            inputFile.close();
            return fileName;
        }
        else
        {
            std::cout << "Error opening file " << fileName << std::endl;
            std::cout << "Please try again." << std::endl;
        }
    }
}