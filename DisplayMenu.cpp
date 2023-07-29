#include "DisplayMenu.h"

void DisplayMenu::displayMenu() {
    std::cout << "************** Employee Management System **************" << std::endl;
    std::cout << "1. Search for an ID" << std::endl;
    std::cout << "2. Display the tree" << std::endl;
    std::cout << "3. Add a new employee" << std::endl;
    std::cout << "4. Remove an employee" << std::endl;
    std::cout << "5. Save the data to a file" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "********************************************************" << std::endl;   
    std::cout << "Enter your choice (1-6): ";
}
