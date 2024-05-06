#include <iostream>
#include "function.cpp"
int ** puzzle;
Square ***  setuppuzzle(int ** puzzle){
Square  *** sudoku;
int i,j;
puzzle[i]=(Sqaure ***)malloc(sizeof(Square ** )*9);
for (int i = 0; i <9; i++)
{
   sudoku[i]=(Square**)malloc(sizeof (Square *)*9);
   for(int j;j<9;j++){
  sudoku[i][j]=(Square*) malloc(sizeof(Square)*9);
  sudoku[i][j]->number=puzzle[i][j];
  sudokup[i][j]->row=i;
  sudokup[i][j]->column=j;
  
  if (  sdudoku[i][j]->number!=0)
  {
     sdudoku[i][j]->code=POSSIBLE;


  }
  else{
    sdudoku[i][j]->code=0x0;
  }
  
}
}


}













int ** createpuzzle(){
int arr[9][9]={0,1,9,    0,0,2,    0,0,0,
               4,7,0,    6,9,0,    0,9,0,
               0,0,0,    4,0,0,    0,9,0,
               
               8,9,4,    5,0,7,    0,0,0,
               0,0,0,    6,9,0,    0,0,0,
               0,0,0,    2,0,1,    9,5,8,
               
               0,5,0,    0,0,6,    0,0,0,
               6,0,0,    6,2,8,    0,7,0,
               0,0,0,    1,0,0,    8,6,0,};

puzzle=(int**)malloc(sizeof(int*)*9);
for (int i = 0; i <9; i++)
{
   puzzle[i]=(int*)malloc(sizeof(int*)*9);
   for (int j = 0; j<9; j++)
   {
      puzzle[i][j]=arr[i][j];
   }
   

}
return 0;

 }
 
