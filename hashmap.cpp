#include <iostream>
#include <map>
#include<unordered_map>
#include <vector>
std::unordered_map<int,int> functionmap(const  std::vector<int> &nums){
    std::unordered_map <int ,int > frequency;
    for(auto num:nums){
        if (frequency.find(num)==frequency.end())
        {frequency[num]=1;
            /* code */
        }
        else{
            frequency[num]++;
        }

        
    }
    return frequency;


}

int main(){

    std::vector<int > number={1,2,4,5,2,1,5,2,3,4,3};
    std::unordered_map<int ,int > frequencymap=functionmap(number);
    for(const auto & i :frequencymap){
std::cout<<i.first<<":"<<i.second<<std::endl;
    }
    return 0;
}