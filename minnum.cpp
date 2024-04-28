//finding the minimum positive number in the array
#include <iostream>
int main(){

    int count;
    std::cin>>count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {std::cin>>arr[i];
        /* code */
    }
    int N=1e6+2;
    bool check[N];
    for (int i = 0; i < count; i++)
    {check[i]=false;
        
    }
    for (int i = 0; i < count; i++)
    {
        if(arr[i]>0){check[arr[i]]=true;
        /* code */ }
    }
    int ans=-1;
    for (int i =1; i < N; i++)
    {if (check[i]==false)
    {ans=i;
    break;
        /* code */
    }
    
        /* code */
    }
    std::cout<<ans;
    return 0;
    
    
}