#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    if (x=='R') {
        printf("Stop");
    }
    else if (x=='G') {
        printf("GO");
    }
    else if (x=='Y') {
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
  return 0;
}