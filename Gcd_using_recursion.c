#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;               // Base case
    return gcd(b, a % b);       // Recursive case
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));
    return 0;
}
