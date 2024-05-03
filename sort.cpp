//using sorting algorithm to find the greatest number
#include <iostream>
#include <string>
#include <algorithm>
int main(){
    std::string str={"4394092384"};
    std::sort(str.begin(),str.end(),std::greater<int> ());
    std::cout<<str;
    return 0;
}