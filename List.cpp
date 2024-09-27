#include "List.h"

List::List() : root(nullptr) {}

List::~List() {
    ClearList();
}

int List::GetValue(int pos) {
    Node* tempNode = root;
    int i = 0;

    while (tempNode && i < pos) {
        tempNode = tempNode->GetNext();
        i++;
    }

    if (i == pos && tempNode) {
        return tempNode->GetValue();
    }
    else {
        std::cerr << "Posicion fuera de rango." << std::endl;
        return -1;
    }
}

void List::Push(int value) {
    Node* newNode = new Node(value, root);
    setRoot(newNode);
}

void List::Append(int value) {
    if (!root) {
        Push(value);
        return;
    }

    Node* tempNode = root;
    while (tempNode->GetNext()) {
        tempNode = tempNode->GetNext();
    }

    Node* newNode = new Node(value, nullptr);
    tempNode->SetNextNode(newNode);
}

void List::Remove(int pos) {
    if (!root) {
        std::cerr << "La lista está vacia." << std::endl;
        return;
    }

    if (pos == 0) {
        Node* tempNode = root;
        root = root->GetNext();
        delete tempNode;
        return;
    }

    Node* tempNode = root;
    int i = 0;

    while (tempNode->GetNext() && i < pos - 1) {
        tempNode = tempNode->GetNext();
        i++;
    }

    if (i == pos - 1 && tempNode->GetNext()) {
        Node* nodeToRemove = tempNode->GetNext();
        tempNode->SetNextNode(nodeToRemove->GetNext());
        delete nodeToRemove;
    }
    else {
        std::cerr << "Posicion fuera de rango." << std::endl;
    }
}

void List::ReadList() {
    Node* tempNode = root;
    while (tempNode) {
        std::cout << tempNode->GetValue() << " -> ";
        tempNode = tempNode->GetNext();
    }
    std::cout << "nullptr" << std::endl;
}

void List::ClearList() {
    Node* tempNode = root;
    while (tempNode) {
        Node* nextNode = tempNode->GetNext();
        delete tempNode;
        tempNode = nextNode;
    }
    root = nullptr;
}

void List::setRoot(Node* _root) {
    root = _root;
}