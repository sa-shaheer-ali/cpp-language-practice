#include <iostream>
#include <vector>
#include <unordered_map>

std::unordered_map<int,bool> memo;
bool canSum(int targetSum,const std::vector<int> & numbers){
    
    if(targetSum==0)
    return true;
    if(targetSum<0)
    return false;

        if(memo.count(targetSum)){
        return memo[targetSum];
    }
    for(const auto & nums : numbers){
        int remainder=targetSum-nums;
        if(canSum(remainder,numbers)){
            memo[targetSum]=true;
            
            return true;
        }
    }
    memo[targetSum]=false;
    return false;
}
int main(){

    int targetSum=300;
   // std::vector<int>numbers={7,14};
    //canSum(targetSum,numbers);
    if(canSum(targetSum,{5623,22})){

            std::cout<<" it can  " << canSum(45,{43,23,22})<<std::endl;

    }
    else{
        std::cout<<"no it can not " << targetSum<<std::endl;
        
    }
    return 0;
}
