#include <iostream>
#include <vector>
#include <unordered_map>
#include <optional>
using OptVector= std::optional<std::vector<int>>;
std::unordered_map<int,OptVector> memo;
OptVector howSum(int  targetSum,std::vector<int>&numbers){
    
if(targetSum==0)
return std::vector<int>{};
if( targetSum<0)
return std::nullopt;
if(memo.count(targetSum)){
    return memo[targetSum];
}
for(auto & nums : numbers ){
    int remainder=targetSum-nums;
    OptVector remainderResult=howSum(remainder,numbers);
    if(remainderResult!=std::nullopt){
        remainderResult->push_back(nums);
        return memo[targetSum]=remainderResult;
    }


}
return memo[targetSum]=std::nullopt;
return std::nullopt;
}

int main(){
   // int targetSum=7;
 //   std::vector<int>nums ={2,3};
    OptVector result=howSum(7,{2,4});
    OptVector result=howSum(300,{2,4});
    for(auto n:*result){
        std::cout<<n<<' ';
    }
return 0;
}
