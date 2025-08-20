#include<iostream>
#include<cstring>

class MyString{
    int length;
    char *str;

    MyString(){
        str=new char[1];
        str[0]='\0';
        length=0;

    }
    MyString(const char* s){
        length=strlen(s);
        str=new char[length+1];
        strcpy(str,s);

    }

    MyString(const MyString* other){
        length=other->length;
        str=new char[length+1];
        strcpy(str,other->str);

    }
    ~MyString(){
        delete[] str;
    }

    int size(){
        return length;

    }

    MyString operator+(const MyString& other){
        int newlength=other.length+length;
        char * newstr=new char[length+1];
        strcpy(newstr,other.str);


        delete[]str;
        return *this;
    }

    MyString& operator=(const MyString&other){
        if(this!=&other){
            delete[] str;
            length=other.length;
            str=new char[length+1];
            strcpy(str,other.str);
        }

        return *this;;

    }
};
int main(){
    
}