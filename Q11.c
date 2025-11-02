#include <stdio.h>

int main() {
    int n, i, scores[100], even[100], odd[100];
    int eCount = 0, oCount = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0)
            even[eCount++] = scores[i];
        else
            odd[oCount++] = scores[i];
    }

    printf("Even scores: ");
    for (i = 0; i < eCount; i++)
        printf("%d ", even[i]);

    printf("\nOdd scores: ");
    for (i = 0; i < oCount; i++)
        printf("%d ", odd[i]);

    printf("\n");
    return 0;
}
