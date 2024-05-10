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

    // Push operation : Insert an element onto the top of the stack
    int push(int value)
    {
        Node* newNode = new Node();//1. Allocate memory for the new node
        newNode->data = value;// 2. assign value
        newNode->next = top; //3. set the next pointer of the new node to the current top node
        top = newNode; //4. Update the top pointer to the new node
        cout << "Push Value: " << value << endl;
        return value;
    }

    // pop operation : Remove the topmost element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "stack is empty." << endl;
       }
        cout << " popped value: " << top->data << endl;
        top = top->next; //update the top pointer to the next node
    }

    // Peek/Top operation: Retreive the value of the topmost element without removing it
    void peek() {
        if (top == NULL) {
            cout << "List is empty." << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }// Return the value of the top node
    }

    // isEmpty operation: Check if the stack is empty
    bool isEmpty() {
        return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
    }
};




int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto the stack
            break;
        }
    }
}

