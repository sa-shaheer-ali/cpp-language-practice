#include <iostream>
int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    int prev=factorial(n-1);
    return n*prev;
}
int main(){
    int n;
    std::cin>>n;
    
    int result=0;
    result=factorial(n);
    std::cout<<result;
    return 0;
}