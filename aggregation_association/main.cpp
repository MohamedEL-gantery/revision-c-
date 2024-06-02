#include <iostream>
#include "graphics.h"

using namespace std;

class Shap{
protected:
    int color;
public:
    Shap(){
    color=0;
    }

    Shap(int _color){
        color=_color;
    }

    void SetColor(int _color){
    color=_color;
    }
    int GetColor(){
    return color;
    }
};

class Point {
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

class Line :public Shap{


private:
    Point start;
    Point end;
public:
    Line(){}

    Line(int x1,int y1,int x2,int y2,int _color):start(x1,y1),end(x2,y2),Shap(_color){}

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

    Point GetStart(){
    return start;
    }

    Point GetEnd(){
    return end;
    }

     void DrawLine(){
        setcolor(color);
        line(start.GetX(),start.GetY(),end.GetX(),end.GetY());
    }
};
class Rect:public Shap{
private:
    Point ul;
    Point rl;
public:
    Rect(){}

    Rect(int x1,int y1,int x2,int y2,int _color):ul(x1,y1),rl(x2,y2),Shap(_color){}

    Rect(const Rect& oldObj){
    ul=oldObj.ul;
    rl=oldObj.rl;
    color=oldObj.color;
    }

    void SetUl(Point _ul){
    ul=_ul;
    }

    void SetRl(Point _rl){
    rl=_rl;
    }

    Point GetUl(){
    return ul;
    }

    Point GetRl(){
    return rl;
    }

     void DrawRect()
    {
        setcolor(color);
        rectangle(ul.GetX(),ul.GetY(),rl.GetX(),rl.GetY());
    }
};

class Circle:public Shap{
private:
    Point center;
    int radius;
public:
    Circle(){
    radius=0;
    }

    Circle(int x1,int y1,int _color,int _radius):center(x1,y1),Shap(_color){
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

    void DrawCircle(){
        setcolor(color);
        circle(center.GetX(),center.GetY(),radius*2);
    }
};

class Triangle:public Shap{
private:
    Point one;
    Point two;
    Point three;
public:
    Triangle(){}

    Triangle(int x1,int x2,int x3,int y1,int y2,int y3,int _color):one(x1,y2),two(x2,y2),three(x3,y3),Shap(_color){}

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

    Point GetOne(){
    return one;
    }

    Point GetTow(){
    return one;
    }

    Point GetThree(){
    return one;
    }

    void DrawTriangle(){
        setcolor(color);
        //ine(one.GetX(),one.GetY()
    }
};

class Picture{
private:
    Line* lPtr;
    int lSize;
    Rect* rPtr;
    int rSize;
    Circle* cPtr;
    int cSize;
    Triangle* tPtr;
    int tSize;
public:
    Picture(){
    lPtr=NULL;
    lSize=0;
    rPtr=NULL;
    rSize=0;
    cPtr=NULL;
    cSize=0;
    tPtr=NULL;
    tSize=0;
    }

    void SetLines(Line* _lPtr,int _lSize){
    lPtr=_lPtr;
    lSize=_lSize;
    }

    void SetRect(Rect* _rPtr,int _rSize){
    rPtr=_rPtr;
    rSize=_rSize;
    }

    void SetCircle(Circle* _cPtr,int _cSize){
    cPtr=_cPtr;
    cSize=_cSize;
    }

    void SetTriangle(Triangle*_tPtr,int _tSize){
    tPtr=_tPtr;
    tSize=_tSize;
    }

    void DoIt(){
        for(int i=0;i<lSize;i++){
            lPtr[i].DrawLine();

        }

        for(int i=0;i<rSize;i++){
            rPtr[i].DrawRect();
        }

        for(int i=0;i<cSize;i++){
            cPtr[i].DrawCircle();
        }

        for(int i=0;i<tSize;i++){
            tPtr[i].DrawTriangle();
        }
    }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
