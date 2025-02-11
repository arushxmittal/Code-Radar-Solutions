#include <stdio.h>

int main(){
    int firstInt;
    int secondInt;
    int thirdInt;
    scanf("%d\t", &firstInt);
    scanf("%d\t", &secondInt);
    scanf("%d", &thirdInt);
    float avg = (float)((firstInt + secondInt + thirdInt)/3.0);
    printf("Average: %.2f", avg);
    return 0;
}