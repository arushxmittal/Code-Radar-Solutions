#include <stdio.h>

int togglebit(int num,int n){
    return num ^ (1<<n);
}
int main(){
    int num,n;
    scanf("%d %d", &num,&n);
    int result = togglebit(num,n);
    printf("%d\n", result);
    return 0;
}