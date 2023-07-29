#include "DisplayMenu.h"
#include "MenuHandler.h"

void menuLoop(BinarySearchTree &bst)
{
    int choice;
    while (true)
    {
        DisplayMenu DisplayMenu;
        DisplayMenu.displayMenu();
        std::cin >> choice;

        MenuHandler menuHandler(bst);
        menuHandler.handleMenuOption(choice);
    }
}