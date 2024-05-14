#include<iostream>
#include <stack>
void bottom(std::stack<int> &st,int element){
    //agr kuch nahi he jo ke nahi hoga hr dfa tu phla element jo pop tha wo ajae ga
    if (!st.empty())
    {st.push(element);
        /* code */
        return ;
    }
    //top element ajaega phir pop krdenge
    int topelement=st.top();
    st.pop();
    bottom(st,element);
    st.push(topelement);
    
}
void reverse( std::stack<int> &st){
    if (st.empty())
    {return ;
        /* code */
    }
    int element=st.top();
    st.pop();
    reverse(st);
    bottom(st,element);

    
}
int main(){
    std::stack<int> st;
    st.push(42);
    st.push(89);
    st.push(38);
    st.push(54);
    while (!st.empty())
    {std::cout<<st.top()<<std::endl;
        st.pop();
    }
    return 0;
    
}