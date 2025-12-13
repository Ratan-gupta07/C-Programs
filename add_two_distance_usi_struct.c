#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter first distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inches: ");
    scanf("%d", &d1.inch);

    printf("\nEnter second distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inches: ");
    scanf("%d", &d2.inch);

    // Add inches and feet
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;

    // Convert inches to feet if inches >= 12
    while(sum.inch >= 12) {
        sum.inch -= 12;
        sum.feet++;
    }

    printf("\n--- Sum of Distances ---\n");
    printf("Feet = %d\n", sum.feet);
    printf("Inches = %d\n", sum.inch);

    return 0;
}
