#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    if (x>0) {
        printf("Positive %d", x);
    }
    else if(x<0){
        printf("Negative %d", x);
    }
    else {
        printf("Zero %d", x);
    }
  return 0;
}