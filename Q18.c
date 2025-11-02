#include <stdio.h>

int main() {
    int n, i, j, arr[100], found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
        while (j < n && arr[i] == arr[j])
            j++;
    }

    if (!found)
        printf("-1");
    printf("\n");
    return 0;
}
