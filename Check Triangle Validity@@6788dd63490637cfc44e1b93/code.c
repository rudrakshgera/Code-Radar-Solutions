#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (x+y>z && x+z>y && y+z>x) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
  return 0;
}