#include <iostream>
using namespace std;

// node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

// stack class
class Stack {

private :
    Node* top; // pointer to the top of the stack

public:
    Stack() {
        top = NULL; // initialize the stack with a null top pointer
    }
};




int main()
{
    std::cout << "Hello World!\n";
}

