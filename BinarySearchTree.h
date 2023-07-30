//********************************************************************************************************************************
//
//  Developer:    Raul Saenz JR
//
//  Program #:    Four
//
//  File Name:    BinarySearchTree.h
//
//  Course:       COSC 2436 Data Structures
//
//  Due Date:     7/30/2023
//  Submitted:    7/30/2023
//
//  Instructor:   Prof. Kathryn Rehfield
//
//  Chapter:      15 - 19
//
//  Description:  BinarySearchTree.h contains the definition of the BinarySearchTree class.
//                This class is used to store EmployeeInfo objects in a binary search tree.
//                The class provides methods to insert, remove, search, and display the data.
//                The class also provides methods to get the height and number of nodes in the tree.
//                The class also provides a method to save the data to a file recursively.
//*******************************************************************************************************************
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