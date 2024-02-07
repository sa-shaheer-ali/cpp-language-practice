#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string data(const string  &input){
   string check=input;
   reverse(check.begin(),check.end());
   return check;
   

}
int main (){
    
    cout<<"enter some data:";
    string checkinput;
    getline(cin,checkinput);
    data(checkinput);
    // string processdata=checkinput;
    cout<<data(checkinput);
    return 0;





}