#include <iostream>
using namespace std;

class Queue {
public:
    int arr[10];
    int front = 0;
    int rear = 0;

    void enqueue(int x) {
        if (rear == 10) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = x;
            rear++;
        }
    }

    void dequeue() {
        if (front == rear) {
            cout << "Queue is Empty" << endl;
        } else {
            front++; 
            }
    }

    void frontElement() {  
        if (front == rear) {
            cout << "Queue is Empty" << endl;
        } else {
            cout << arr[front] << endl;
        }
    }

    void isEmpty() {
        if (front == rear)
            cout << "Queue is Empty" << endl;
        else
            cout << "Queue is NOT Empty" << endl;
    }
};

int main() {

    Queue s1;

    s1.isEmpty();

    s1.enqueue(10);
    s1.enqueue(20);
    s1.enqueue(30);

    s1.frontElement();

    s1.dequeue();
    s1.frontElement();

    return 0;
}
