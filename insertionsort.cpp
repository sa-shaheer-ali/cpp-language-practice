#include <iostream>

void insertionsort(int arr[],int size){
for (int i = 1; i <size; i++)
{int current =arr[i];
int j=i-1;
while (arr[j]>current && arr[j]>0)
{arr[j+1]=arr[j];
    j--;
}
arr[j+1]=current;


    /* code */
}
{std::cout<<"sorted array"<<std::endl;
for (int i = 0; i < size; i++)
    std::cout<<arr[i]<<std::endl;
    /* code */
}


}

int main(){
int size;
std::cout<<"enter the size:"<<std::endl;
std::cin>>size;
int arr[size];
std::cout<<"enter array!"<<std::endl;
for (int i = 0; i < size; i++)
{std::cin>>arr[i];

    /* code */
}
insertionsort(arr,size);



return 0;
}