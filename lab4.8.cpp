#include <stdio.h>

int main() {
    int n, score;

    scanf("%d", &n);         

    for (int i = 0; i < n; i++) {
        scanf("%d", &score);  

        printf("%d(", score);

        if (score >= 68) {
            if (score >= 85) {
                printf("A");
            }
            else if (score >= 75) {
                printf("B");
            }
            else {
                printf("C");
            }
        }
        else {
            if (score >= 55) {
                printf("D");
            }
            else {
                printf("F");
            }
        }

        printf(")\n");
    }

    return 0;
}

