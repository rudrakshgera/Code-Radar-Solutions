#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x>0 && y>0 || x<0 && y<0) {
        printf("Same Sign", x,y);
    }
    else {
        printf("Different Sign", x,y);
    }
  return 0;
}