//Samrana Sheikh
//11-6-2023
//CSDP 250 Project 4
//BST.cpp
#include "BST.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    LinkedList linkedList;

    cout << "Original list: ";
    for (int i = 0; i < 36; i++)
    {
        int num = rand() % 100 + 1;
        cout << num << " ";
        linkedList.insert(num);
    }

    cout << endl<< endl;
    cout<< "Preorder: " << endl;
    linkedList.preorder();
    cout << endl << endl;
    cout << "Inorder: " << endl;
    linkedList.inorder();
    cout << endl << endl;
    cout << "Postorder: " << endl;
    linkedList.postorder();
    cout << endl << endl;

    return 0;
}
