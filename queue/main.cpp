#include <iostream>

using namespace std;

class Queue {
private:
    int rear;
    int front;
    int size;
    int* arr;
public:
    Queue() {
        size = 5;
        rear = -1;
        front = -1;
        arr = new int[size];
    }

    Queue(int _size) {
        size = _size;
        rear = -1;
        front = -1;
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    void Enqueue(int value) {
        if (!IsFull()) {
            if (IsEmpty()) {
                front = 0;
            }
            rear++;
            arr[rear] = value;
        } else {
            cout << "Queue is full" << endl;
        }
    }

    int Dequeue() {
        int retValue;
        if (!IsEmpty()) {
            retValue = arr[front];
            for (int i = front; i < rear; i++) {
                arr[i] = arr[i + 1];
            }
            rear--;
            if (rear < 0) {
                front = -1;
                rear = -1;
            }
            return  retValue;
        } else {
            cout << "Queue is empty" << endl;
        }
    }

    int IsFull() {
        return rear == size - 1;
    }

    int IsEmpty() {
        return front == -1;
    }

    friend void ViewQueue(Queue param);
};

void ViewQueue(Queue param) {
    if (param.IsEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        for (int i = param.front; i <= param.rear; i++) {
            cout << param.arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Queue q1(10);
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(4);
    q1.Enqueue(5);
    q1.Enqueue(6);

    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();

    ViewQueue(q1);

    return 0;
}
