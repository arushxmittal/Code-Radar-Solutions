#include <stdio.h>

int flipbit(int num){
    return ~num;
}
int main(){
    int num;
    scanf("%d",&num);
    int fliped = flipbit(num);
    printf("%d\n", fliped);
    return 0;
}