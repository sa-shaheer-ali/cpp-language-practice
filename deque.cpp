//in deque we can do the pushback and pushfront form any where from the start or  from the end
#include <iostream>
#include<deque>
int main(){
    std::deque<int> deq={434,432,54,455,22,0};
    for(int d:deq){
        std::cout<<d<<" ";
    }
    std::cout<<std::endl;
    //like this one pushing in the front of the array type    
    deq.push_front(43);

    for(int d:deq){
        std::cout<<d<<" ";
    }
    std::cout<<std::endl;
    deq.pop_front();
    deq.pop_front();
for(int d:deq){
        std::cout<<d<<" ";
    }
    std::cout<<std::endl;

}