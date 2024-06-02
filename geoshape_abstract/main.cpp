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

    Geoshape(double _dim){
    dim1=dim2=_dim;
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

    virtual double PrintArea()=0;
};

class Rectangle:public Geoshape{
public:
    Rectangle(){}

    Rectangle(double d1,double d2):Geoshape(d1,d2){}

    double PrintArea() override{
    return dim1*dim2;
    }
};

class Square:public Geoshape{
public:
    Square(){}

    Square(double d):Geoshape(d){}

    double PrintArea() override{
    return dim1*dim2;
    }
};

class Triangle:public Geoshape{
public:
    Triangle(){}

    Triangle(double _base,double _height):Geoshape(_base,_height){}

    double PrintArea(){
    return 0.5*dim1*dim2;
    }
};

class Circle:public Geoshape{
public:
    Circle(){}

    Circle(double _radius):Geoshape(_radius){}

    double PrintArea()override{
    return 3.14*dim1*dim2;
    }
};

double SumOfAreas(Geoshape** ptr,int gSize){
double sum=0;
for(int i=0;i<gSize;i++){
    sum+=ptr[i]->PrintArea();
}
return sum;
}


int main()
{
    Rectangle rarr[3]={Rectangle(1,2),Rectangle(3,4),Rectangle(5,2)};
    Square s1(10);
    Triangle t1(4,5);
    Geoshape* gPtrArr[5]={rarr,&rarr[1],&rarr[2],&s1,&t1};

    cout<<SumOfAreas(gPtrArr,5);
    return 0;
}
