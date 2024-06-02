#include <iostream>

using namespace std;

class Geoshape{
protected:
    double dim1;
    double dim2;

public:
    Geoshape(){
    dim1=dim2=0;
    }

    Geoshape(double _dim1,double _dim2){
    dim1=_dim1;
    dim2=_dim2;
    }

    Geoshape(double _num){
        dim1=dim2=_num;
    }

    void SetDim1(double _dim1){
    dim1=_dim1;
    }

    void SetDim2(double _dim2){
    dim2=_dim2;
    }

    double GetDim1(){
    return dim1;
    }

    double GetDim2(){
    return dim2;
    }
};

class Rectangle:public Geoshape{
public:
    Rectangle(){}

    Rectangle(double _d1,double _d2){
    dim1=_d1;
    dim2=_d2;
    }

    double PrintArea(){
    return dim1*dim2;
    }
};

class Square:public Rectangle{
public:
    Square(){}

    Square(double _d){
    dim1=dim2=_d;
    }

};

class Circle:public Geoshape{
public:
    Circle(){}

    Circle(double _radius){
    dim1=dim2=_radius;
    }

    double printArea(){
    return 3.14*dim1*dim2;
    }
};

class Triangle:public Geoshape{
public:
    Triangle(){}

    Triangle(double _base,double _height){
    dim1=_base;
    dim2=_height;
    }

    double PrintArea(){
    return 0.5*dim1*dim2;
    }
};

int main()
{
    Rectangle r(1,2);
    cout<<r.PrintArea()<<endl;

    Square s(4);
    cout<<s.PrintArea()<<endl;

    Circle c(10);
    cout<<c.printArea()<<endl;

    Triangle t(3,4);
    cout<<t.PrintArea()<<endl;

    return 0;
}
