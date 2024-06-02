#include <iostream>
#include "graphics.h"

using namespace std;

class Shape{
protected:
    int color;
public:
    Shape(){
    color=0;
    }

    Shape(int _color){
    color=_color;
    }

    void SetColor(int _color){
        color=_color;
        }
    int GetColor(){
        return color;
        }

    virtual void Draw()=0;
};

class Point{
private:
    int x;
    int y;
public:
    Point(){
        x=y=0;
    }
    Point(int _x,int _y){
        x=_x;y=_y;
    }

    void SetX(int _x){
        x=_x;
    }
    void SetY(int _y){
        y=_y;
    }
    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }

};

class Line:public Shape{
private:
    Point start;
    Point end;
public:
    Line(){}

    Line(int x1,int y1,int x2,int y2,int _color):start(x1,y1),end(x2,y2),Shape(_color){}

    void SetStart(Point _start){
        start=_start;
    }

    void SetEnd(Point _end){
        end=_end;
    }

    Point GetStart(){
        return start;
    }

    Point GetEnd(){
        return end;
    }

    void Draw() override {
        setcolor(this->color);
        line(start.GetX(),start.GetY(),end.GetX(),end.GetY());
    }
};

class Rect:public Shape{
    private:
    Point ul;
    Point lr;
    public:
    Rect(){}

    Rect(int x1,int y1,int x2,int y2,int _color):ul(x1,y1),lr(x2,y2),Shape(_color){}

    void SetUL(Point _ul){
        ul=_ul;
    }

    void SetLR(Point _lr){
        lr=_lr;
    }

    Point GetUL(){
        return ul;
    }

    Point GetLR(){
        return lr;
    }

    void Draw(){
        setcolor(color);
        rectangle(ul.GetX(),ul.GetY(),lr.GetX(),lr.GetY());
    }
};

class Circle:public Shape{

class Picture{
private:
    Shape** ptr;
    int sSize;
public:
    Picture(){
    ptr=NULL;
    sSize=0;
    }

    void SetShapes(Shape** _ptr,int _sSize){
    ptr=_ptr;
    sSize=_sSize;
    }

    void DoIt(){
    for(int i=0;i<sSize;i++){
        ptr[0]->Draw();
    }
    }
};
    private:
    Point center;
    int radius;
    public:
    Circle(){
        radius=0;
    }
    Circle(int x1,int y1,int _radius,int _color):center(x1,y1),Shape(_color){
        radius=_radius;
    }

    void setCenter(Point _center){
        center=_center;
    }

    Point GetCenter(){
        return center;
    }

    void SetRadius(int _radius){
        radius=_radius;
    }

    int GetRadius(){
        return radius;
    }

    void Draw()
    {
        setcolor(color);
        circle(center.GetX(),center.GetY(),radius);
    }
};

int main()
{

    Rect rarr[2]={Rect(1,2,3,4,5),Rect(6,7,8,9,10)};

    Circle carr[2]={Circle(1,22,3,4),Circle(2,3,4,5)};

    Shape* sPtrArr[4]={rarr,&rarr[1],&carr[0],&carr[1]};

    Picture p1;

    return 0;
}
