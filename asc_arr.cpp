#include <iostream>
#include <vector>

bool AscArray(const std::vector<int>&arr){
    for(size_t i =0;i<arr.size()-1;++i){
    
        if(arr[i]>arr[i+1])return false;
        

    }
    true;
}

int  main (){
    std::vector<int>array={1,2,54,6,3};
    if(AscArray(array) ) {std::cout<<"the array is sorted"<<std::endl;
    }

    else {
        std::cout<<"the array is not sorted"<<std::endl;
    }
    return 0;

}
