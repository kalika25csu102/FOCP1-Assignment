#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("After swapping (temporary variable): a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (arithmetic): a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping (bitwise XOR): a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    int *p = &a, *q = &b;
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("After swapping (pointers): a = %d, b = %d\n", a, b);

    return 0;
}
