#include <stdio.h>

int main() {
    int num1, num2, temp;

    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("HCF = %d\n", num1);
    return 0;
}
