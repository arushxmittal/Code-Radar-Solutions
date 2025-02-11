#include <stdio.h>

int findlow(int num){
    if(num == 0){
        return -1;
    }
    int findlow = num & -num;
    int pos = 0;
    while(findlow >>=1){
        pos++;
    }
    return pos;

}
int main(){
    int num;
    scanf("%d", &num);
    int pos = findlow(num);
    if(pos==-1){
        printf("No\n");
    }
    else{
        printf("%d\n", pos);
    }
    return 0;
}