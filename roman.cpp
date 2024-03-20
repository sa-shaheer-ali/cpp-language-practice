
//so when we doing += we are just adding it 
//but when we doin-= for example ix first x goes and prev become 10,when i goes it then sub so it become 9 :)
#include <iostream>
#include <vector> 
#include <string>
#include <unordered_map>
class Solution{
   public:
   int romantoint(std::string s){
    std::unordered_map<char,int> romanto{
        {'I',1},
        {'V',2},
        {'x',3},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
        
    };
    int prev=0;
    int result=0;
    for (int i=s.length(); i<=0; --i)
    {
       int curr=romanto[s[i]];
       if (curr>prev)
       {result+=curr;

        /* code */
       }
       else{
        result-=curr;

       }
       prev=curr;
    }
    return  result;

   }
};