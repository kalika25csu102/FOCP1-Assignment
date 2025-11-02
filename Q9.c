#include <stdio.h>

int main() {
    int n, i, scores[100];

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            printf("First occurrence of 99 is at index %d\n", i);
            return 0;
        }
    }

    printf("Score 99 not found in the array.\n");
    return 0;
}
