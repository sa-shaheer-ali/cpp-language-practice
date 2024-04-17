#include <iostream>
#include <climits>
int main(){

    int count;
    std::cin>>count;
    int arr[count];
for (int i = 0; i < count; i++)
{std::cin>>arr[i];
    /* code */
}

int check=INT_MIN;
    for (int i = 0; i < count; i++)
    {for (int j =i; j < count; j++)
    {int sum=0;
        for (int k = i; k <=j; k++)
    {sum+=arr[k];
    check=std::max(sum,check);
    }
    
       
    }
    
    }
        std::cout<<check;
    std::cout<<std::endl;
    
}