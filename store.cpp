#include <iostream>
using namespace std;
class store{
    public:
    string game;
store(string g){
    game=g;

}

};
int main (){
    string name;

    cout<<"game name:";
    cin>>name;

     store s1=store("thelastofus");
     store s2=store("godofwar");
     store s3=store("csgo");
     store s4=store("spiderman");
     if (name==s1.game)
     {cout<<"we have the game ";
        /* code */
     }
     else if (name==s2.game)
     {cout<<"we have the game ";
        /* code */
     }
     else if (name==s3.game)
     {cout<<"we have the game ";
        /* code */
     }
     else if (name==s4.game)
     {cout<<"we have the game ";
        /* code */
     }
     else{
        cout<<"we dont have this in the store";
     }
     
     
          
return 0;
   
    
}