// simple code ofputting namein file
#include <iostream>
#include<fstream>
using namespace std;
class user{
    public:
    string name;
    void checkname(){
        cin>>name;

    }
};
int main (){
    user u1[3];
    ofstream file("file11.txt");
    for (int i = 0; i < 3; i++)
    {u1[i].checkname();
        file<<u1[i].name;
    }
    return 0;
    
}