#include <iostream>
#include "stack.h" // Assuming the file is saved as stack.h

int main() {
    Stack<int> stack;

    // Push elements onto the stack
    stack.push(15);
    stack.push(10);
    stack.push(3);

    // Display the size and check if the stack is empty
    std::cout << "Stack size: " << stack.getSize() << std::endl;
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    // Pop elements and display them
    std::cout << "Popped: " << stack.pop() << std::endl;
    std::cout << "Popped: " << stack.pop() << std::endl;

    // Display the size and check if the stack is empty again
    std::cout << "Stack size: " << stack.getSize() << std::endl;
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
