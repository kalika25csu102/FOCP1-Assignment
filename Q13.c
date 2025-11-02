#include <stdio.h>

int main() {
    int n, i, scores[100];

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    for (i = 0; i < n; i++) {
        if ((i == 0 || scores[i] >= scores[i - 1]) && (i == n - 1 || scores[i] >= scores[i + 1])) {
            printf("Peak element: %d at index %d\n", scores[i], i);
            return 0;
        }
    }

    printf("No peak element found.\n");
    return 0;
}
