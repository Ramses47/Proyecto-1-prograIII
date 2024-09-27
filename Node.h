#pragma once
#include <iostream>

class Node {
public:
    Node(int valor, Node* nextNode = nullptr);
    Node();
    ~Node();

    int GetValue() const;
    Node* GetNext() const;

    void SetValue(int value);
    void SetNextNode(Node* _next);

private:
    int valor;
    Node* nextNode;
};
