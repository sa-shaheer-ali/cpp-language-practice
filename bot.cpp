#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>
#include <ctime>

class chatbot{
    public:
    void startChat(){
      
        std::cout<<"hello how are you doing."<<std::endl;
      
    while (true)
    {std::string userinput;
    std::cout<<"You:";
    std::getline(std::cin,userinput);
    std::transform(userinput.begin(),userinput.end(),userinput.begin(),::tolower);

    if (userinput=="exit"|| userinput=="goodbye" ||userinput=="bye")
    {std::cout<<"good bye see you soon."<<std::endl;
    break;
        /* code */
    }
    std::string response=generateResponse(userinput);
    std::cout << "Bot: "<<response<<std::endl;
    }


     }




     
private:
  std::string generateResponse(const std::string & userMessage)const{
    
    if (transform(userMessage, "hi")||transform(userMessage,"hello"))
    {return"hello there.what can i do for you.";
        /* code */
    }
    else if (transform(userMessage, "how are you"))
    {return"i am just a bot,but i am good.";
        /* code */
    }
    else if (transform(userMessage, "fine"))
    {return"good to hear that,how can i help you.";
        /* code */
    }
     else if (transform(userMessage,"can you help me in the problem"))
    {return"yes sure,what help do you want";
        /* code */
    }
    else if (transform(userMessage,"thanks") ||transform(userMessage,"thankyou"))
    {return":)";
        /* code */
    }
     else if (transform(userMessage,"add" )||transform(userMessage,"+"))
    {std::cout<<"yes sure, how many numbers you want to add"<<std::endl;
   
    int numbers;
    std::cin>>numbers;
    std::cout<<"enter number to add:"<<std::endl;
    int numberstoadd;
    int sum=0;
    int result;
  for (int i = 1; i <= numbers; i++)
  {std::cin>>numberstoadd;
  sum+=numberstoadd;
result=sum;
    
  }
  
  std::cout<<"sum is :"<<result<<std::endl;
  
  }
  else if (transform(userMessage,"subtract" )||transform(userMessage,"-"))
    {std::cout<<"yes sure,how many numbers you want to subtract"<<std::endl;
   
    int numbers;
    std::cin>>numbers;
    std::cout<<"enter number to sub:"<<std::endl;
    int numberstoadd;
    int sum=0;
    int result;
  for (int i = 1; i <= numbers; i++)
  {std::cin>>numberstoadd;
  sum=numberstoadd-sum;
  result=-sum;
    
  }
  
  std::cout<<"result is :"<<result<<std::endl;
  }
  else if (transform(userMessage,"divide")||transform(userMessage,"/"))
  {std::cout<<"yes sure,how many numbers you want to divide.";
    int numbers;
    std::cin>>numbers;
    if (numbers==0)
    {std::cout<<"enter a valid number."<< std::endl;
        return "";;

      /* code */
    }
    std::cout<<"enter numbers to divide.";
    int numbertodivide;
    float result=0;
    for (int i = 0; i < numbers; i++)
    {
    std::cin>>numbertodivide;
      /* code */
    
    
    if (i==1)
    {result=numbertodivide;
      
    }
    else {
      if (numbertodivide!=0)
      {result/=numbertodivide;
        
      }
      else{std::cout << "Cannot divide by zero. Please provide valid numbers." << std::endl;
                return "";}
      
      
    }}
std::cout<<"result is :"<<result<<std::endl; 



  }
  
  else if (transform(userMessage,"multiply" )||transform(userMessage,"*"))
    {std::cout<<"yes sure give me numbers: how many numbers you want to multiply"<<std::endl;
   
    float numbers;
    std::cin>>numbers;
    std::cout<<"enter number to multiply:"<<std::endl;
    int numberstoadd=0;
    float sum=1;
    float result;
  for (int i = 1; i <= numbers; i++)
  {std::cin>>numberstoadd;

  sum*=numberstoadd;
;

    
  }result=sum;
  
  std::cout<<"product is :"<<result<<std::endl;
  }
else if (transform(userMessage," time"))
  {
    auto currentTime=std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    char buffer[80];
    std::strftime(buffer,sizeof(buffer),"%Y-%m-%d" "     %H:%M:%S",localtime(&currentTime));
    std::cout<<"current date and time"<<std::endl;
    return buffer;

  }
  




    else {
            return "I'm not sure how to respond to that. Feel free to ask me anything else!";
        }

    }
    bool transform(const std::string & str, const std::string&sub)const{
        return std::search(str.begin(),str.end(),sub.begin(),sub.end(),[](char c1,char c2){
         return    std::tolower(c1)==std::tolower(c2);
        })!=str.end();
    }

  

};
int main (){
    chatbot simplebot;
    simplebot.startChat();
  
}