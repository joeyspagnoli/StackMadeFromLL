//
// Created by jspag on 4/30/2025.
//

#ifndef STACK_H
#define STACK_H
#include "../../../../Program Files/JetBrains/CLion 2024.1.2/bin/mingw/x86_64-w64-mingw32/include/stdlib.h"


struct Node {
    int value;
    Node *back;
    Node(int x) : value(x), back(nullptr) {}
};

class Stack {
    Node *tail = NULL;
    int cap = 0;

public:
    void printNode();
    void push(int val);
    void pop();
    int top();
    int size();
};



#endif //STACK_H
