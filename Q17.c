#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (1=front, 2=middle, 3=end): ");
    scanf("%d", &pos);

    if (pos == 1) {
        for (i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    } else if (pos == 2) {
        int mid = n / 2;
        for (i = mid; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    } else if (pos == 3) {
        n--;
    } else {
        printf("Invalid position.\n");
        return 0;
    }

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
