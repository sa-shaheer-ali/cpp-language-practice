#include <iostream>
#include <unordered_map>
#include <climits>
int repeatingnumber(int  arr[],int size){
std::unordered_map<int ,int > hash;
int min_num=INT_MAX;
for (int i = 0; i <size; i++)
{if (hash.find(arr[i])!=hash.end())
{if (hash[arr[i]]<min_num)
{min_num=hash[arr[i]];
    /* code */
}


    /* code */
}
else{
    hash[arr[i]]=i;
}

    /* code */
}
return (min_num!=INT_MAX? arr[min_num]:-1);
}
int main(){

    int arr[]={12,4,5,77,4,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=repeatingnumber(arr,size);
    if (result!= -1)
    {std::cout<<"yes the repeating number is :"<< result;
        /* code */
    }
    else{std::cout<<"ha no repeating!";}
    return 0;
    

}