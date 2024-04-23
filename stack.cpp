#include <iostream>
 #define MAX_SIZE 100
 class Stack{
    private:
    int top;
    int arr[MAX_SIZE];
    public:
    Stack(){
         top=-1;
    }
    void push(int value){
        if (top>=MAX_SIZE-1)
        {std::cout<<"stack overflow";
return ;
            /* code */
        }
    
        arr[++top]=value;
        std::cout<<value<<"pushed in the stack"<<std::endl;
        
    }
    void pop(){
        if (top<0)
        {std::cout<<"stack underflow"<<std::endl;
        return ;
            /* code */
        }
        int popped=arr[--top];
        std::cout<<popped<<"popped from the stack"<<std::endl;
    }
    bool isempty(){
return (top<0);}

int peek(){
    if(top>0){
        std::cout<<"stack is empty"<<std::endl;
        return -1;
    }
    return arr[top];
}

 };
 int main(){
    Stack stack;
    stack.push(50);
    stack.push(43);
     std::cout << "Top element of the stack: " << stack.peek() << std::endl;
     stack.pop();
     std::cout << "Top element of the stack: " << stack.peek() << std::endl;
     return 0;
 }