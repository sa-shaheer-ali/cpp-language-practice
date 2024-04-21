#include<iostream>
int main(){
    int n,m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < m; j++)
    {std::cin>>a[i][j];
        /* code */
    }
    
        /* code */
    }
   int row_start=0,row_end=n-1,column_start=0,column_end=m-1;

   while (row_start<=row_end &&  column_start<=row_end)
   {for (int col = column_start; col < column_end; col++)
   {std::cout<<a[row_start][col]<<" ";
    /* code */
   }
   row_start++;
   for (int row = row_start;row < row_end; row++)
   {std::cout<<a[row][column_end]<<" ";
    /* code */
   }
   column_end--;
   if (row_start<=row_end)
   {
    for (int col = column_end; col>=column_start; col--)
    {std::cout<<a[row_end][col];
        /* code */
    }
    row_end--;
    if ( column_start<=row_end)
    {
        for (int row =row_end;row >=row_start; row--)
        {
            std::cout<<a[row][column_start]<<" ";
        }
        column_start++;
    }
    
    
   }
   
   
   
   
   
    
   }
   
    
    
}

