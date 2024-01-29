#include <iostream>
#include <fstream>
using namespace std;
int main (){
    ofstream file("bluebird.txt");
    file<<"what is your name brother";
    file.close();
    return 0;
}