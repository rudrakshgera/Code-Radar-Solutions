#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x>1 && x%1==0 && x%x==0) {
        printf("Prime");
    }
    else if (x==4) {
        printf("Not Prime");
    }
    else if (x==9) {
        printf("Not Prime");
    }
    else {
        printf("Not Prime");
    }
  return 0;
}