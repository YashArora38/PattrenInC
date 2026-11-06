#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    for(int row=0;row<num;row++){
      for(int col=1;col<=row;col++){
        printf("* ");
      }
      printf("\n");
    }
    for(int row=num;row>=1;row--){
      for(int col=1;col<=row;col++){
        printf("* ");
      }
      printf("\n");
    }

    return 0;
}