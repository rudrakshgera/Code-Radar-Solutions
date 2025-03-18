#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    if (x>0) {
        printf("Positive %d");
    }
    else if(x<0){
        printf("Negative %d");
    }
    else {
        printf("Zero %d");
    }
  return 0;
}