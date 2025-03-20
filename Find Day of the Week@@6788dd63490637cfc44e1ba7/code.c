#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x==1) {
        printf("Monday", x);
    }
    else if (x==2) {
        printf("Tuesday", x);
    }
    else if (x==3) {
        printf("Wednesday", x);
    }
    else if (x==4) {
        printf("Thursday", x);
    }
    else if (x==5) {
        printf("Friday", x);
    }
    else if (x==6) {
        printf("Saturday", x);
    }
    else if (x==7) {
        printf("Sunday", x);
    }
    else {
        printf("Invalid", x);
    }
  return 0;
}