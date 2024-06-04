#include <iostream>
#include <unordered_map>


std::unordered_map<int, long long> memo;


long  long fib(int n){
    if(n<=1){
        return 1;

    }
    if(memo.find(n)!= memo.end()){
        return memo[n];
    }
    memo[n]= fib(n-1)+ fib(n-2);
    return memo[n];
 
}

int main(){
    int n;
    std::cout<<"enter number"<<std::endl;
    std::cin>>n;
    fib(n);
    std::cout<< fib(n);
    return 0;
}
