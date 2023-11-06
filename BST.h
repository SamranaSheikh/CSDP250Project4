//Samrana Sheikh
//11-6-2023
//CSDP 250 Project 4
//BST.h
#ifndef BST_H
#define BST_H

struct Node
{
    int num;

    Node* leftNext;
    Node* rightNext;
};

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();

    void insert(int val);
    void preorder();
    void inorder();
    void postorder();

private:
    Node* root;
    Node* create(int val);
    Node* insert(int val, Node* node);
    void preorder(Node* node);
    void inorder(Node* node);
    void postorder(Node* node);
    void clear(Node* node);

};

#endif
