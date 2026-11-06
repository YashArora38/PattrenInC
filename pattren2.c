/*

    *****
    ****
    ***
    **
    *

*/
#include<stdio.h>
int main(){
  int num=0;
  scanf("%d",&num);
  for(int row=1;row<=num;row++){
    for(int col=1;col<=num-row+1;col++){
      printf("* ");
    }
    
    printf("\n");
  }
}