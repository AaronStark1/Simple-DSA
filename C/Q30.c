#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    printf("Factors of %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }

    return 0;
}
