#include <iostream>
int binary (int n){
    int ans=0;
    int x=1;
    while(n>0){
    int y=n%10;
    ans+=x*y;
    x=x*2;
    n/=10;
}
return ans;


}
int main(){
    int n;
    std::cin>>n;
    std::cout<<binary(n);
}