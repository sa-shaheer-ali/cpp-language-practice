#include <iostream>
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void bubblesort(int arr[],int size){
int count=1;
for (int  i = 0; i < size-1; ++i)
{for (int j = 0; j < size-i-1; ++j)
{
    if (arr[j]>arr[j+1])
{swap(arr[j],arr[j+1]);
    /* code */
}
    /* code */
}

count++;
    /* code */
}
std::cout<<"sorted array"<<std::endl;
for (int i = 0; i < size; i++)
{std::cout<<arr[i]<<" ";

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
bubblesort(arr,size);



return 0;
}