#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;       
    int front;      
    int rear;       
    int capacity;   
    int count;      

public:
    
    Queue(int size = 100) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Overflow: Queue is full\n";
            return;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = x;
        count++;
        cout << "Enqueued: " << x << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Underflow: Queue is empty\n";
            return -1;
        }

        int x = arr[front];
        
        front = (front + 1) % capacity;
        count--;
        return x;
    }

    int peek() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int size() { return count; }
    bool isEmpty() { return count == 0; }
    bool isFull() { return count == capacity; }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;
    cout << "Popped: " << q.dequeue() << endl;
    cout << "New front: " << q.peek() << endl;

    return 0;
}