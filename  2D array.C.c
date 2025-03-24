// Arrays, 2D array

#include<stdio.h>
int main () {
  int i,j;
  int marks[3][2]={
    {2,6},
    {5,9},
    {1,2}
 };
 //for (start, step, stop)
 for (i=0; i<3; i++){
   for (j=0; j<2; j++){
     printf("%d  \t", marks [i][j]);
   }
   printf("\n");
 }
    return 0;
}