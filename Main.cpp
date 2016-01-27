
#include "Stack.h"
#include <string>

// tester function

int main() {

    Stack<std::string> st1;
    st1.push("Jack").push("Zack").push("Sam").push("Maria");
    std::cout << "number of elements: " << st1.size() << std::endl;
    std::cout << "Is stack empty? " << st1.is_empty() << std::endl;
    print(st1, std::cout);
    
    Stack<std::string> st2(st1);
    st2.pop().pop();
    st2.top() = "Marty";
    std::cout << "number of elements: " << st2.size() << std::endl;
    std::cout << "Is stack empty? " << st2.is_empty() << std::endl;
    print(st2, std::cout);
    
    Stack<std::string> st3;
    std::cout << "number of elements: " << st3.size() << std::endl;
    std::cout << "Is stack empty? " << st3.is_empty() << std::endl;
    st3 = st1;
    std::cout << "number of elements: " << st3.size() << std::endl;
    std::cout << "Is stack empty? " << st3.is_empty() << std::endl;
    print(st3, std::cout);
    
    while (!st3.is_empty()) {st3.pop();}
    std::cout << "number of elements: " << st3.size() << std::endl;
    std::cout << "Is stack empty? " << st3.is_empty() << std::endl;
    print(st3, std::cout);
    
    st3.swap(st2);
    
    std::cout << "number of elements: " << st3.size() << std::endl;
    std::cout << "Is stack empty? " << st3.is_empty() << std::endl;
    print(st3, std::cout);
    
    std::cout << "number of elements: " << st2.size() << std::endl;
    std::cout << "Is stack empty? " << st2.is_empty() << std::endl;
    print(st2, std::cout);
    
    return 0;
}
