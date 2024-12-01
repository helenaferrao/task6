#include <stdexcept>

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node(T data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

template <typename T>
class Stack {
    Node<T>* top; // Pointer to the top of the stack
    int size;     // Number of elements in the stack

public:
    Stack() : top(nullptr), size(0) {}

    // Push an element onto the stack
    void push(T value) {
        top = new Node<T>(value, top);
        size++;
    }

    // Pop an element from the stack
    T pop() {
        if (top == nullptr) {
            throw std::underflow_error("Stack is empty - is not possible to remove element");
        }
        T val = top->data;
        Node<T>* oldtop = top;
        top = top->next;
        delete oldtop;
        size--;
        return val;
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return top == nullptr;
    }

    // Get the number of elements in the stack
    int getSize() const {
        return size;
    }
};

