#include <iostream>
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void selectionsort(int arr[],int size){
for (int i = 0; i <size-1; i++)
{for (int j= i+1; j <size; j++)
{if (arr[j]<arr[i])
{swap(arr[j],arr[i]);
    
}

}

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
selectionsort(arr,size);



return 0;
}