#include <iostream>
#include<vector>
class vec{
    public:
    int x;
    int y;
    vec(){

    }
    vec(int xin,int yin)
    :x(xin),y(yin)
        {

    }
   vec operator+(const vec&v){
    return vec(x+v.x,y+v.y);
   }
   vec & add(const vec &v)
   {
    x=x+v.x;
    y=y+v.y;
   }
    

};
int main (){
    vec v1(1,1);
    vec v2(1,1);
    vec v3=v1+v2;
    v1.add(v2).add(v2);
    std::cout<<v1.x<<" "<<v1.y<<std::endl;
    std::cout<<v3.x<<" "<<v3.y<<std::endl;
    return 0;


    
}