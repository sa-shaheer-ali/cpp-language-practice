#include <iostream>
class Shape{
    public:
    int width;
    int height;
     Shape( int w,int h): width(w),height(h){}
virtual int formula(){
    return 0 ;
 }
};
class Sqaure: public Shape{
    public:
    Sqaure(int w ,int h):Shape(w,h){}
    
    int formula()override{
        return width*height;


    }

};
class Rectangle :Shape{
    public:
   Rectangle( int w,int h):Shape(w,h){
    
   }
   int formula()override{
    return height*width;
   }
};
int main(){
    Sqaure s1(43,11);
    Rectangle r1(78,99);
  //  r1.formula(454,99);
    std::cout<< r1.formula();
   


}
