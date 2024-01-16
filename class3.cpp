#include <iostream>
using  namespace std;
int sum(int n1,int n2)
{return n1 + n2 ;}
int multi(int n1,int n2)
{return n1*n2 ;}
int divide(int n1,int n2)
{return n1/n2; }
int sub(int n1,int n2)
{return n1-n2; }
int main (){
    int n1,n2;
    int number;


    cout<<"enter two numbers:"<<endl;
    cout<<"enter first number:";
    cin>>n1;
    cout<<"enter  second number:";
    cin>>n2;
    cout<<"what will you like to  do :) 1 for addition,2 for  multiplication,3 for division,4 for subtraction";
    cin>>number;
    if (number ==1){
       cout<<"sum:"<< sum(n1,n2)<<endl;

    }
    else if (number ==2){
       cout<<"multiplicattion:"<< multi(n1,n2)<<endl;

    }
    else if (number ==3){
       cout<<"division:"<<divide(n1,n2)<<endl;

    }
    else if (number ==4){
        cout<<"subtraction:"<<sub(n1,n2)<<endl;

    }
    else {cout <<"bruh dont you know what to ask";}


    return 0;
}

