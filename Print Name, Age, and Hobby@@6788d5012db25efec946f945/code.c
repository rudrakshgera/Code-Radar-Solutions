#include <stdio.h>

int main() {
    char myname[100];
    int myage;
    char myhobby[100];
    scanf("%s", &myname);
    scanf("%d", &myage);
    scanf("%s", &myhobby);
    printf("Name: %s\n", myname);
    printf("Age: %d\n", myage);
    printf("Hobby: %s\n", myhobby);
  return 0;
}