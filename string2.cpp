#include <iostream>
#include<cstring>

class MyString{
    int length;
    char *str;

    public:
    MyString(){

        str=new char[1];
        str[0]='\0';
        length=0;
    }

    MyString(const char *s){
        length=strlen(s);
        str=new char[length+1];
        strcpy(str,s);
    }
    MyString(const MyString&other){
        length=other.length;
        str=new char [length+1];
        strcpy(str,other.str);
    }
    ~MyString(){
        delete[] str;

    }
    int size()const {
        return length;
}
    MyString operator+(const MyString&other)const {
        int newlength=length+other.length;
       char  *newstr=new char [newlength+1];
        strcpy (newstr,str);
        strcat(newstr,other.str);
        MyString result(newstr);
        delete[]newstr;
        return result;

    }
    MyString& operator=(const MyString&other) {
        if(this!=&other){
            delete[] str;
            length=other.length;
            str=new char[length+1];
            strcpy(str,other.str);


        }
        return *this;

    }


MyString reverse()const{
    char *newchar=new char[length+1];
    for(int i=0;i<length;i++){
        newchar[i]=str[length-1-i];
    }
        newchar[length]='\0';

        MyString result(newchar);
        delete[] newchar;
        
        
    return result;
}
void print()const{
    std::cout<<str;
}
};

int main (){
    MyString s1("sup");
    MyString s2("dog");
    std::cout<<"s1:";s1.print();std::cout<<std::endl;
    std::cout<<"s2:";s2.print();std::cout<<std::endl;

    MyString s3=s1+s2;
    std::cout<<"s3:";s3.print();std::cout<<std::endl;

    MyString s5=s1.reverse();
    std::cout<<"reverse:";s5.print();std::cout<<std::endl;
    MyString s6;
    s6=s2;
    std::cout<<"assigned s6=s2:";s6.print();std::cout<<std::endl;
    return 0;
}
