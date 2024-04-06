#include<iostream>
#include <vector>
int linearsearch(int n,const std::vector<int>& arr,int key){
    int a=0;
    int b=n;
   while(a<=b)
    {int mid = a+b/2;
        if (arr[mid]==key)
    {return mid;
        /* code */
    }
    else if (arr[mid]>key)
    {b=mid-1;
        /* code */
    }
    else {mid+1;}
    
   }
}
int main(){
    int key;
    int size;
    std::cout<<"enter the size boi"<<std::endl;
    std::cin>>size;
    std::vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {std::cout<<"enter the array boi"<<std::endl;
        std::cin>>arr[i];
        /* code */
    }
    std::cin>>key;

    std::cout<<linearsearch(size,arr,key);
    return 0;
    }