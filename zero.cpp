#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums){
    int index=0;
    for(size_t i=0;i<nums.size();++i){
        if(nums[i]!=0){
            nums[index]=nums[i];
            ++index;

        }
    }
        while(index<nums.size()){
            nums[index++]=0;;

        }

}

int main (){
    std::vector<int>nums={0,4,0,1,0,4,6};
    moveZeroes(nums);
    for(size_t num:nums){
    std::cout<<num;
}
return 0;

}
