#include <iostream>
int main(){


    int n;
    std::cout<<"enter size"<<std::endl;
    std::cin>>n;

    int arr[n];
    std::cout<<"enter array"<<std::endl;
    for (int i = 0; i <n; i++)
    {std::cin>>arr[i];

       
    }
    int curr=0;
    for (int i = 0; i < n; i++)
    {curr=std::max(curr,arr[i]);
        /* code */
    }
    std::cout<<curr;
    
    

}