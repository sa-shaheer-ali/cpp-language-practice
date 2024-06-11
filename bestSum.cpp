#include<vector>
#include <iostream>
#include <algorithm>
#include <climits>

std::vector <int>bestSum(int targetSum,std::vector<int>& numbers){
    if(targetSum==0)return {};
    if(targetSum<0) return {-1};
    std::vector<int >shortestCombination;
    bool isSet=false ;
    for(int nums :numbers){
        int remainder=targetSum-nums;

        std::vector<int>remainderCombination=bestSum(remainder,numbers);
        if(!remainderCombination.empty() ){
            std::vector<int>combination=remainderCombination;
            combination.push_back(nums);

    if(!isSet||  combination.size()<shortestCombination.size()){
        shortestCombination=combination;
        isSet=true;
    } }}

//if(!isSet)return {-1};
return shortestCombination;
}

int main() {
    std::vector<int> numbers = {12, 4, 3, 5};
    std::vector<int> result = bestSum(7, numbers);
    if (result.empty()) {
        std::cout << "No combination found\n";
    } else {
        for (auto num : result) {
            std::cout << num << " ";
        }
    }
    return 0;
}