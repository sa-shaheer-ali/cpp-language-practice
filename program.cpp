#include <iostream>
#include <fstream>
using namespace std;

class data{
    public:
    string name;

};
void menu(){
   

    cout<<"our products:"<<endl;
    cout<<"1.TV"<<endl;
    cout<<"2.smartphone"<<endl;
    cout<<"3.laptops"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"what whould you like to see:"<<endl;

}
int main (){
    class data n1;

    cout<<"***welcome to our store***"<<endl;
    cout<<"what is your name:"<<endl;
    ofstream file("name.data.txt");
   cin>>n1.name;
   file<<n1.name;
    file.close();
    menu();
     int option;
     cin>>option;
start:
     
  switch (option)
  {
 
  
    case 1:{
    cout<<"on TV we have: "<<endl<<"1.samsung"<<endl<<"2.sony"<<endl<<"3.panasonic"<<endl<<"4.menu"<<endl<<"what will you like"<<endl;
   int tvoption;
    cin>>tvoption;
    
    if (tvoption==1)
    {int a;
        cout<<"in samsung we have 3 types:"<<endl<<"1. 40 inch" <<endl<<"2. 55 inch"<<endl<<"3. 75 inch"<<endl;
      
        cout<<"TO SEE THE SAMSUNG PLEASE CLICK 1."<<endl;
        cout<<"back to tv category click 0."<<endl;
        cin>>a;
        if (a==1)
        {cout<<"PLEASE GO TO SECTION 4"<<endl << "thank you see you on the counter."<<endl;
            int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            
            
        }
        else{
            system("cls");
            goto start;
        }
        


    }
    else if (tvoption==2)
    {cout<<"in sony we have 4 types:"<<endl<<"1. 40 inch" <<endl<<"2. 55 inch"<<endl<<"3. 75 inch"<<endl<<"4. 100 inch"<<endl;
        int a;
        cout<<"TO SEE THE SONY TV PLEASE CLICK 1."<<endl;
        cout<<"back to tv category  click 0."<<endl;
         cin>>a;
        if (a==1)
        {cout<<"PLEASE GO TO SECTION 2"<<endl << "thank you see you on the counter."<<endl;
           int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            
        }
        else{ system("cls");
            goto start;
        }}

        else if (tvoption==3)
        { int a;
            cout<<"in panasonic we have 2 types:"<<endl<<"1. 100 inch" <<endl<<"2. 125 inch"<<endl;
       
        cout<<"TO SEE THE PANASONIC TV PLEASE CLICK 1."<<endl;
        cout<<"back to tv category  click 0."<<endl;
         cin>>a;
        if (a==1)
        {cout<<"PLEASE GO TO SECTION 5"<<endl << "thank you see you on the counter."<<endl;
          int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            
        }
        else{ system("cls");
            goto start;
        }
    }
    
    else if(tvoption==4){
       menu();
    cout << "Please enter your choice: ";
    cin >> option;
     system("cls");
    goto start;

    }
    
    
    }
    
        break;
        case 2:{
        cout<<"in smartphones we have:"<<endl<<"1.samsung"<<endl<<"2.apple"<<endl<<"3.pixel"<<endl<<"4.menu"<<endl<<"what would you like to have:";
        int soption;
        cin>>soption;
        if (soption==1)
        {cout<<"in samsung we have: "<<endl<<"s23"<<endl<<"s24 ultra "<<endl<<"s24 "<<endl<<"s24 plus"<<endl<<"s24 ultra"<<endl;
        cout<<"TO SEE THE SAMSUNG PHONES PLEASE REACH SECTION 14 AND CLICK 1."<<endl;
        cout<<"back to phones category click 0.";
        int a;
        cin>>a;
        if (a==1)
        {cout<< "thank you see you on the counter."<<endl;
        int b;
            cout<<"exit press 1;"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            
            
            return 0;
            /* code */
        }
        else{ system("cls");
            goto start;
        }}
         else if (soption==2)
        {cout<<"in apple we have: "<<endl<<"iphone 14"<<endl<<"iphone 14 pro max "<<endl<<"iphone 15  "<<endl<<"iphone 15 pro"<<endl<<"iphone 15 pro max"<<endl;
        cout<<"TO SEE THE APPLE PHONES PLEASE REACH SECTION 11 AND CLICK 1."<<endl;
        cout<<"back to phones category click 0."<<endl;
        int a;
        cin>>a;
        if (a==1)
        {cout<< "thank you see you on the counter."<<endl;
        int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            
            return 0;
        }
        else{ system("cls");
            goto start;
        }}
         if (soption==3)
        {cout<<"in pixel we have: "<<endl<<"pixel 1"<<endl<<"pixel 2 "<<endl;
        cout<<"TO SEE THE PIXEL PHONES PLEASE REACH SECTION 12 AND CLICK 1."<<endl;
        cout<<"back to phones category click 0."<<endl;
        int a;
        cin>>a;
        if (a==1)
        {cout<< "thank you see you on the counter."<<endl;
        int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            
            return 0;
            /* code */
        }
        else{ system("cls");
            goto start;
        }}
    
    else if(soption==4){
       menu();
    cout << "Please enter your choice: ";
    cin >> option;
     system("cls");
    goto start;

    }
    
        }
        break;
        case 3:
        {
        cout<<"in laptops we have:"<<endl<<"1.samsung"<<endl<<"2.apple"<<endl<<"3.lenovo"<<endl<<"4.menu"<<endl<<"what would you like to have:";
        int loption;
        cin>>loption;
        if (loption==1)
        {cout<<"in samsung we have:"<<endl<<"1.galaxy book 1 "<<endl<<"2.galaxy book 2"<<endl<<"3.galaxy book 3 "<<endl;
        cout<<"TO SEE THE SAMSUNG LAPTOP PLEASE REACH SECTION 9 AND  CLICK 1."<<endl;
        cout<<"back to laptop category click 0."<<endl;
        int a;
         cin>>a;
        if (a==1)
        {cout<< "thank you see you on the counter."<<endl;
        int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            
        return 0;
            /* code */
        }
        else{ system("cls");
            goto start;
        }}
        else if (loption==2)
        {cout<<"in apple we have:"<<endl<<"1.macbook air 1 "<<endl<<"2.macbook pro"<<endl<<"3.macbook pro 2 "<<endl;
        cout<<"TO SEE THE APPLE LAPTOP PLEASE REACH SECTION 3 AND CLICK 1."<<endl;
        cout<<"back to laptop category click 0."<<endl;
        int a;
         cin>>a;
        if (a==1)
        {cout<< "thank you see you on the counter."<<endl;
        int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            

           return 0;
        }
        else{ system("cls");
            goto start;
        }}
        else if (loption==3)
        {cout<<"in lenovo we have:"<<endl<<"thinkpad 1 "<<endl<<"thinkpad 2 "<<endl<<"thinkpad 3 "<<endl;
        cout<<"TO SEE THE LENOVO LAPTOP PLEASE REACH SECTION 5 AND CLICK 1 ."<<endl;
        cout<<"back to laptop category click 0."<<endl;
        int a;
         cin>>a;
        if (a==1)
        {cout<<"thank you see you on the counter."<<endl;
        int b;
            cout<<"exit press 1:"<<endl;
            cout<<"back to menu press 2:"<<endl;
            cin>>b;
            if (b==1)
            {
               cout<<"thankyou"<<endl<<"see you on the counter";
               return 0;
            }
            else if (b==2)
            { system("cls");
                 goto start;
            }
            

         return 0;
        }
        else{ system("cls");
            goto start;
        }}
        else if(loption==4){
       menu();
    cout <<"Please enter your choice: "<<endl;
    cin >> option; 
    system("cls");
    goto start;

    }
        }
break;
case 4:{
    system("cls");
    cout<<"THANKYOU!";
    return 0;
}

    

  default:
        cout <<"wrong number please select from the given number."<<endl;
            menu();
    cout << "Please enter your choice: "<<endl;
    cin >> option;
     system("cls");
    goto start;
        break;
    }

    

    return 0;
}