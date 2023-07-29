#include "MenuHandler.h"
#include <iostream>
#include <limits>
#include <string>

MenuHandler::MenuHandler(BinarySearchTree &bst) : bst(bst) {}

bool MenuHandler::handleMenuOption(int choice)
{
    switch (choice)
    {
    case 1:
    {
        // Search for an ID
        int searchID;
        std::cout << "Enter the Employee ID to search: ";
        std::cin >> searchID;
        Node *searchResult = bst.search(searchID);
        if (searchResult != nullptr)
        {
            std::cout << "Employee found: ";
            searchResult->data.display();
        }
        else
        {
            std::cout << "Employee not found." << std::endl;
        }
        break;
    }
    case 2:
    {
        // Display the tree
        bst.display();
        break;
    }
    case 3:
    {
        // Add a new employee
        int id;
        std::string name;
        bool validID = false;
        bool validName = false;

        while (!validID)
        {
            std::cout << "Enter Employee ID: ";
            std::cin >> id;
            // Clear the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Check if the employee ID already exists
            if (bst.searchID(id))
            {
                std::cout << "Employee ID already exists. Please choose a different ID." << std::endl;
            }
            else
            {
                validID = true;
            }
        }

        while (!validName)
        {
            std::cout << "Enter Employee Name: ";
            // Clear the input buffer
            std::getline(std::cin, name);

            // Check if the employee name already exists
            if (bst.searchName(name))
            {
                std::cout << "Employee name already exists. Please choose a different name." << std::endl;
            }
            else
            {
                validName = true;
            }
        }

        EmployeeInfo newEmployee(id, name);
        bst.insert(newEmployee);
        std::cout << "Employee added successfully. Press Enter to Continue." << std::endl;
        break;
    }

    case 4:
    {
        // Remove an employee
        int removeID;
        std::cout << "Enter the Employee ID to remove: ";
        std::cin >> removeID;
        bst.remove(removeID);
        std::cout << "Employee removed successfully." << std::endl;
        break;
    }
    case 5:
    {
        // Save the data to a file
        std::string filename;
        std::cout << "Enter the filename to save the data: ";
        std::cin >> filename;
        bst.saveToFile(filename);
        break;
    }
    case 6:
    {
        // Exit
        std::cout << "Looks like it's time for me to swing out of here! Catch you on the web-side!!\n"
                  << std::endl;
        exit(0);
    }
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
        return false;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << std::endl;
    return false;
}
