#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    if (x=='a','e','i','o','u','A','E','I','O','U') {
        printf("Vowel");
    }
    else if (x>=0 || x<=100) {
        printf("Digit");
    }
    else if (x=='!','@','#','$','%','^','&','*') {
        printf("Special Character");
    }
    else {
        printf("Consonant");
    }
  return 0;
}