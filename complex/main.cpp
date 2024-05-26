#include <iostream>

using namespace std;
/*
class Complex{
private:
    int real;
    int img;
public:
    void setReal(int _real) {real=_real;}
    void setImg(int _img){img=_img;}
    int getReal()const {return real;}
    int getImg()const {return img;}


Complex Add(const Complex& right){
Complex obj;
obj.real=real+right.real;
obj.img=img+right.img;

return obj;
}


void print (){
if(real>0 && img <0){
    cout<<real<<"-"<<img<<"i"<<endl;
}else if (real>0 && img ==1){
  cout<<real<<"+"<<"i"<<endl;
}else if(real>0 && img == -1){
    cout<<real<<"-"<<"i"<<endl;
}else if(img ==0){
    cout<<real<<endl;
}else if(real ==0 && img>1){
      cout<<img<<"i"<<endl;
}else if(real ==0 && img==1){
      cout<<"i"<<endl;
}else if(real ==0 && img== -1){
     cout<<"-"<<"i"<<endl;
}else if(real ==0 && img<-1){
 cout<<"-"<<img<<"i"<<endl;
}else if(real ==0 && img==0){
cout<<0<<endl;
}else{
   cout<<real<<"+"<<img<<"i"<<endl;
}
}
};

Complex AddComplex(const Complex &left,const Complex &right){
Complex obj;
obj.setReal(left.getReal()+right.getReal());
obj.setImg(left.getImg()+right.getImg());

return obj;
}


int main()
{
    Complex c1,c2,c3;
    int tmp;

    cout<<"Enter real for c1 :"<<endl;
    cin>>tmp;
    c1.setReal(tmp);
    cout<<"Enter img for c1 :"<<endl;
    cin>>tmp;
    c1.setImg(tmp);

    cout<<"Enter real for c2 :"<<endl;
    cin>>tmp;
    c2.setReal(tmp);
    cout<<"Enter img for c2 :"<<endl;
    cin>>tmp;
    c2.setImg(tmp);

    c3=c1.Add(c2);
    c3.print();
    cout<<"-------------------------"<<endl;
    c3=AddComplex(c1,c2);
    c3.print();

    return 0;
}
*/
