#include <iostream>
#include <string>   
using namespace std;
class person{
    private:
    string firstname;
    string lastname;
    int age;
    public:
    person(string first,string last,int newage){
        firstname=first;
        lastname=last;
        age=newage;

    }

    void displayname(){
         cout << "First Name: " << firstname << "\nLast Name: " << lastname << "\nAge: " << age << endl;

    }
    void updateage(int updatedage){
        age=updatedage;


    }
};
int main (){
    person person1("ellie","baker",20);
    cout<<"before updated age";
    person1.displayname();
    person1.updateage(23);
    cout<<"after updated age";
      person1.displayname();
      return 0;


}