#include<iostream>
int main(){
    int n;
    std::cin>> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {std::cin>>a[i];
        /* code */
    }
    int ans=2;
    int j=2;
    int curr;
    int pd=a[1]-a[0];
     while(j<n){
        if (pd==a[j]-a[j-1])
        {curr++;
            /* code */
        }else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=std::max(ans,curr);
        j++;
     }
        std::cout<<ans;
     return 0;

    
}