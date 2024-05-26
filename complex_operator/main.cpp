#include <iostream>

using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    Complex(){
    real=0;
    img=0;
    }

    Complex(int _r,int _i){
    real=_r;
    img=_i;
    }

    Complex(Complex& oldObj){
    this->real=oldObj.real;
    this->img=oldObj.img;
    }

    void setReal(int _r){
    real=_r;
    }

    void setImg(int _i){
    img=_i;
    }

    int getReal() {return real;}

    int getImg() {return img;}

    Complex operator+(const Complex& right){
    Complex retValue;
    retValue.real=this->real+right.real;
    retValue.img=this->img+right.img;
    return retValue;
    }

    Complex& operator+=(const Complex& right){
    this->real=this->real+right.real;
    this->img=this->img+right.img;

    return *this;
    }

    Complex& operator++(){
    real++;
    img++;
    return *this;
    }

    Complex operator++(int dummy){
    Complex retValue(*this);
    real++;
    img++;
    return retValue;
    }

    Complex operator+(int num){
    Complex retValue(real+num,img);
    return retValue;
    }

    int operator>(const Complex& right){
    return real>right.real&&img>right.img;
    }

    Complex& operator=(const Complex& right){
    this->real=right.real;
    this->img=right.img;
    return *this;
    }

    operator int(){
    return real;
    }

   void printComplex()
    {
        cout<<real<<"+"<<img<<"i";
    }

    friend Complex operator+(int num,Complex right);
};

Complex operator+(int num,Complex right){
Complex retValue(num+right.real,right.img);
return retValue;
}


int main()
{
    Complex c1(4,5);
    Complex c2(9,7);
    Complex c3;

    //c3=c1+c2;
    //c1+=c2;
    //++c1;
    //c3=c1++;
    //c3=c1+10;


    //if(c1>c2){cout<<"t";}
    //int x=c1;
    //cout<<x<<endl;

    c1=c2;
    c1.printComplex();
    //c3.printComplex();

    return 0;
}
