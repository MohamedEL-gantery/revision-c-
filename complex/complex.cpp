#include <iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
    int countConstructo=0;
    int countDestructor=0;
public:
    Complex(){
        real=0;
        img=0;
        countConstructo++;
    }

    Complex(int _real,int _img){
        this->real=_real;
        this->img=_img;
        countConstructo++;
    }

    Complex(int _num){
        this->real=this->img=_num;
        countConstructo++;
    }

     ~Complex(){
        //countDestructor++;
        cout<<"Destructor"<<endl;
    }


    void initiate(){
        real=0;
        img=0;
    }

     void initiate(int _real,int _img){
        this->real=_real;
        this->img=_img;
    }

     void initiate(int _num){
        this->real=this->img=_num;
    }

    void setReal(int _real){
        (*this).real=_real;
    }

    void setImg(int _img){
        (*this).img=_img;
    }

    int getReal()const {
        return (*this).real;
    }

    int getImg()const{
        return (*this).img;
    }

    Complex add(const Complex &right){
        Complex obj;
        obj.real=(*this).real+right.real;
        obj.img=(*this).img+right.img;
        return obj;
    }

    void print(){
        cout<<real<<"+"<<img<<"i"<<endl;
        cout<<"number of constructor is :\n"<<countConstructo<<endl;
        cout<<"number of destructor is :\n"<<countDestructor<<endl;

    }


};

Complex AddComplex(const Complex &left,const Complex &right){
Complex obj;
obj.setReal(left.getReal()+right.getReal());
obj.setImg(left.getImg()+right.getImg());
return obj;
}

int main(){
Complex c1;
Complex c2(4,5);
Complex c3(10);

c2.print();

return 0;
}
