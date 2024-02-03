
#include<iostream>
#include <vector>
class student{
    std::string first_name="first:";
    std::string last_name="last";
    int idnumber=0;
    float avg =0;
    public:
student(){}
student(std::string first,std:: string last,int id,float average)
:first_name(first),last_name(last),idnumber(id),avg(average)
{

}
    std::string getfirst()
{
    return first_name;
}
std::string getlast()
{
    return last_name;
}
void data() const
{
    std::cout<<first_name<<" "<<last_name<<" "<<idnumber<<" "<<avg<<"\n";

}

};
class course {
    std::string m_name="course";
    std::vector<student> m_students;
public:
course (){};
course (const std::string & name)
:m_name(name){}
void addstudent(const student& s){
    m_students.push_back(s);
}
const std::vector<student>&getstudent()const
{
    return m_students;
}
void print() const{
    for(const auto &s:m_students)
    {
        s.data();}
}



};
int main (){
    student s1;
    student s2("shaheer","ali",10,10.11);
     student s3("ellie","joel",12,334.3);
    // s2.data();
    // std::cout<<s3.getfirst();
    course comp4300("comp");
    comp4300.addstudent(s2);
    comp4300.print();
    return 0;}
    