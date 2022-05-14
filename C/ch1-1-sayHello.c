#include <stdio.h>

int main() {
    char * yourName;

    printf("What's your name? ");
    scanf("%s", yourName);
    printf("Hello %s!", yourName);

    return 0;
}