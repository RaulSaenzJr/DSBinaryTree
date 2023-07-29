#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "EmployeeInfo.h"
#include <fstream>

class Node
{
public:
    EmployeeInfo data;
    Node *left;
    Node *right;

    Node(const EmployeeInfo &info);
};

class BinarySearchTree
{
private:
    Node *root;

public:
    BinarySearchTree();
    ~BinarySearchTree();

    void insert(const EmployeeInfo &info);
    void remove(int emp_id);
    Node *search(int emp_id) const;
    void display() const;
    void saveToFile(const std::string &filename) const;
    bool searchID(int emp_id) const;
    Node *searchName(const std::string &name) const;

private:
    // Recursive helper functions
    void insertRecursive(Node *node, const EmployeeInfo &info);
    Node *removeRecursive(Node *node, int emp_id);
    int getHeightHelper(Node *node) const;
    int getNumberOfNodesHelper(Node *node) const;
    Node *findMinNode(Node *node) const;
    void displayRecursive(Node *node, bool isFirstNode, bool isLeftChild) const;
    void destroyRecursive(Node *node);
    Node *searchRecursive(Node *node, int emp_id) const;
    void saveRecursive(Node *node, std::ofstream &file) const;
    Node *searchNameRecursive(Node *node, const std::string &name) const;
};

#endif // BINARYSEARCHTREE_H