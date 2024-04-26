//using transform for the conversion of upper case into lower case or wise versa

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    string str={"hello how are you doing "};
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str;;
    return 0;
}