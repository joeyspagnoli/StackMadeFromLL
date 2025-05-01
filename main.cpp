#include <iostream>

#include "Stack.h"

int main() {
    Stack s;
    std::cout << s.size() << std::endl;
    std::cout << s.top() << std::endl;
    s.push(5);
    s.push(6);
    s.push(7);
    std::cout << s.size() << std::endl;
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.size() << std::endl;
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.size() << std::endl;


    return 0;
}
