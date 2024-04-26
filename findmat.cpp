#include <iostream>
int const count=3;
int main(){
    int mar1[count][count],mar2[count][count],result[count][count]={0};
    std::cout<<"enter the matrice 1:"<<std::endl;
    for (int i = 0; i < count; i++)
    {for (int j  = 0; j < count; j++)
    {std::cin>>mar1[i][j];
        /* code */
    }
    
    
        /* code */
    }
    std::cout<<"enter the matrice 2:"<<std::endl;
    for (int i = 0; i < count; i++)
    {for (int j= 0; j < count; j++)
    {std::cin>>mar2[i][j];

        /* code */
    }
    
        /* code */
    }
std::cout<<"enter target:";
int target;
std::cin>>target;
    int r=0,c=count-1;
    while (r<count && c>0)
    {if (mar1[r][c]==target)
    {
        std::cout<<"target found!"<<std::endl;
    }
    else{
        std::cout<<"not found"<<std::endl;
    }
    
        /* code */
    }
    
    return 0;
    
    
}