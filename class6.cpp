// using incampolation to take the private data
#include <iostream>
using namespace std;
class car{
    private:
    int model;
    int speed;
    string color;

    public:
    void set_speed(int s){
        speed =s;
    }
    float get_speed(){
        return speed;
    }
    
};
int main (){
    car peganni ;
    float change;
    cout<<"enter speed";
    cin>>change;
    peganni.set_speed(change);
    cout<<peganni.get_speed();
    return 0;

}