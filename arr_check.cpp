#include <iostream>
#include <vector>

int arr_check(std::vector<int>&nums){
            int index=1;
        for(size_t i=1;i<nums.size()-1;++i){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                ++index;
            }
        }
        return index;
        
        }

        int main (){
            std::vector<int>nums={1,3,2,2,2,4,5,5};
            int length=arr_check(nums);
            for(size_t i=0;i<length;++i){
                std::cout<<"sorted array:"<<nums[i]<<std::endl;

            }
            return 0;
        }
        

