/*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/


#include <stdio.h>

int main() {
  int num=0;
scanf("%d",&num);
  for (int row = 1; row <= num; row++)
  {
    for(int col=1;col<=row;col++){
      printf("%d",col);
    }
    printf("\n");
    
  }

    return 0;
}