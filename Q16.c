#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Enter position (1=front, 2=middle, 3=end): ");
    scanf("%d", &pos);

    if (pos == 1) {
        for (i = n; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = val;
        n++;
    } else if (pos == 2) {
        int mid = n / 2;
        for (i = n; i > mid; i--)
            arr[i] = arr[i - 1];
        arr[mid] = val;
        n++;
    } else if (pos == 3) {
        arr[n] = val;
        n++;
    } else {
        printf("Invalid position.\n");
        return 0;
    }

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
