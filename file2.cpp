
#include <iostream>
#include <fstream>
using namespace std;
int main (){
    string words;
    ifstream file("blackbird.txt");
   getline(file,words);
    cout<<words;
    file.close();
    return 0;

    
}