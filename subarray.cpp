#include <iostream>
int main(){
    int n;
    std::cout<<"enter the size: ";
    std::cin>>n;
    int arr[n];
    std::cout<<"enter the array";
    for (int i = 0; i < n; i++)
    {std::cin>>arr[i];
    
    }
    int  sum=0;
    for (int i = 0; i < n; i++)
    {for (int j = i; j < n; j++)
    {sum+=arr[j];
        /* code */
    std::cout<<sum<<std::endl;
    }
        /* code */
    }
    
    

}