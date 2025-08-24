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
    {std::cin>>mar2[i][j];;

        /* code */
    }
    
        /* code */
    }

    for (int i = 0; i < count; i++)
    {for (int j = 0; j < count; j++)
    {for (int k = 0; k < count; k++)
    {result[i][j]+=mar1[i][k]*mar2[k][j];
        /* code */
    }
    
        /* code */
    }
    
        /* code */
    }
    for (int i = 0; i < count; i++)
    {for (int j = 0; j < count; j++)
    {std::cout<<result[i][j]<<" ";

        /* code */
    }
    std::cout<<std::endl;
    
        /* code */
    }
    return 0;
    
    

}
