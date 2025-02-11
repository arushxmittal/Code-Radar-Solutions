#include <stdio.h>

int main(){
    char firstStr[30];
    char secondStr[30];
    scanf("%s", &firstStr);
    scanf("%s", &secondStr);
    printf("You entered: %s and %s", firstStr, secondStr);
    return 0;
}