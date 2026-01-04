#include <stdio.h>

int main() {
    int score;
    int A = 0, B = 0, C = 0, D = 0, F = 0;

    while (1) {
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        printf("%d(", score);

        if (score >= 68) {
            if (score >= 85) {
                printf("A");
                A++;
            }
            else if (score >= 75) {
                printf("B");
                B++;
            }
            else {
                printf("C");
                C++;
            }
        }
        else {
            if (score >= 55) {
                printf("D");
                D++;
            }
            else {
                printf("F");
                F++;
            }
        }

        printf(")\n");
    }

    printf("A(%d)\n", A);
    printf("B(%d)\n", B);
    printf("C(%d)\n", C);
    printf("D(%d)\n", D);
    printf("F(%d)\n", F);

    return 0;
}

