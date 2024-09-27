#pragma once
#include "Node.h"
#include <iostream>

class List {
public:
    List();
    ~List();

    int GetValue(int pos);
    void Push(int value);
    void Append(int value);
    void Remove(int pos); 
    void ReadList();
    void ClearList();

private:
    Node* root;
    void setRoot(Node* _root);
};