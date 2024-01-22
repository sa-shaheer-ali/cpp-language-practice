#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    srand(static_cast<unsigned int>(time(0)));
    int number =1+ rand() % 100;
    int guess;
    cout<<"i have guessed a number betwenn 1 to 100 can you guess it "<<endl;
    
    while (guess!=number)
    {cout<<"enter your number:"<<endl;
    cin>>guess;
    if (guess<number)
    {cout<<"to low guess another:"<<endl;
        /* code */
    }
    else   if (guess>number)
    {cout<<"to high guess another:"<<endl;

        /* code */
    }
    else{
        cout<<"congratulations you guessed the number!!"<<endl;
    }
    

        
    }
    return 0;

}