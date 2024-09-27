#include "Node.h"

Node::Node(int valor, Node* nextNode) : valor(valor), nextNode(nextNode) {}

Node::Node() : valor(0), nextNode(nullptr) {}

Node::~Node() {
    std::cout << "Nodo destruido" << std::endl;
}

int Node::GetValue() const {
    return valor;
}

Node* Node::GetNext() const {
    return nextNode;
}

void Node::SetValue(int value) {
    valor = value;
}

void Node::SetNextNode(Node* _next) {
    nextNode = _next;
}
