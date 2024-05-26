#include <iostream>

using namespace std;


class Queue{
private:
    int rear;
    int front;
    int size;
    int* arr;
    int counter;
public:
    Queue(){
    this->size=5;
    this->rear=size-1;
    this->front=0;
    this->counter=0;
    arr=new int[size];
    }

    Queue(int _size){
    this->size=_size;
    this->rear=size-1;
    this->front=0;
    this->counter=0;
    arr=new int[size];
    }

    ~Queue(){
    delete [] arr;
    }

    void Enqueue(int value){
    if(!IsFull()){
      rear=(rear+1)%size;
        arr[rear]=value;
        counter++;
    }else{
    cout<<"Full"<<endl;
    }
    }

    int Dequeue(){
        int  retValue;
        if(!IsEmpty()){
             front=(front+1)%size;
            retValue=arr[front];
             counter--;
        }else{
        cout<<"Empty"<<endl;
        }

    return retValue;
    }

    int IsFull(){
    return counter==size-1;
    }

    int IsEmpty(){
    return counter==0;
    }

friend void ViewQueue(Queue param);
};

void ViewQueue(Queue param)
{
      if (param.IsEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    int i = param.front;
    int count = param.counter;
    while (count > 0) {
        cout << param.arr[i] << endl;
        i = (i + 1) % param.size;
        count--;
    }
}


int main()
{

    Queue q1(5);
    q1.Enqueue(2);
    q1.Enqueue(1);
    q1.Dequeue();
    q1.Dequeue();

    ViewQueue(q1);

    return 0;
}
