#include <stdio.h>

int main() {
    char s;
    int col, row;

    scanf(" %c %d %d", &s, &col, &row);

    for (int i = 0; i < row; i++) {        
        for (int j = 0; j < col; j++) {    
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}

