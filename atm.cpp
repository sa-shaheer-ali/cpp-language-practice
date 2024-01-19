#include <iostream>
using namespace std;

class user{
    private:
    string name;
    int password;

    public:
    double balance=0;
    user (string n,int p){
        name=n;
        password=p;
        }

    bool checkname(string nam){
        if (nam==name)
        {cout<<"name is valid"<<endl;return 1;

            /* code */
        }
        else{
            cout<<"incorrect name"<<endl;return 0;
        }

        
    }
    bool checkpassword(int pass){
        if(pass==password){cout<<"password is correct"<<endl;return 1;}
        else{cout<<"incorrect password";return 0;}
        }


    
};
int menu(){
  cout<<"welcome"<<endl;
  cout<<"press 1 to check the balance"<<endl;
  cout<<"press 2 to deposit "<<endl;
  cout<<"press 3 to withdraw"<<endl;
  cout<<"press 4 to exit"<<endl;
  cout<<"select:";
  int option;
  cin>>option;
  return option;

}
int main (){
    user u1=user("ellie",1234);
    string n;
    int p;
    cout<<"welcome to the atm "<<endl;
    cout<<"enter your name:"<<endl;
    cin>>n;
    cout<<"enter password:"<<endl;
    cin>>p;

    if (u1.checkname(n) && u1.checkpassword(p))
    { start:
    int i;
    i=menu();
   
        switch (i)
    {
    case 1:
    cout<<"your balance is"<<u1.balance<<endl;
        break;
        case 2:
        int dept;
        cin>>dept;
        u1.balance+=dept;
        cout<<"your total balance is now:"<<u1.balance<<endl;
        break;
        case 3:
        int with;
        cin>>with;
        u1.balance-=with;
        cout<<"your total balance is now:"<<u1.balance<<endl;
        break;
        case 4:
        cout<<"thankyou ";
        break;

    
    default:
    cout<<"wrong key";
        break;
    }
        /* code */
    
    cout<<"do you want to do again"<<endl;
    cout<<"1 for yes"<<endl;
    cout<<"2 for no"<<endl;
    int in;

    cin>>in;
    if (in ==1)
    {system("cls");
        goto start;
        
    }else{cout<<"goodbye";}}

    else{
        cout<<"invalid";
    }


    
    return 0;

}
