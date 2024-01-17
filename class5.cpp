#include <iostream>
using namespace std;
class game {
    public:
    string name;
    int year;
    int price;
    game(string n,int y,int p){
        name=n;
        year=y;
        price=p;

    } 
};
int main (){
    string fav;
    cout<<"enter your favourite game:";
    cin>>fav;   
    game lastofus= game("lastofus",2019,20000);
     game godofwar= game("godofwar",2013,40000);
      game reddead= game("reddead",2009,10000);
       game csgo= game("csgo",2012,20);
if (fav==lastofus.name)
{cout<<"name:"<<lastofus.name<<endl;
 cout<<"year released:"<<lastofus.year<<endl;
 cout<<"price:"<<lastofus.price<<endl;
    /* code */
}
else if (fav==godofwar.name)
{
    cout<<"name:"<<godofwar.name<<endl;
 cout<<"year released:"<<godofwar.year<<endl;
 cout<<"price:"<<godofwar.price<<endl;
}
else if (fav ==reddead.name)
{
 cout<<"name:"<<reddead.name<<endl;
 cout<<"year release:"<<reddead.year<<endl;
 cout<<"price:"<<reddead.price<<endl;
}
else if (fav == csgo.name)
{ cout<<"name:"<<csgo.name<<endl;
 cout<<"year released:"<<csgo.year<<endl;
 cout<<"price:"<< csgo.price<<endl;
    /* code */
}
else {
    cout<<"bruh put your favourite one (:)";
}



return 0;
}