#include <stdio.h>

int main(){
    char name[30];
    int age;
    char hobby[30];
    scanf("%s\t", &name);
    scanf("%d\n", &age);
    scanf("%s", &hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name, age, hobby);
    return 0;
}