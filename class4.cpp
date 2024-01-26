#include <iostream>
using namespace std;
class car{
    public:
    string name;
    int price ;
    string type;
    string color;
    car(string n,int p,string t,string c){
        name=n;
        price=p;
        type=t;
        color=c;


    }
    void run(int distance){ cout<<distance<<endl;}
};

int main (){
        car maclaren=car ("f49",4500,"sporty","red");
        cout<<maclaren.name<<endl;
           cout<<maclaren.price<<endl;
              cout<<maclaren.type<<endl;
                 cout<<maclaren.color<<endl;
                 maclaren.run(40);
                 


                car ferrari =car("s2",550000,"sporty","red");
                 cout <<ferrari.name<<endl;
                  cout <<ferrari.price<<endl;
                   cout <<ferrari.type<<endl;
                    cout <<ferrari.color<<endl;

        return 0;

}