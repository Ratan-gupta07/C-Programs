#include <stdio.h>

int add(int a, int b) {
    if (b == 0)
        return a;               // Base case
    return add(a + 1, b - 1);   // Recursive step
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", add(a, b));
    return 0;
}
