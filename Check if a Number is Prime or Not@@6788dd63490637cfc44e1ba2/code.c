#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x>1 && x%1 && x%x) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
  return 0;
}