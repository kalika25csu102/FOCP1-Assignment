#include <stdio.h>

int main() {
    int n, i, scores[100], count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    printf("Students who scored 99:\n");
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            printf("Student %d (index %d)\n", i + 1, i);
            count++;
        }
    }

    printf("Total students who scored 99: %d\n", count);
    return 0;
}
