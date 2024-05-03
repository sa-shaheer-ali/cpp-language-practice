#include <iostream>
int main(){
    int n,s;
std::cin>> n>>s;    
    int arr[n];

    for (int i = 0; i <n; i++)
    {std::cin>>arr[i];
        /* code */
    }
    int st=-1,en=-1,i=0,j=0,sum=0;
    while (j<n && sum+arr[j]<s)
     {sum+=arr[j];
    j++;
     if (sum==s)
     {std::cout<<i+1<<" "<<j<<std::endl;
     return 0;

        /* code */
     }
     while (j<n)
     {sum+=arr[j];
     if (sum>s)
     {sum-=arr[i];
     i++;
        
     }
     if (sum==s)
     {st=i+1;
     en=j+1;
        break;
     }

     j++;
     
        /* code */
     }
     std::cout<<st<<" "<<en<<std::endl;
    }
    return 0;
    
    
    
}