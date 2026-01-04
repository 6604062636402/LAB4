#include <stdio.h>

int main() {
    int num, times;

    scanf("%d %d", &num, &times);

    for (int i = 0; i < times; i++) {
        printf("%d", num);
    }

    return 0;
}
