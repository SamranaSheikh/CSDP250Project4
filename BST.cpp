//Samrana Sheikh
//11-6-2023
//CSDP 250 Project 4
//BST.cpp
#include "BST.h"
#include <iostream>
#include <cstdlib>
using namespace std;

LinkedList::LinkedList()
{
    root = nullptr;
}

LinkedList::~LinkedList()
{
    clear(root);
}

Node* LinkedList::create(int val)
{
    Node* newNode = new Node;
    newNode->num = val;
    newNode->leftNext = nullptr;
    newNode->rightNext = nullptr;
    return newNode;
}

Node* LinkedList::insert(int val, Node* root)
{
    if (root == nullptr)
    {
        return create(val);
    }
    else if (val > root->num)
    {
        root->rightNext = insert(val, root->rightNext);
    }
    else
    {
        root->leftNext = insert(val, root->leftNext);
    }

    return root;
}

void LinkedList::preorder(Node* root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->num << " ";
    preorder(root->leftNext);
    preorder(root->rightNext);
}

void LinkedList::inorder(Node* root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->leftNext);
    cout << root->num << " ";
    inorder(root->rightNext);
}

void LinkedList::postorder(Node* root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->leftNext);
    postorder(root->rightNext);
    cout << root->num << " ";
}

void LinkedList::insert(int val)
{
    root = insert(val, root);
}

void LinkedList::preorder()
{
    preorder(root);
}

void LinkedList::inorder()
{
    inorder(root);
}

void LinkedList::postorder()
{
    postorder(root);
}

void LinkedList::clear(Node* root)
{
    if (root)
    {
        clear(root->leftNext);
        clear(root->rightNext);
        delete root;
    }
}
