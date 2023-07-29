#include "BinarySearchTree.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <memory>

Node::Node(const EmployeeInfo &info) : data(info), left(nullptr), right(nullptr) {}

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

BinarySearchTree::~BinarySearchTree()
{
    destroyRecursive(root);
}
int BinarySearchTree::getHeightHelper(Node *node) const
{
    if (node == nullptr)
    {
        return 0;
    }
    else
    {
        int leftHeight = getHeightHelper(node->left);
        int rightHeight = getHeightHelper(node->right);
        return 1 + std::max(leftHeight, rightHeight);
    }
}

int BinarySearchTree::getNumberOfNodesHelper(Node *node) const
{
    if (node == nullptr)
    {
        return 0;
    }
    else
    {
        return 1 + getNumberOfNodesHelper(node->left) + getNumberOfNodesHelper(node->right);
    }
}
void BinarySearchTree::insert(const EmployeeInfo &info)
{
    if (root == nullptr)
    {
        root = new Node(info);
    }
    else
    {
        // Check if the employee ID already exists
        if (search(info.getEmployeeID()) != nullptr)
        {
            std::cout << "Error: Employee ID already exists." << std::endl;
            return; // Exit the function without inserting
        }

        insertRecursive(root, info);
    }
}

void BinarySearchTree::insertRecursive(Node *node, const EmployeeInfo &info)
{
    if (info.getEmployeeID() < node->data.getEmployeeID())
    {
        if (node->left == nullptr)
        {
            node->left = new Node(info);
        }
        else
        {
            insertRecursive(node->left, info);
        }
    }
    else
    {
        if (node->right == nullptr)
        {
            node->right = new Node(info);
        }
        else
        {
            insertRecursive(node->right, info);
        }
    }
}

void BinarySearchTree::remove(int emp_id)
{
    root = removeRecursive(root, emp_id);
}

Node *BinarySearchTree::removeRecursive(Node *node, int emp_id)
{
    if (node == nullptr)
    {
        return nullptr;
    }

    if (emp_id < node->data.getEmployeeID())
    {
        node->left = removeRecursive(node->left, emp_id);
    }
    else if (emp_id > node->data.getEmployeeID())
    {
        node->right = removeRecursive(node->right, emp_id);
    }
    else
    {
        if (node->left == nullptr && node->right == nullptr)
        {
            delete node;
            node = nullptr;
        }
        else if (node->left == nullptr)
        {
            Node *temp = node;
            node = node->right;
            delete temp;
        }
        else if (node->right == nullptr)
        {
            Node *temp = node;
            node = node->left;
            delete temp;
        }
        else
        {
            Node *minRight = findMinNode(node->right);
            node->data = minRight->data;
            node->right = removeRecursive(node->right, minRight->data.getEmployeeID());
        }
    }

    return node;
}

Node *BinarySearchTree::findMinNode(Node *node) const
{
    if (node->left == nullptr)
    {
        return node;
    }
    return findMinNode(node->left);
}

Node *BinarySearchTree::search(int emp_id) const
{
    return searchRecursive(root, emp_id);
}

Node *BinarySearchTree::searchRecursive(Node *node, int emp_id) const
{
    if (node == nullptr || emp_id == node->data.getEmployeeID())
    {
        return node;
    }

    if (emp_id < node->data.getEmployeeID())
    {
        return searchRecursive(node->left, emp_id);
    }
    else
    {
        return searchRecursive(node->right, emp_id);
    }
}
bool BinarySearchTree::searchID(int emp_id) const
{
    Node *result = searchRecursive(root, emp_id);
    return (result != nullptr);
}
Node *BinarySearchTree::searchName(const std::string &name) const
{
    return searchNameRecursive(root, name);
}
Node *BinarySearchTree::searchNameRecursive(Node *node, const std::string &name) const
{
    if (node == nullptr || name == node->data.getEmployeeName())
    {
        return node;
    }

    if (name < node->data.getEmployeeName())
    {
        return searchNameRecursive(node->left, name);
    }
    else
    {
        return searchNameRecursive(node->right, name);
    }
}

void BinarySearchTree::display() const
{
    std::cout << std::setw(30) << std::left << "Employee ID Number"
              << "   " << std::setw(20) << "Employee Name" << std::endl;
    displayRecursive(root, 0, false);
}

void BinarySearchTree::displayRecursive(Node *node, bool isFirstNode, bool isLeftChild) const
{
    if (node != nullptr)
    {
        displayRecursive(node->left, false, true);

        if (isFirstNode && !isLeftChild)
        {
            std::cout << std::setw(30) << "Employee ID Number"
                      << "   " << std::setw(20) << "Employee Name" << std::endl;
        }

        std::cout << std::setw(30) << node->data.getEmployeeID() << "   " << std::setw(20) << node->data.getEmployeeName() << std::endl;

        displayRecursive(node->right, false, false);
    }
}

void BinarySearchTree::destroyRecursive(Node *node)
{
    if (node != nullptr)
    {
        destroyRecursive(node->left);
        destroyRecursive(node->right);
        delete node;
    }
}
void BinarySearchTree::saveToFile(const std::string &filename) const
{
    std::ofstream file(filename);

    if (file.is_open())
    {
        saveRecursive(root, file);
        file.close();
        std::cout << "Data saved to file successfully." << std::endl;
    }
    else
    {
        std::cout << "Error: Unable to open the file for saving." << std::endl;
    }
}

void BinarySearchTree::saveRecursive(Node *node, std::ofstream &file) const
{
    if (node != nullptr)
    {
        saveRecursive(node->left, file);
        file << node->data.getEmployeeID() << "  " << node->data.getEmployeeName() << "\n";
        saveRecursive(node->right, file);
    }
}