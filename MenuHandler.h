#ifndef MENUHANDLER_H
#define MENUHANDLER_H

#include "BinarySearchTree.h"

class MenuHandler
{
    public:
    MenuHandler(BinarySearchTree &bst);
    bool handleMenuOption(int choice);

    private:
    BinarySearchTree &bst;
};
#endif // MENUHANDLER_H