#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    while (i<5) {
        printf("*", i);
        i++;
    }
  return 0;
}