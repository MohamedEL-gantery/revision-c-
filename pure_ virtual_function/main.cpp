#include <iostream>

using namespace std;

class TypeA{
private:
    int x;
public:
    TypeA(){
    x=0;
    }
    TypeA(int _x){
    x=_x;
    }

    virtual void funOne()=0;
    virtual void funTwo()=0;
};

class TypeB:public TypeA{
public:
    TypeB(){}

    TypeB(int _x):TypeA(_x){}

     virtual void funOne() override{
     cout<<"h"<<endl;
     }
};

class TypeC:public TypeB{
public:
    TypeC(){}

    virtual void funTwo() override{
     cout<<"end"<<endl;
     }


};

int main()
{
   // TypeA o1; //Compile Erro  abstract

    //TypeB o2; //compile Error

    TypeC o3; //Runs Successfully

    return 0;
}
