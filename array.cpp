#include <iostream>

int main(){

    int arr[4]={2,14,4,5};
    int target=18;
    for(int i=0;i<=4;i++){
        if(arr[i]+arr[i+1]==target){

            std::cout<<"it is found "<<std::endl<<arr[i]<<"  "<<arr[i+1];
            break;;

        }
        else{
            std::cout<<"havnt found it "<<std::endl;
            ;
        }
    }
    return 0;

}