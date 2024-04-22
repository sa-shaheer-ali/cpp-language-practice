#include<iostream>
#include <vector>
int linearsearch(int n,const std::vector<int>& arr,int key){
    for (int i = 0; i < n; i++)
    {if (arr[i]==key)
    {return i;
        /* code */
    }
   }return -1;
}
int main(){
    int key;
    int size;
    std::cin>>size;
    std::vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {std::cin>>arr[i];
        /* code */
    }
    std::cin>>key;

    std::cout<<linearsearch(size,arr,key);
    return 0;
    }