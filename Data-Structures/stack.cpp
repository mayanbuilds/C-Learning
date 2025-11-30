#include <iostream>
using namespace std;

class Stack {
public:
    int arr[100];    
    int top = -1;    
    int size = 5;    

    void push(int x) {
        if (top < size - 1) {
            top++;
            arr[top] = x;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    void peek() {
        if (top >= 0) {
            cout << "Top element: " << arr[top] << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    void isEmpty() {
        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
            cout << "Stack is NOT Empty" << endl;
    }
};

int main() {

    Stack s1;

    s1.isEmpty();

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.peek();

    s1.pop();
    s1.peek();

    return 0;
}
