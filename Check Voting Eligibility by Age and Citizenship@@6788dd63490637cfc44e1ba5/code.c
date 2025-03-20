#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x>=18 && y==1) {
        printf("Eligible", x,y);
    }
    else {
        printf("Not Eligible", x,y);
    }
  return 0;
}