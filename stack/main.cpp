#include <iostream>

using namespace std;

class Stack{
private:
    int tos;
    int* arr;
    int size;
    static int counter;
public:
    static int GetCounter(){
        return counter;
    }

    Stack(){
    counter++;
    tos=0;
    size=5;
    arr=new int[size];
    }

    Stack(int _size){
    counter++;
    tos=0;
    size=_size;
    arr=new int[size];
    }

    ~Stack(){
    counter--;
    for(int i=0;i<size;i++){
        arr[i]=-1;
    }

    delete [] arr;

    }

    void push(int value){
        if(!IsFull()){
            this->arr[tos]=value;
           this->tos++;
        }
        else{
         cout<<"FULL!!!"<<endl;
        }
    }

    int pop(){
        int retValue;
        if(!IsEmpty()){
            tos--;
          retValue=arr[tos];

    } else
        {
            cout<<"EMPTY !!!!"<<endl;
        }
    return retValue;
    }

    int IsFull()
    {
       return tos==size;
    }

    int IsEmpty(){
     return tos=0;
    }

    friend void ViewStack(Stack param);
};

void ViewStack(Stack param)
{
    for(int i=0;i<param.tos;i++)
    {
        cout<< param.arr[i]<<endl;
    }
}

int Stack::counter=0;

int main()
{

    Stack c2(6);

    c2.push(20);
    c2.push(10);
    c2.push(155);
    c2.push(5);
    c2.push(8);
    c2.push(9);


    ViewStack(c2);
    ViewStack(c2);

    cout<<c2.GetCounter()<<endl;

    return 0;
}
