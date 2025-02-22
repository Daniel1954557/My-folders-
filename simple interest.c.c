//Calculation of simple interest
/* 
p=principal
t=time
r=rate
SI=simple interest
*/
#include <stdio.h>
int main()
{
  int p=0;
  int t=0;
  int  r=0;
  int R=(r/100);
  printf("p:");
  scanf("%d",&p);
  printf("t:");
  scanf("%d",&t);
  printf("R:");
  scanf("%d",&R);
  int SI=p*t*R/100;
  printf("SI:%d\n",SI);
  return 0;
}