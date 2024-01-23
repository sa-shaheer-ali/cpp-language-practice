//same thing ass class6 
#include <iostream>
using namespace std;
class thelastofus{
    private:
    string name;
    int guns;
    string location;
    int kills;
    public:
    thelastofus (string n,int g,string l,int k){
        name =n;
        guns=g;
        location=l;
        kills=k;

    }
    void set_name(string n){
        name=n;

    }
   string get_name(){
        return name;
    }
    void set_guns(int g){
        guns=g;
    }
    int get_guns(){
        return guns;
    }

    

};
int main (){
    thelastofus aby("aby",2,"anonymous",80);
    aby.set_name("aby");
    aby.set_guns(3);
    cout<<"name:"<<aby.get_name()<<endl;
    cout<<"guns:"<<aby.get_guns();
    return 0;
}