#include <stdio.h>

int main() {
    int num, times;

    scanf("%d %d", &num, &times);

    for (int i = 0; i < times; i++) {      
        for (int j = 0; j < times; j++) {    
            printf("%d", num);
        }
        printf("\n"); 
    }

    return 0;
}

