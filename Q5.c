#include <stdio.h>

int main() {
    float x, y;

    printf("Enter coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("Point (%.2f, %.2f) lies in Quadrant I\n", x, y);
    else if (x < 0 && y > 0)
        printf("Point (%.2f, %.2f) lies in Quadrant II\n", x, y);
    else if (x < 0 && y < 0)
        printf("Point (%.2f, %.2f) lies in Quadrant III\n", x, y);
    else if (x > 0 && y < 0)
        printf("Point (%.2f, %.2f) lies in Quadrant IV\n", x, y);
    else if (x == 0 && y == 0)
        printf("Point lies at the Origin.\n");
    else if (x == 0)
        printf("Point lies on Y-axis.\n");
    else
        printf("Point lies on X-axis.\n");

    return 0;
}
