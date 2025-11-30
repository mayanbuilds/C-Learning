#include <iostream>
using namespace std;

class PriorityQueue {
public:
    int value[10];
    int priority[10];
    int size = 0;

    // ADD element with priority
    void enqueue(int v, int p) {

        if (size == 10) {
            cout << "Queue is Full\n";
            return;
        }

        value[size] = v;
        priority[size] = p;
        size++;
    }

    // REMOVE highest-priority element
    void dequeue() {

        if (size == 0) {
            cout << "Queue is Empty\n";
            return;
        }

        int highest = 0;

        // Find highest priority element
        for (int i = 1; i < size; i++) {
            if (priority[i] > priority[highest])
                highest = i;
        }

        cout << "Removed: " << value[highest] << endl;

        // Shift elements
        for (int i = highest; i < size - 1; i++) {
            value[i] = value[i + 1];
            priority[i] = priority[i + 1];
        }

        size--;
    }

    // Show front element (highest priority)
    void frontElement() {

        if (size == 0) {
            cout << "Queue is Empty\n";
            return;
        }

        int highest = 0;

        for (int i = 1; i < size; i++) {
            if (priority[i] > priority[highest])
                highest = i;
        }

        cout << "Front Element: "
             << value[highest]
             << " (Priority " << priority[highest] << ")\n";
    }

    void display() {

        for (int i = 0; i < size; i++)
            cout << "(" << value[i]
            << ", p=" << priority[i] << ") ";

        cout << endl;
    }
};

int main() {

    PriorityQueue q;

    q.enqueue(10, 2);
    q.enqueue(20, 1);
    q.enqueue(30, 3);
    q.enqueue(40, 2);

    q.display();

    q.frontElement();

    q.dequeue();

    q.display();

    return 0;
}
