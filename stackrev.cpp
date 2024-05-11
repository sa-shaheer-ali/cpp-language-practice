#include <iostream>
#include <string>
#include <stack>
int reverse (std::string s){

    std::stack<std::string> st;
    for (int i = 0; i < s.length(); i++)
    {
    std::string word="";
     while (s[i]!=' ' && i<s.length())
     {word+= s[i];
     i++;
        /* code */
     }
     st.push(word);
    }
     while (!st.empty())
     {std::cout<<st.top();
     st.pop();
        /* code */
     }
     
 

  
}
int main(){
std::string sen="hello how are you!";
reverse(sen);

}