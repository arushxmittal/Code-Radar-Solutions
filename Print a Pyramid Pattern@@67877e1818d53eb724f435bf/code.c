#include <stdio.h>

int main() {
    int size, i, j;
    char character;

    
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    
    if (size <= 0) {
        printf("Please enter a positive integer for the size.\n");
        return 1;  
    }

    printf("Enter the character to print: ");
    scanf(" %c", &character);  

    
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size) {
                
                printf(" %c ", character);
            } else {
                
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}

