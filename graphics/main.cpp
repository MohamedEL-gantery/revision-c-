#include <iostream>
#include "graphics.h"

using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(){
    x=0;
    y=0;
    }
    Point(int _x,int _y){
    x=_x;
    y=_y;
    }
    Point(const Point& oldObj){
    x=oldObj.x;
    y=oldObj.y;
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

class Line{
private:
    Point start;
    Point end;
    int color;
public:
    Line(){
    color=0;
    }

    Line(int x1,int y1,int x2,int y2,int _color):start(x1,y1),end(x2,y2){
    color=_color;
    }

    Line(const Line& oldObj){
    start=oldObj.start;
    end=oldObj.end;
    color=oldObj.color;
    }
    void SetStart(Point _start){
        start=_start;
    }

    void SetEnd(Point _end){
    end=_end;
    }

    int SetColor(int _color){
    color=_color;
    }

    Point GetStart(){
    return start;
    }

    Point GetEnd(){
    return end;
    }

    int GetColor(){
    return color;
    }

     void DrawLine()
    {
        setcolor(color);
        line(start.GetX(),start.GetY(),end.GetX(),end.GetY());
    }
};

class Rect{
private:
    Point ul;
    Point rl;
    int color;
public:
    Rect(){
    color=0;
    }

    Rect(int x1,int y1,int x2,int y2,int _color):ul(x1,y1),rl(x2,y2){
    color=_color;
    }

    Rect(const Rect& oldObj){
    ul=oldObj.ul;
    rl=oldObj.rl;
    }

    void SetUl(Point _ul){
    ul=_ul;
    }

    void SetRl(Point _rl){
    rl=_rl;
    }

    int SetColor(int _color){
    color=_color;
    }

    Point GetUl(){
    return ul;
    }

    Point GetRl(){
    return rl;
    }

    int GetColor(){
    return color;
    }

     void DrawRect()
    {
        setcolor(color);
        rectangle(ul.GetX(),ul.GetY(),rl.GetX(),rl.GetY());
    }
};

class Circle{
private:
    Point center;
    int color;
    int radius;
public:
    Circle(){
    color=0;
    radius=0;
    }

    Circle(int x1,int y1,int _color,int _radius):center(x1,y1){
    color=_color;
    radius=_radius;
    }

    Circle(const Circle& oldObj){
    center=oldObj.center;
    color=oldObj.color;
    radius=oldObj.radius;
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

    void SetColor(int _color){
        color=_color;
        }

    int GetColor(){
        return color;
        }

    void DrawCircle(){
        setcolor(color);
        circle(center.GetX(),center.GetY(),radius*2);
    }
};

class Triangle
{
private:
    Point one;
    Point two;
    Point three;
    int color;
public:
    Triangle(){
    color=0;
    }

    Triangle(int x1,int x2,int x3,int y1,int y2,int y3,int _color):one(x1,y2),two(x2,y2),three(x3,y3){
    color=_color;
    }

    Triangle(const Triangle& oldObj){
    one=oldObj.one;
    two=oldObj.two;
    three=oldObj.three;
    color=oldObj.color;
    }

    void SetOne(Point _one){
    one=_one;
    }

    void SetTwo(Point _two){
    two=_two;
    }

    void setThree(Point _three){
    three=_three;
    }

     void SetColor(int _color){
        color=_color;
        }


    Point GetOne(){
    return one;
    }

    Point GetTow(){
    return one;
    }

    Point GetThree(){
    return one;
    }

    int GetColor(){
        return color;
        }

    void DrawTriangle(){
        setcolor(color);
        //ine(one.GetX(),one.GetY()
    }
};


int main()
{
     initgraph();
     Line l(1,2,3,5,7);

     cout<<l.DrawLine()<<endl;
     Line f(1,2,3,5,7);
     f.DrawLine();


     int x;
     cin>>x;

    return 0;
}
