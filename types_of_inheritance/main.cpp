#include <iostream>

using namespace std;

//public
/*
class Parent{
private:
    int x;
protected:
    int y;
public:
    int z;

    Parent(){
    x=y=z=0;
    }

    void SetX(int _x){
    x=_x;
    }

    void SetY(int _y){
    y=_y;
    }

    void SetZ(int _z){
    z=_z;
    }

    int GetX(){
    return x;
    }
    int GetY(){
    return y;
    }
    int GetZ(){
    return z;
    }

    int sum(){
        return x+y+z;
    }
};

class Child:public Parent{
private:
    int a;
protected:
    int b;
public:
    int c;

    Chlid(){
        a=b=c=0;
    }

    void SetA(int _a){
    a=_a;
    }

    void SetB (int _b){
    b=_b;
    }

    void SetC (int _c){
    c=_c;
    }

    int GetA(){
    return a;
    }
    int GetB(){
    return b;
    }
    int GetC(){
    return c;
    }

    int sum(){
        return a+b+c+y+z+x.GetX();
    }
};

class SubChild:public Child{
private:
    int j;
protected:
    int i;
public:
    int k;

    SubChild(){
    k=j=i=0;
    }

    void SetJ (int _j{
    j=_j;
    }

    void SetI(int _i){
    i=_i;
    }

    void SetK(int _k){
    k=_k;
    }

    int GetK(){
    return k;
    }
    int GetI(){
    return i;
    }
    int GetJ(){
    return j;
    }

    int sum(){
        return k+j+i+a.GetA()+b+c+x.GetX()+y+z;
    }
};*/

//ptotected
/*
class Parent{
private:
    int x;
protected:
    int y;
public:
    int z;

    Parent(){
    x=y=z=0;
    }

    void SetX(int _x){
    x=_x;
    }

    void SetY(int _y){
    y=_y;
    }

    void SetZ(int _z){
    z=_z;
    }

    int GetX(){
    return x;
    }
    int GetY(){
    return y;
    }
    int GetZ(){
    return z;
    }

    int sum(){
        return x+y+z;
    }
};

class Child:protected Parent{
private:
    int a;
protected:
    int b;
public:
    int c;

    Chlid(){
        a=b=c=0;
    }

    void SetA(int _a){
    a=_a;
    }

    void SetB (int _b){
    b=_b;
    }

    void SetC (int _c){
    c=_c;
    }

    int GetA(){
    return a;
    }
    int GetB(){
    return b;
    }
    int GetC(){
    return c;
    }

    int sum(){
        return a+b+c+y+z+x.GetX();
    }
};

class SubChild:protected Child{
private:
    int j;
protected:
    int i;
public:
    int k;

    SubChild(){
    k=j=i=0;
    }

    void SetJ (int _j{
    j=_j;
    }

    void SetI(int _i){
    i=_i;
    }

    void SetK(int _k){
    k=_k;
    }

    int GetK(){
    return k;
    }
    int GetI(){
    return i;
    }
    int GetJ(){
    return j;
    }

    int sum(){
        return k+j+i+a.GetA()+b+c+x.GetX()+y+z;
    }
};*/

// private
class Parent{
private:
    int x;
protected:
    int y;
public:
    int z;

    Parent(){
    x=y=z=0;
    }

    void SetX(int _x){
    x=_x;
    }

    void SetY(int _y){
    y=_y;
    }

    void SetZ(int _z){
    z=_z;
    }

    int GetX(){
    return x;
    }
    int GetY(){
    return y;
    }
    int GetZ(){
    return z;
    }

    int sum(){
        return x+y+z;
    }
};

class Child:private Parent{
private:
    int a;
protected:
    int b;
public:
    int c;

    Chlid(){
        a=b=c=0;
    }

    void SetA(int _a){
    a=_a;
    }

    void SetB (int _b){
    b=_b;
    }

    void SetC (int _c){
    c=_c;
    }

    int GetA(){
    return a;
    }
    int GetB(){
    return b;
    }
    int GetC(){
    return c;
    }

    int sum(){
        return a+b+c;
    }
};

class SubChild:private Child{
private:
    int j;
protected:
    int i;
public:
    int k;

    SubChild(){
    k=j=i=0;
    }

    void SetJ (int _j{
    j=_j;
    }

    void SetI(int _i){
    i=_i;
    }

    void SetK(int _k){
    k=_k;
    }

    int GetK(){
    return k;
    }
    int GetI(){
    return i;
    }
    int GetJ(){
    return j;
    }

    int sum(){
        return k+j+i;
    }
};




int main()
{

    return 0;
}
