#include <iostream>
#include<fstream>
using namespace std;
class data{
    public:
    string name;
    int code;

};
int main (){
   class data u1,u2;
   ofstream file("file123.txt");
   
   cout<<"entry for 1:name and code:";
   cin>>u1.name;
    cin>>u1.code;
   file<<u1.name<<endl;
   file<<u1.code<<endl;
   cout<<"entry for 2:name and code:";
     cin>>u2.name;
    cin>>u2.code;
   file<<u2.name<<endl;
   file<<u2.code<<endl;
   file.close();
   return 0;
    
    
}