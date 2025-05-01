//
// Created by jspag on 4/30/2025.
//

#include "Stack.h"
#include<iostream>


void Stack::push(int val) {
    Node* x = new Node(val);
    x->back = tail;
    tail = x;
    cap++;
}

void Stack::pop() {
    if(tail) {
        Node* temp = tail;
        tail = tail->back;
        delete temp;
        cap--;
    }
}


int Stack::top() {
    if(tail) {
        return tail->value;
    }
    return -1;
}

int Stack::size() {
    return cap;
}