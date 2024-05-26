#include <iostream>

using namespace std;

class Stack{
private:
    int size;
    int* arr;
    int tos;
public:
    Stack(){
    size=5;
    tos=0;
    arr=new int[size];
    }

    Stack(int _size){
    size=_size;
    tos=0;
    arr=new int[size];
    }

    Stack(const Stack& oldObj){
    this->tos=oldObj.tos;
    this->size=oldObj.size;
    this->arr=new int [size];
    for(int i=0;i<oldObj.tos;i++){
        this->arr[i]=oldObj.arr[i];
    }
    }

    ~Stack(){
    delete [] arr;
    }

    int IsFull(){
    return tos==size;
    }

    int IsEmpty(){
    return tos==0;
    }

    void Push(int value){
    if(!IsFull()){
        arr[tos]=value;
        tos++;
    }else{
    cout<<"Full"<<endl;
    }
    }

    int Pop(){
    int retValue;
    if(!IsEmpty()){
        tos--;
        retValue=arr[tos];
    }else{
    cout<<"Empty"<<endl;
    }
    return retValue;
    }

     Stack reverseStack(){
     Stack retValue(size);
     for(int i=tos-1;i>=0;i--){
        retValue.Push(arr[i]);
     }
     return retValue;
     }

     Stack& operator=(const Stack& right){
     delete [] this->arr;
     this->tos=right.tos;
     this->size=right.size;
     this->arr=right.arr;
     for(int i=0;i<tos;i++){
        this->arr[i]=right.arr[i];
     }
     return *this;
     }

    friend void ViewStack(Stack param);
};

void ViewStack(Stack param){
for(int i=0;i<param.tos;i++)
    {
        cout<< param.arr[i]<<endl;
    }

}

int main()
{
    Stack s1(6);
    Stack s2(4);

    s1.Push(1);
    s1.Push(2);
    s1.Push(3);
    s1.Push(4);
    s1.Push(5);
    s1.Push(6);

    s2=s1;
    ViewStack(s2);

    //Stack reversed = s1.reverseStack();
    //ViewStack(reversed);

    //ViewStack(s1);
    //ViewStack(s1);


    return 0;
}
