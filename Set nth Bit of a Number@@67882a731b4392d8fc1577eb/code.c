#include <stdio.h>

int setbit(int num, int n) {
    return num | (1 << n);

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    num = setbit(num, n);
    printf("%d\n", num);
    return 0;
}
