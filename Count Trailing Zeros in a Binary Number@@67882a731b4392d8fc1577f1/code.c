#include <stdio.h>

int counttrail(int num){
    if(num==0){
        return sizeof(int)*8;
    }
    int count = 0;
    while((num&1)==0){
        count++;
        num>>=1;
    }
    return count;
}
int main(){
    int num;
    scanf("%d", &num);
    int result = counttrail(num);
    printf("%d\n", result);
    return 0;
}