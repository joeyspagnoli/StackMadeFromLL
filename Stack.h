//
// Created by jspag on 4/30/2025.
//

#ifndef STACK_H
#define STACK_H

struct Node {
    int value;
    Node *back;
    Node(int x) : value(x), back(nullptr) {}
};

class Stack {
    Node *tail = nullptr;
    int cap = 0;

public:
    void printNode();
    void push(int val);
    void pop();
    int top();
    int size();
};



#endif //STACK_H
