#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i, scores[100], count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    for (i = 0; i < n; i++) {
        if (isPrime(scores[i]))
            count++;
    }

    printf("Number of prime numbers in the array: %d\n", count);
    return 0;
}
